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
        // parent to all specific routes (i.e. not merged with scene)
        //[SerializeField] private GameObject globalRouteParent = default;

        // parent to all holds except for those under specific routes
        //[SerializeField] private GameObject globalHoldParent = default;

        //[SerializeField] private HoldManipulator holdManipulator = default;

        // prefab to use as parent for instatiated meshes
        //[SerializeField] private GameObject meshParentPrefab = default;
        [SerializeField] public GameObject SpawnParent = default;

        // scroll menu populator for route merge choices
        [SerializeField] private ScrollRouteMenuPopulator scrollMeshMenuScript = default;

        // scroll menu for route merge choices
        [SerializeField] private GameObject scrollMeshMenu = default;
        private bool showScrollMeshMenu = false;

        // filename keyboard/input related fields
        [SerializeField] private InputField keyboardInput = default;
        [SerializeField] private GameObject keyboardInputContainer = default;
        private bool showKeyboard = false;

        // TCPClient
        [SerializeField] private TCPClient tcpClient = default;

        private string SerializedMesh = null;
        [SerializeField] private GameObject meshSerial = default;
        [SerializeField] private GameObject meshControl = default;

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

        // position/rotation of currently selected location on spatial mesh for the current route parent
        public Vector3 currentRouteParentPosition = default;
        public Quaternion currentRouteParentOrientation = default;

        /// <summary>
        /// Used to distinguish short taps and long taps
        /// </summary>
        private float[] _tappingTimer = { 0, 0 };

        /// <summary>
        /// Editing modes
        /// </summary>
        public enum EditingMode
        {
            Save,
            Load,
            None
        }

        /// <summary>
        /// Used to track route parent editing mode
        /// </summary>
        [SerializeField] public EditingMode editingMode;

        // search radius for route parents
        //[SerializeField] private float routeParentSearchRadius = 0.0f;

        /// <summary>
        /// sphere prefab for tap user feedback
        /// </summary>
        public GameObject tapSphere;

        private void Start()
        {
            // hide filename prompt until we want it shown
            editingMode = EditingMode.None;
            keyboardInputContainer.SetActive(false);
        }

        void Update()
        {

            //Check for any air taps from either hand
            if (editingMode == EditingMode.Save)
            {
                for (int i = 0; i < 2; i++)
                {
                    InputDevice device = InputDevices.GetDeviceAtXRNode((i == 0) ? XRNode.RightHand : XRNode.LeftHand);
                    if (device.TryGetFeatureValue(CommonUsages.primaryButton, out bool isTapping))
                    {
                        if (!isTapping)
                        {
                            //Stopped Tapping or wasn't tapping
                            if (0f < _tappingTimer[i] && _tappingTimer[i] < 1f)
                            {
                                //User has been tapping for less than 1 sec. Get hand-ray's end position and call ShortTap
                                foreach (var source in CoreServices.InputSystem.DetectedInputSources)
                                {
                                    // Ignore anything that is not a hand because we want articulated hands
                                    if (source.SourceType == Microsoft.MixedReality.Toolkit.Input.InputSourceType.Hand)
                                    {
                                        foreach (var p in source.Pointers)
                                        {
                                            if (p is IMixedRealityNearPointer /*&& editingMode != EditingMode.Save*/) // we want to be able to use direct touch to delete game objects
                                            {
                                                // Ignore near pointers, we only want the rays
                                                //Debug.Log("Near Pointer");
                                                continue;
                                            }
                                            if (p.Result != null)
                                            {
                                                var startPoint = p.Position;
                                                var endPoint = p.Result.Details.Point;
                                                var hitObject = p.Result.Details.Object;

                                                // we need the surface normal of the spatial mesh we want to place the hold on
                                                // we allow hits on route parents so that we can do nothing when selecting them in short taps
                                                LayerMask mask = LayerMask.GetMask("Mesh");
                                                if (Physics.Raycast(startPoint, endPoint - startPoint, out var hit, Mathf.Infinity, mask)) // check if successful before calling ShortTap
                                                {
                                                    //Debug.Log($"Hit layer: {hit.collider.gameObject.layer}");
                                                    //Debug.Log($"{hit.collider.gameObject.tag}");
                                                    PhotonView photonView = PhotonView.Get(this);

                                                    // we need to recognize when we hit a hold so that we can ignore the processing of short tap
                                                    // since ShortTap will otherwise find the nearest hold and mistakenly process it
                                                    // this is especially important if the search radius is nonzero
                                                    if (hit.collider.gameObject.tag == "Mesh")
                                                    {
                                                        // avoid having to search later if we already know we collided with a route parent game object
                                                        // also necessary in case search radius is set to zero due to unlikelihood of registering hit precisely at object's origin
                                                        GameObject hitGO = hit.collider.gameObject;
                                                        ShortTap(hit.point,endPoint, photonView, hitGO);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            _tappingTimer[i] = 0;
                        }
                        else
                        {
                            _tappingTimer[i] += Time.deltaTime;
                        }
                    }
                }
            }
            else if (editingMode == EditingMode.Load)
            {
            LoadStart();
            }
         }
        // </Update>


        // <ShortTap>
        /// <summary>
        /// Called when a user is air tapping for a short time.
        /// We pass the PhotonView in since this is an async function and loses context
        /// </summary>
        /// <param name="handPosition">Location where tap was registered</param>
        private async void ShortTap(Vector3 handPosition,Vector3 endPoint, PhotonView photonView,GameObject hitGO)
        {
                // display indicator object
                GameObject gameObject = PhotonNetwork.Instantiate(tapSphere.name, endPoint, Quaternion.identity);
                gameObject.transform.localScale = Vector3.one * 0.05f;
                StartCoroutine(DestroyObjectDelayed(gameObject, .2f));
                SerializedMesh = MeshSerializer.MeshToByteArray(hitGO.GetComponent<MeshFilter>().sharedMesh).ToString();

                photonView.RPC("PunRPC_SetRouteParentPosition", RpcTarget.MasterClient, handPosition);
                ToggleKeyboardInput();
        }


    private async void LoadStart()
    {
        await GetMeshesForInstantiation();
    }

    // <destroyObjectDelayed>
    /// <summary>
    /// Destroy object.
    /// Used in delayed fashion e.g. when removing tap's sphere object created for user feedback
    /// </summary>
    /// <param name="gameObject"></param>
    /// <param name="time"></param>
    /// <returns></returns>
    private IEnumerator DestroyObjectDelayed(GameObject gameObject, float time)
        {
            yield return new WaitForSeconds(time);
            PhotonNetwork.Destroy(gameObject);
        }
        // </destroyObjectDelayed>

        /// <summary>
        /// Registered in Inspector.
        /// NOTE: need async void here: https://stackoverflow.com/questions/28601678/calling-async-method-on-button-click
        /// </summary>
        [PunRPC]
        public async void PunRPC_CreateMesh(string filename,string SerializedMesh)
        {

            // send data
            await tcpClient.SendFile(filename: filename, serializedMesh: SerializedMesh);

            //SerializedMesh = null;
            // remove the file so we don't accrue files
            //DeleteRouteFile(filename: filename);
        }

        /// <summary>
        /// Called by closing keyboard in Inspector to retrieve the user's text
        /// </summary>
        /// <param name="text"></param>
        public void SaveMesh(string text)
        {
            if (text == "")
            {
                Debug.Log("No filename given, aborting.");
                return;
            }

            string filename = text + ".txt";

            // route all TCP calls through master client since it's the one with a connection
            gameObject.GetPhotonView().RPC("PunRPC_CreateMesh", RpcTarget.MasterClient, filename,SerializedMesh);

            keyboardInputContainer.SetActive(false);
        }


    /// SAVE for later reference in how to update scroll menu based on room properties
    //public override void OnEnable()
    //{
    //    base.OnEnable();
    //    PhotonNetwork.AddCallbackTarget(this);
    //}

    //public override void OnDisable()
    //{
    //    base.OnDisable();
    //    PhotonNetwork.RemoveCallbackTarget(this);
    //}
        //public async Task GetMeshesForInstantiation()
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

        // <ScrollRoutesMenuClick>
        /// <summary>
        /// Handle scoll route menu selection
        /// </summary>
        /// <param name="go"></param>
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


        /// <summary>
        /// Retrieves the saved route from the server
        /// TODO: maybe use serialization/deserialization and/or JSON?
        /// </summary>
        [PunRPC]
        private async void GetMesh(string mesh)
        {
            // list of hold names and their respective transforms
            string mesh_file = await tcpClient.GetMesh(mesh);

            InstantiateMesh(mesh_file);
        }

        /// <summary>
        /// Eventually this method should simply update the menu if open for other clients as it does for the .  But for now, due to a bug where the other clients' menus
        /// are emptied but not repopulated, we simply close/empty the menu for them.
        /// </summary>
        /// <param name="routeListString"></param>
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
            Vector3 parent_transform = SpawnParent.transform.Find("content").transform.position;
            Mesh mesh = (Mesh)(meshSerial.GetComponent<MeshSerializer>()).ByteArrayToMesh(Encoding.ASCII.GetBytes(mesh_file));
            (meshControl.GetComponent<MeshController>()).addNewMeshEvent(mesh,parent_transform);
            // instantiate prefab to parent the holds
            //Vector3 parentPosition = new Vector3(0f, 0f, 0.5f);
            //GameObject routeParent = PhotonNetwork.InstantiateRoomObject(routeParentPrefab.name, parentPosition, Quaternion.identity);
            //GameObject routeParent = PhotonNetwork.InstantiateRoomObject(routeParentPrefab.name, currentRouteParentPosition, Quaternion.identity);

            //// set the name on the route parent for all clients
            //// critical so that other clients can find it in their scene, i.e. in PunRPC_ReparentHoldsToRouteParent
            //routeParent.GetComponent<PhotonView>().RPC("PunRPC_SetName", RpcTarget.AllBuffered, meshName);

            //    // reparent holds from default HoldParent to new parent so as to make them easily movable altogether at once
            //    // Needs to be RPC here so that every client performs this reparenting, otherwise movements of child objects won't stay in-sync across clients
            //    // when moving a route parent on one client
            //    // NOTE: holds' parent is by default the HoldParent object
            //    // TODO: draw connecting line from hold to parent
            //gameObject.GetComponent<PhotonView>().RPC("PunRPC_ReparentHoldsToRouteParent",content, RpcTarget.AllBuffered);
        }

        //[PunRPC]
        //private void PunRPC_ReparentHoldsToMeshParent(object PhotonData)
        //{
        //    // reparent holds from default HoldParent to new parent so as to make them easily movable altogether at once
        //    // NOTE: holds' parent is by default the HoldParent object
        //    // TODO: draw connecting line from hold to parent
        //    //GameObject routeParent = Array.Find(GameObject.FindGameObjectsWithTag("RouteParent"), x => x.name == routeName);
        //    //GameObject meshParent = globalRouteParent.GetComponent<GlobalRouteParent>().childRoutes.Find(x => x.name == routeName);

        //    //GameObject[] holdInstances = GameObject.FindGameObjectsWithTag("Hold");
        //    GameObject parent_current = (GameObject)((object)PhotonData);
        //    parent_current.transform.ch
        //    holdInstances[i].transform.SetParent(routeParent.transform, true);
        //    holdInstances[i].transform.position += routeParent.transform.position;
        //}

    /// <summary>
    /// Reparent all holds childed under route parent to the global hold parent.  
    /// Perform a final adjustment to snap the holds to the nearest spatial mesh surface.
    /// Finally, destroy the route parent.
    /// </summary>
    /// <param name="routeParentName"></param>
    /// <param name="tag"></param>
    //[PunRPC]
    //public async void DoMergeRoute(string routeParentName, string tag)
    //{
    //    check the route parent and global hold parent are in the scene
    //    GameObject routeParent = Array.Find(GameObject.FindGameObjectsWithTag("RouteParent"), x => x.name == routeParentName);
    //    GameObject routeParent = globalRouteParent.GetComponent<GlobalRouteParent>().childRoutes.Find(x => x.name == routeParentName);
    //    GameObject globalHoldParent = GameObject.Find("GlobalHoldParent");
    //    if (routeParent == null || globalHoldParent == null) return;

    //    destroy the route parent game object
    //    only perform on the master client as photon will propagate the changes to the other clients
    //    if (PhotonNetwork.IsMasterClient)
    //    {
    //        We need to make sure we have ownership of the route parent
    //         Perform this ownership change early in the function and before the ownership requests are called for all of the holds crowd the
    //         network so that we have time for it go through by the time we try to destroy it at the end of the function
    //        routeParent.GetPhotonView().RequestOwnership();
    //                }

    //     find all holds in the route of interest
    //    List<GameObject> holds = new List<GameObject>();
    //        foreach (Transform child in routeParent.transform)
    //        {
    //            if (child.tag == tag)
    //            {
    //                holds.Add(child.gameObject);
    //            }
    //        }

    //        reparent the holds to the global hold parent in the scene
    //    for (int i = 0; i < holds.Count; i++)
    //        {
    //            GameObject hold = holds[i];

    //            set new parent but keep current position/ rotation / scale
    //        hold.transform.SetParent(globalHoldParent.transform, true);

    //            remove the identifying tag for this route so that the hold won't become parented to in the future if the same route is ever reintroduced into the scene

    //           hold.GetComponent<CustomTag>().RemoveTag(routeParentName);

    //            movement only necessary to be done on one client i.e.master client
    //           if (PhotonNetwork.IsMasterClient)
    //                {
    //                    we need owernship back for the holds before trying to move them
    //                   foreach (GameObject child in holds)
    //                        {
    //                            child.GetPhotonView().RequestOwnership();
    //                        }

    //                    StartCoroutine(SnapHoldToSpatialMesh(1f, hold)); // reenable after a short delay
    //                }
    //        }

    //        destroy the route parent game object
    //        only perform on the master client as photon will propagate the changes to the other clients
    //    if (PhotonNetwork.IsMasterClient)
    //        {
    //            we need to make sure we have ownership of the route parent
    //        routeParent.GetPhotonView().RequestOwnership();

    //            the RequestOwnership calls above are asynchronous and need time to complete before we call Destroy() below
    //            NOTE: longer delay needed for more holds to reparent

    //           await Task.Delay(2000);

    //            destroy the route parent
    //        PhotonNetwork.Destroy(routeParent);
    //        }
    //    }

    /// <summary>
    /// Finds the nearest spatial mesh using both forward and backward RayCasts.  Then places hold oriented to normal at the location of the RayCast hit.
    /// </summary>
    /// <param name="time"></param>
    /// <param name="go"></param>
    /// <returns></returns>
    //    IEnumerator SnapHoldToSpatialMesh(float time, GameObject go)
    //{
    //    yield return new WaitForSeconds(time);

    //    float distanceForward = float.PositiveInfinity;
    //    float distanceBackward = float.PositiveInfinity;
    //    RaycastHit hitForward = new RaycastHit();
    //    RaycastHit hitBackward = new RaycastHit();
    //    Vector3 forward = go.transform.forward; // project inward, toward assumed wall position (spatial mesh)
    //    Vector3 backward = -1 * forward;

    //    // RayCast forward and backward to determine which direction is closest to spatial mesh (assumed to be wall)
    //    // NOTE: we turn on Physics.queriesHitBackfaces since RayCast hits aren't registered if "behind" a mesh collider (e.g. hold has clipped into a
    //    // wall either due to the frequent spatial mesh updates or by moving the hold via it's parent)
    //    if (Physics.Raycast(go.transform.position, forward, out hitForward))
    //    {
    //        distanceForward = hitForward.distance;
    //        //Debug.Log($"Forward distance to mesh: {distanceForward}");
    //    }
    //    if (Physics.Raycast(go.transform.position, backward, out hitBackward))
    //    {
    //        distanceBackward = hitBackward.distance;
    //        //Debug.Log($"Backward distance to mesh: {distanceBackward}");
    //    }

    //    //Debug.Log($"hitForward normal: {hitForward.normal}");
    //    //Debug.Log($"hitBackward normal: {hitBackward.normal}");

    //    // find placement point and rotation
    //    Vector3 normal = Vector3.zero;
    //    Quaternion normalOrientation = Quaternion.identity;
    //    Vector3 position = Vector3.zero;
    //    if (distanceForward < distanceBackward)
    //    {
    //        GetNormalOrientationAndPosition(hitForward, go, out normalOrientation, out position, out normal);
    //    }
    //    else
    //    {
    //        GetNormalOrientationAndPosition(hitBackward, go, out normalOrientation, out position, out normal);
    //    }

    //    //Debug.Log($"position: {position}");
    //    //Debug.Log($"rotation: {normalOrientation}");

    //    go.transform.position = position;
    //    go.transform.rotation = normalOrientation;
    //}

    /// <summary>
    /// Get the normal orientation and position necessary to place a hold on the surface of a spatial mesh given a RayCast hit against the spatial mesh
    /// from the hold's current position
    /// </summary>
    /// <param name="hit"></param>
    /// <param name="go"></param>
    /// <param name="normalOrientation"></param>
    /// <param name="position"></param>
    /// <param name="normal"></param>
    //private void GetNormalOrientationAndPosition(RaycastHit hit, GameObject go, out Quaternion normalOrientation, out Vector3 position, out Vector3 normal)
    //{
    //    // align with normal vector of wall (spatial mesh)
    //    normalOrientation = Quaternion.LookRotation(-hit.normal, Vector3.up);

    //    // _Flipped holds have their z-axis (blue axis) point out instead of in so we reverse the raycast direction 
    //    if (go.name.Contains("_Flipped"))
    //    {
    //        normalOrientation = Quaternion.LookRotation(hit.normal, Vector3.up);
    //    }

    //    position = hit.point;
    //    normal = hit.normal;
    //}

    /// <summary>
    /// Show container holding input field that triggers keyboard
    /// </summary>
    public void ToggleKeyboardInput()
        {
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



        /// <summary>
        /// Simple function to return if route parent object specified by route is in scene
        /// </summary>
        /// <param name="route"></param>
        /// <returns></returns>
        //private bool IsRouteInScene(string route)
        //{
        //    // check first if the route is already being manipulated in the scene and abort if it is so that duplicates are avoided
        //    //GameObject[] existingRoutes = GameObject.FindGameObjectsWithTag("RouteParent");
        //    List<GameObject> existingRoutes = globalRouteParent.GetComponent<GlobalRouteParent>().childRoutes;

        //    // search for a route parent with the name of the route
        //    //for (int i = 0; i < existingRoutes.Length; i++)
        //    for (int i = 0; i < existingRoutes.Count; i++)
        //    {
        //        // remove the "(Clone)" part of the object name that Unity automatically injects when instantiating prefabs
        //        string name = existingRoutes[i].name.Replace("(Clone)", string.Empty);
        //        if (name == route)
        //        {
        //            Debug.Log($"Route: {route} already in scene");
        //            return true;
        //        }
        //    }
        //    return false;
        //}

        // <ScrollRoutesMenuClick>
        /// <summary>
        /// Handle scroll route menu selection and merge it to the main set of holds
        /// </summary>
        /// <param name="go"></param>
        //public async void ScrollRouteMergeMenuClick(GameObject go)
        //{
        //    if (go != null)
        //    {
        //        string route = $"{go.name}";

        //        // merge route into scene
        //        MergeRoute(route);

        //        // empty menu and close it
        //        // TODO: figure out how to not have to close other clients' scroll merge menus but rather update them -> may need to call GetRoutesForMerge()
        //        // after a long delay since MergeRoute has delays built into it
        //        gameObject.GetPhotonView().RPC("PunRPC_EmptyCloseScrollMeshMenu", RpcTarget.All);
        //    }
        //}

        /// <summary>
        /// Close scroll menu for all clients
        /// </summary>
        [PunRPC]
        private void PunRPC_EmptyCloseScrollMeshMenu()
        {
            EmptyCloseScrollMeshMenu();
        }

        /// <summary>
        /// Empty and close the scroll route menu
        /// </summary>
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

        /// <summary>
        /// Empty and close the scroll route menu
        /// </summary>
        private void EmptyScrollMeshMenu()
        {
            foreach (Transform child in scrollMeshMenu.transform.Find("ScrollingObjectCollection/Container").transform)
            {
                GameObject.Destroy(child.gameObject);
            }
        }

        /// <summary>
        /// Merge the holds for the given route with those holds parented by the global hold parent in the scene.
        /// </summary>
        /// <param name="routeName"></param>
        /// <returns></returns>
        //private async void MergeRoute(string routeName)
        //{
        //    gameObject.GetPhotonView().RPC("DoMergeRoute", RpcTarget.All, routeName, "Hold");
        //}


        /// <summary>
        /// Deletes file with specified filename
        /// Assumes file exists at Application.persistentDataPath
        /// </summary>
        /// <param name="filename"></param>
        private void DeleteRouteFile(string filename = "")
        {
            string path = Path.Combine(Application.persistentDataPath, filename);
            File.Delete(path);
        }


            //public async void GetRouteParentPosition()
            //{
            //    editingMode = EditingMode.Create;
            //    holdManipulator.editingMode = HoldManipulator.EditingMode.Off;
            //}

            [PunRPC]
            private void PunRPC_SetRouteParentPosition(Vector3 handPosition)
            {
                currentRouteParentPosition = handPosition;
                currentRouteParentOrientation = Quaternion.identity;
            }

            /// <summary>
            /// Retrieves the list of saved routes currently on the server (list of filenames)
            /// endpoint supplied inspector to choose which event listener is wired up
            /// Serves double duty between choosing routes to instantiate and choosing routes to merge
            /// TODO: maybe use serialization/deserialization and/or JSON?
            /// </summary>
            /// <param name="endpoint"></param>
            //public async void GetRoutesForInstantiation()
            //public Task GetRoutesForInstantiation()
            //{
            //    // close/clear menu if already open so we don't accidentally keep filling it up
            //    if (showScrollRouteMenu)
            //    {
            //        EmptyCloseScrollRouteMenu();
            //        activeScrollMenu = ScrollMenu.None;
            //        //return;
            //        return Task.CompletedTask;
            //    }

            //    activeScrollMenu = ScrollMenu.Instantiate;

            //    // display scroll route menu
            //    scrollRouteMenu.SetActive(true);
            //    showScrollRouteMenu = true;

            //    // wire up listener on menu
            //    scrollRouteMenu.transform.Find("ScrollingObjectCollection").GetComponent<ScrollingObjectCollection>().OnClick.AddListener(ScrollRouteMenuClick);

            //    // tell master client to get the list of available routes from server and then broadcast this list to other clients
            //    gameObject.GetPhotonView().RPC("PunRPC_GetRouteList", RpcTarget.MasterClient);

            //    return Task.CompletedTask;
            //}
  


        //[PunRPC]
        //private async void PunRPC_GetRouteList()
        //{
        //    // gather list of routes
        //    List<string> routeList = await tcpClient.GetRouteList();
        //    string routeListString = string.Join(",", routeList); // PUN2 doesn't support arrays/lists as parameters
        //    gameObject.GetPhotonView().RPC("PunRPC_UpdateScrollRouteMenu", RpcTarget.All, routeListString, (int)ScrollMenu.Instantiate);
        //    //            // set list in room properties so other clients will update their menus
        //    //#if UNITY_2020
        //    //            PhotonNetwork.CurrentRoom.SetCustomProperties(
        //    //                new ExitGames.Client.Photon.Hashtable()
        //    //                {
        //    //                    { ROUTES_ON_SERVER_CUSTOM_PROPERTY, routeList.ToArray() }
        //    //                }
        //    //            );
        //    //#endif
        //}
  

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

        /// <summary>
        /// Get routes currently in scene as options to merge into the global hold parent in the scene
        /// </summary>
        //public void GetRoutesForMerge()
        //{
        //    // close/clear menu if already open so we don't accidentally keep filling it up
        //    if (showScrollMeshMenu)
        //    {
        //        EmptyCloseScrollRouteMenu();
        //        activeScrollMenu = ScrollMenu.None;
        //        return;
        //    }

        //    activeScrollMenu = ScrollMenu.Merge;

        //    // display scroll route menu
        //    scrollMeshMenu.SetActive(true);
        //    showScrollMeshMenu = true;

        //    // wire listener on menu
        //    scrollMeshMenu.transform.Find("ScrollingObjectCollection").GetComponent<ScrollingObjectCollection>().OnClick.AddListener(ScrollRouteMergeMenuClick);

        //    // gather list of routes
        //    //GameObject[] routeParents = GameObject.FindGameObjectsWithTag("RouteParent");
        //    List<GameObject> routeParents = globalRouteParent.GetComponent<GlobalRouteParent>().childRoutes;
        //    List<string> routeList = new List<string>();
        //    //for (int i = 0; i < routeParents.Length; i++)
        //    for (int i = 0; i < routeParents.Count; i++)
        //    {
        //        routeList.Add(routeParents[i].name);
        //    }

        //    string routeListString = string.Join(",", routeList); // PUN2 doesn't support arrays/lists as parameters
        //    gameObject.GetPhotonView().RPC("PunRPC_UpdateScrollRouteMenu", RpcTarget.All, routeListString, (int)ScrollMenu.Merge);
        //}


    }