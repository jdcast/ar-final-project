using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using MultiUserCapabilities;
using Photon.Pun;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR;
using Scripts;


    public class MeshSaverLoader : MonoBehaviour//MonoBehaviourPunCallbacks, IInRoomCallbacks
    {

    [SerializeField] private ScrollRouteMenuPopulator scrollMeshMenuScript = default;
    [SerializeField] private GameObject scrollMeshMenu = default;
    [SerializeField] private InputField keyboardInput = default;
    [SerializeField] public GameObject keyboardInputContainer = default;
    [SerializeField] private TCPClient tcpClient = default;
    [SerializeField] private MeshSerializer meshSerializer = default;
    [SerializeField] private MeshController meshController = default;
    private bool showScrollMeshMenu = false;
    public GameObject tapSphere;
    private string SerializedMesh = null;
    private bool showKeyboard = false;

    // room property key to access routes on server
    public static readonly string ROUTES_ON_SERVER_CUSTOM_PROPERTY = "meshesOnServer";

    // enum for currently active scroll menu
    public enum ScrollMenu
    {
        None,
        Instantiate
    }

    // currently active scroll menu
    private ScrollMenu activeScrollMenu = ScrollMenu.None;

    private void Start()
    {
        keyboardInputContainer.SetActive(false);
    }


    public void saver_initialize(Vector3 hitPoint,Vector3 endPoint,GameObject hitGO)
    {
        GameObject gameObject = PhotonNetwork.Instantiate(tapSphere.name, endPoint, Quaternion.identity);

        gameObject.transform.localScale = Vector3.one * 0.05f;
        StartCoroutine(DestroyObjectDelayed(gameObject, .2f));
        byte[] buffer = MeshSerializer.MeshToByteArray(hitGO.GetComponent<MeshFilter>().mesh);
        SerializedMesh = System.Text.Encoding.UTF8.GetString(buffer, 0, buffer.Length);
        Debug.Log($"Mesh length: {hitGO.GetComponent<MeshFilter>().mesh.vertices.Length}");
        //Debug.Log($"Shared Mesh length: {hitGO.GetComponent<MeshFilter>().sharedMesh.vertices.Length}");
        Debug.Log($"Serialized Mesh length: {SerializedMesh.Length}");
        //SerializedMesh = MeshSerializer.MeshToByteArray(hitGO.GetComponent<MeshFilter>().sharedMesh).ToString();
        //Debug.Log($"Serialized Mesh length: {SerializedMesh.Length}");
        ToggleKeyboardInput();
    }

    public void SaveMesh(string text)
    {
        Debug.Log($"text: {text}");
        if (text == "")
        {
            Debug.Log("No filename given, aborting.");
            return;
        }

        string filename = text + ".txt";

        // route all TCP calls through master client since it's the one with a connection
        gameObject.GetPhotonView().RPC("PunRPC_CreateMesh", RpcTarget.MasterClient, filename, SerializedMesh);

        keyboardInputContainer.SetActive(false);
    }

    [PunRPC]
    public async void PunRPC_CreateMesh(string filename, string SerializedMesh)
    {
        await tcpClient.SendFile(filename: filename, serializedMesh: SerializedMesh);
    }

    public async void LoadStart()
    {
        await GetMeshesForInstantiation();
    }

    private IEnumerator DestroyObjectDelayed(GameObject gameObject, float time)
        {
            yield return new WaitForSeconds(time);
            PhotonNetwork.Destroy(gameObject);
        }

    public Task GetMeshesForInstantiation()
    {
        // close/clear menu if already open so we don't accidentally keep filling it up
        if (showScrollMeshMenu)
        {
            EmptyCloseScrollMeshMenu();
            activeScrollMenu = ScrollMenu.None;
            //return;
            return Task.CompletedTask;
        }

        activeScrollMenu = ScrollMenu.Instantiate;

        // display scroll route menu
        scrollMeshMenu.SetActive(true);
        showScrollMeshMenu = true;

        // wire up listener on menu
        scrollMeshMenu.transform.Find("ScrollingObjectCollection").GetComponent<ScrollingObjectCollection>().OnClick.AddListener(ScrollRouteMenuClick);

        // tell master client to get the list of available routes from server and then broadcast this list to other clients
        gameObject.GetPhotonView().RPC("PunRPC_GetMeshList", RpcTarget.MasterClient);

        return Task.CompletedTask;
    }

    public async void ScrollRouteMenuClick(GameObject go)
    {
        if (go != null)
        {
            string mesh = $"{go.name}";

            // don't process click if the route is already in scene as otherwise holds can get parented to the wrong route parent later on
            //if (IsRouteInScene(route)) { return; }

            // retrieve route
            gameObject.GetPhotonView().RPC("GetMesh", RpcTarget.MasterClient, mesh);

            // empty menu and close it
            EmptyCloseScrollMeshMenu();
        }
    }

    [PunRPC]
    private async void PunRPC_GetMeshList()
    {
        // gather list of routes
        List<string> meshList = await tcpClient.GetMeshList();
        string meshListString = string.Join(",", meshList); // PUN2 doesn't support arrays/lists as parameters
        gameObject.GetPhotonView().RPC("PunRPC_UpdateScrollRouteMenu", RpcTarget.All, meshListString, (int)ScrollMenu.Instantiate);
    }


    [PunRPC]
    private async void GetMesh(string mesh)
    {
        // list of hold names and their respective transforms
        string mesh_file = await tcpClient.GetMesh(mesh);

        InstantiateMesh(mesh_file);
    }

    [PunRPC]
    private async void PunRPC_UpdateScrollRouteMenu(string meshListString, int scrollMenuType)
    {
        // don't update the scroll menu unless we have the same one currently actively in use
        if (scrollMenuType == (int)activeScrollMenu)
        {
            // this logic allows us to empty the menu as otherwise, the split would still return on element even for empty string
            List<string> meshList = new List<string>();
            int count = 0;
            if (meshListString != "")
            {
                meshList = meshListString.Split(',').ToList();
                count = meshList.Count;
            }

            // empty menu
            EmptyScrollMeshMenu();

            // emptying the menu takes a bit of time
            await Task.Delay(1000);

            // populate menu
            scrollMeshMenuScript.NumItems = count;
            scrollMeshMenuScript.MakeScrollingList(meshList);

            // necessary to call this so that scroll is enabled again: https://github.com/microsoft/MixedRealityToolkit-Unity/issues/10350
            scrollMeshMenu.transform.Find("ScrollingObjectCollection").GetComponent<ScrollingObjectCollection>().UpdateContent();
        }
    }

    public void InstantiateMesh(string mesh_file)
    {
        Mesh mesh = (Mesh)(meshSerializer.ByteArrayToMesh(Encoding.UTF8.GetBytes(mesh_file)));
        meshController.loadedMesh = mesh;

    }

    public void ToggleKeyboardInput()
    {
        Debug.Log("Entered Toggle Keyboard");
        if (showKeyboard)
        {
            keyboardInputContainer.SetActive(false);
            showKeyboard = false;
        }
        else
        {
            keyboardInputContainer.SetActive(true);
            showKeyboard = true;
        }
        keyboardInput.text = "";
    }

    [PunRPC]
    private void PunRPC_EmptyCloseScrollMeshMenu()
    {
        EmptyCloseScrollMeshMenu();
    }

    private void EmptyCloseScrollMeshMenu()
    {
        scrollMeshMenu.transform.Find("ScrollingObjectCollection").GetComponent<ScrollingObjectCollection>().OnClick.RemoveAllListeners();
        foreach (Transform child in scrollMeshMenu.transform.Find("ScrollingObjectCollection/Container").transform)
        {
            GameObject.Destroy(child.gameObject);
        }
        scrollMeshMenu.SetActive(false);
        showScrollMeshMenu = false;
    }

    private void EmptyScrollMeshMenu()
    {
        foreach (Transform child in scrollMeshMenu.transform.Find("ScrollingObjectCollection/Container").transform)
        {
            GameObject.Destroy(child.gameObject);
        }
    }

    private void DeleteRouteFile(string filename = "")
    {
        string path = Path.Combine(Application.persistentDataPath, filename);
        File.Delete(path);
    }


        //// SAVE for reference in how to update scroll menu based on room properties
        //// Eventually this method should simply update the menu if open for other clients.  But for now, due to a bug where the other clients' menus
        //// are emptied but not repopulated, we simply close/empty the menu for them.

//        public override void OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable propertiesThatChanged)
//        {
//            base.OnRoomPropertiesUpdate(propertiesThatChanged);

//            object keyValue = null;

//#if UNITY_2020
//                    if (propertiesThatChanged.TryGetValue(
//                        ROUTES_ON_SERVER_CUSTOM_PROPERTY, out keyValue))
//                    {
//                        // If the anchorId property is present and the scroll menu is open then we will try to update the scroll menu
//                        if (keyValue != null)
//                        {
//                            Debug.Log($"RouteManipulator:OnRoomPropertiesUpdate -> {keyValue}");
//                            string[] routeArray = (string[])keyValue;
//                            List<string> routeList = routeArray.ToList();
//                            Debug.Log($"length: {routeList.Count}");
//                            for (int i = 0; i < routeList.Count; i++)
//                            {
//                                Debug.Log($"room route: {routeList[i]}");
//                            }
//                            Debug.Log(showScrollRouteMenu);

//                            if (showScrollRouteMenu && routeList.Count > 0)
//                            {
//                                Debug.Log("Emptying and Repopulating Menu");
//                                // empty menu
//                                EmptyScrollRouteMenu();

//                                // populate menu
//                                scrollRouteMenuScript.NumItems = routeList.Count;
//                                scrollRouteMenuScript.MakeScrollingList(routeList);
//                            }
//                        } 
//                    }
//                    else
//                    {
//                        Debug.Log("RouteManipulator:OnRoomPropertiesUpdate: routes not present in room properties");
//                    }
//#endif
//        }
    }