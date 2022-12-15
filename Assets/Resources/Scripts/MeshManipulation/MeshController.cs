using ExitGames.Client.Photon;
using Photon.Realtime;
using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using System;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit;
using UnityEngine.XR;
using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using MultiUserCapabilities;
using UnityEngine.SocialPlatforms;
using UnityEngine.UIElements;
using System.Net;
using UnityEngine.InputSystem.HID;
using Microsoft.MixedReality.Toolkit.UI;
using drawing;
//using System.Numerics;

public class MeshController : MonoBehaviour, IOnEventCallback
{
    public Mesh loadedMesh = default;

    private bool canSpawn = true;
    private Mesh mesh2D = default;

    //These fields will probably be removed soon. Since all meshes are children of the Mesh Holder,
    //we already have an ordering for all the meshes as prescribed by the hierchy.
    private List<GameObject> children;
    private List<Mesh> childMeshs;
    private List<MeshCollider> childMeshColliders;

    //The different event codes
    public const byte ModifyVerticesNearPointEventCode = 1;
    public const byte AddNewMeshEventCode = 2;
    public const byte AddVertexEventCode = 3;
    public const byte VertexPushLinearEventCode = 4;
    public const byte VertexPushGaussianEventCode = 5;
    public const byte VertexPullLinearEventCode = 6;
    public const byte VertexPullGaussianEventCode = 7;
    public const byte GenerateFlatMeshEventCode = 8;

    /// <summary>
    /// Used to distinguish short taps and long taps
    /// </summary>
    private float[] _tappingTimer = { 0, 0 };

    // we have to apply audio sources for create/delete/moveStart/moveEnd events here because we will be disabling/enabling manipulation components depending on the
    // mode we are in
    // manipulation audio (i.e. rotation) is supplied by the manipulation component since it only applies in the mode when the manipulation component is enabled
    [SerializeField] private AudioSource audioData;
    [SerializeField] private AudioClip createAudio;
    [SerializeField] private AudioClip spawnAudio;
    [SerializeField] private AudioClip deleteAudio;
    [SerializeField] private AudioClip pointerAudio;
    [SerializeField] public float effectScale = 0.0f;
    [SerializeField] public float effectRadius = 0.05f;
    [SerializeField] public float effectExtrude = 0.0f;
    [SerializeField] public MainMenu mainMenu = default;
    [SerializeField] private SketchController sketchController = default;
    [SerializeField] public GameObject defaultGameObject = default;
    [SerializeField] private GameObject spawnPoint = default;
    [SerializeField] public GameObject meshParent = default;
    [SerializeField] private Material spawnShaderMaterial = default;
    [SerializeField] private Material defaultMaterial = default;
    [SerializeField] private GameObject pointerPrefab = default;
    [SerializeField] public MeshSaverLoader MeshSaveLoad = default;
    [SerializeField] public GameObject sketchObject = default;
    [SerializeField] private GameObject whiteboard = default;

    //Unity functions
    void Start()
    {
        children = new List<GameObject>();
        childMeshs = new List<Mesh>();
        childMeshColliders = new List<MeshCollider>();
        effectScale = mainMenu.sketchScaleSliderVal * mainMenu.sketchSculptScale;
        effectRadius = mainMenu.sketchRadiusSliderVal * (mainMenu.max_radius - mainMenu.min_radius) + mainMenu.min_radius;

        for (int i = 0; i < meshParent.transform.childCount; i++)
        {
            GameObject child = meshParent.transform.GetChild(i).gameObject;
            if (child.activeSelf == true) // disabled game objects in scene will get counted otherwise, which we don't want
            {
                children.Add(child);
                childMeshs.Add(child.GetComponent<MeshFilter>().mesh);
                childMeshColliders.Add(child.GetComponent<MeshCollider>());
            }
        }
    }

    /// <summary>
    /// Process short taps by user
    /// </summary>
    void Update()
    {
        // detect air taps and then do operations based on current editing mode
        if (mainMenu.mode == MainMenu.Mode.Sculpt || mainMenu.mode == MainMenu.Mode.Sculpt_Push_Linear 
            || mainMenu.mode == MainMenu.Mode.Sculpt_Push_Gaussian || mainMenu.mode == MainMenu.Mode.Sculpt_Pull_Linear 
            || mainMenu.mode == MainMenu.Mode.Sculpt_Pull_Gaussian || mainMenu.mode == MainMenu.Mode.Sketch_Draw 
            || mainMenu.mode == MainMenu.Mode.Select_Move || mainMenu.mode == MainMenu.Mode.Select_Save 
            || mainMenu.mode == MainMenu.Mode.Select_Load_Saved || mainMenu.mode == MainMenu.Mode.Select_Delete)
        {
            //Check for any air taps from either hand
            for (int i = 0; i < 2; i++)
            {
                InputDevice device = InputDevices.GetDeviceAtXRNode((i == 0) ? XRNode.RightHand : XRNode.LeftHand);
                if (device.TryGetFeatureValue(CommonUsages.primaryButton, out bool isTapping))
                {
                    if (!isTapping) // don't process short taps for Select_Move mode
                    {
                        //Stopped Tapping or wasn't tapping
                        if (0f < _tappingTimer[i] && _tappingTimer[i] < 1f && mainMenu.mode != MainMenu.Mode.Select_Move) // short tap
                        {
                            //Debug.Log("Short Tap");
                            //User has been tapping for less than 1 sec. Get hand-ray's end position and call ShortTap
                            foreach (var source in CoreServices.InputSystem.DetectedInputSources)
                            {
                                //Debug.Log("Detected Input Sources");
                                // Ignore anything that is not a hand because we want articulated hands
                                if (source.SourceType == Microsoft.MixedReality.Toolkit.Input.InputSourceType.Hand)
                                {
                                    //Debug.Log("Hand Detected");
                                    foreach (var p in source.Pointers)
                                    {
                                        if (p is IMixedRealityNearPointer)// && editingMode != EditingMode.Delete) // we want to be able to use direct touch to delete game objects
                                        {
                                            // Ignore near pointers, we only want the rays
                                            //debug.log("near pointer");
                                            continue;
                                        }
                                        if (p.Result != null)
                                        {
                                            var startPoint = p.Position;
                                            var endPoint = p.Result.Details.Point;
                                            var hitObject = p.Result.Details.Object;

                                            //Debug.Log($"{isRouteParentTTPOn}");
                                            //Debug.Log($"{hitObject.gameObject.tag}");

                                            // we need the surface normal of the spatial mesh we want to place the hold on
                                            // we allow hits on route parents so that we can do nothing when selecting them in short taps
                                            LayerMask mask = LayerMask.GetMask("Mesh", "Whiteboard");
                                            if (Physics.Raycast(startPoint, endPoint - startPoint, out var hit, Mathf.Infinity, mask)) // check if successful before calling ShortTap
                                            {
                                                GameObject hitGO = hit.collider.gameObject;
                                                //Debug.Log($"iIt Point {hit.point}");
                                                ShortTap(hit.point, endPoint, hit.normal, hitGO);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        _tappingTimer[i] = 0;
                    }
                    else // long tap
                    {
                        _tappingTimer[i] += Time.deltaTime;
                        if (_tappingTimer[i] >= 2f)
                        {
                            //User has been air tapping for at least 2sec. Get hand position and call LongTap
                            if (device.TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 handPosition))
                            {
                                // feedback for user on long airtap by briefly displaying a dot at the cursor
                                foreach (var source in CoreServices.InputSystem.DetectedInputSources)
                                {
                                    // Ignore anything that is not a hand because we want articulated hands
                                    if (source.SourceType == Microsoft.MixedReality.Toolkit.Input.InputSourceType.Hand)
                                    {
                                        foreach (var p in source.Pointers)
                                        {
                                            if (p is IMixedRealityNearPointer)
                                            {
                                                // Ignore near pointers, we only want the rays
                                                continue;
                                            }
                                            if (p.Result != null)
                                            {
                                                audioData.PlayOneShot(pointerAudio);

                                                var startPoint = p.Position;
                                                var endPoint = p.Result.Details.Point;
                                                var hitObject = p.Result.Details.Object;

                                                LayerMask mask = LayerMask.GetMask("Mesh", "Whiteboard", "Spatial Awareness");
                                                if (Physics.Raycast(startPoint, endPoint - startPoint, out var hit, Mathf.Infinity, mask)) // get normal at surface hit
                                                {
                                                    if (!(hit.collider.gameObject.layer == LayerMask.NameToLayer("Mesh") && mainMenu.mode == MainMenu.Mode.Select_Move))
                                                    {
                                                        Quaternion orientation = Quaternion.identity;
                                                        if (Vector3.Dot(Vector3.up, hit.normal) < 0)
                                                        {
                                                            orientation = Quaternion.LookRotation(Vector3.up, hit.normal);
                                                        }

                                                        //Quaternion orientationTowardsHead = Quaternion.LookRotation(handPosition - headPosition, Vector3.up);
                                                        GameObject go = PhotonNetwork.Instantiate(pointerPrefab.name, endPoint, orientation);
                                                        //go.transform.localScale = Vector3.one * 0.1f;

                                                        StartCoroutine(DestroyObjectDelayed(go, 5f));
                                                    }
                                                }  
                                            }
                                        }
                                    }
                                }
                            }
                            
                            _tappingTimer[i] = -float.MaxValue; // reset the timer, to avoid retriggering if user is still holding tap
                        }
                    }
                }
            }
        }
    }

    // <ShortTap>
    /// <summary>
    /// Called when a user is air tapping for a short time.
    /// </summary>
    /// <param name="handPosition">Location where tap was registered</param>
    private async void ShortTap(Vector3 hitPoint,Vector3 endpoint, Vector3 surfaceNormal, GameObject hitGO)
    {
        if (hitGO == null)
        {
            //Debug.Log("Null GO");
            return;
        }

        Matrix4x4 localToWorld = hitGO.transform.localToWorldMatrix;
        Matrix4x4 worldToLocal = hitGO.transform.worldToLocalMatrix;
        Debug.Log($"Mode: {mainMenu.mode}");
        if (mainMenu.mode == MainMenu.Mode.Sculpt_Push_Linear)//(editingMode == EditingMode.VertexPush)
        {
            audioData.PlayOneShot(createAudio);
            VertexPushLinearEvent(localToWorld, worldToLocal, hitPoint, surfaceNormal,hitGO.name);
        }
        else if (mainMenu.mode == MainMenu.Mode.Sculpt_Push_Gaussian)//(editingMode == EditingMode.VertexPush)
        {
            audioData.PlayOneShot(createAudio);
            VertexPushGaussianEvent(localToWorld, worldToLocal, hitPoint, surfaceNormal, hitGO.name);
        }
        else if (mainMenu.mode == MainMenu.Mode.Sculpt_Pull_Linear)//(editingMode == EditingMode.VertexPush)
        {
            audioData.PlayOneShot(createAudio);
            VertexPullLinearEvent(localToWorld, worldToLocal, hitPoint, surfaceNormal, hitGO.name);
        }
        else if (mainMenu.mode == MainMenu.Mode.Sculpt_Pull_Gaussian)//(editingMode == EditingMode.VertexPush)
        {
            audioData.PlayOneShot(createAudio);
            VertexPullGaussianEvent(localToWorld, worldToLocal, hitPoint, surfaceNormal, hitGO.name);
        }
        else if (mainMenu.mode == MainMenu.Mode.Sketch_Draw)
        {
            surfaceNormal = Vector3.back;
            sketchController.AddPoint(hitPoint + 0.01f * surfaceNormal, surfaceNormal);
        }
        else if (mainMenu.mode == MainMenu.Mode.Select_Save)
        {
            MeshSaveLoad.saver_initialize(hitPoint, endpoint, hitGO);
        }
        else if (mainMenu.mode == MainMenu.Mode.Select_Load_Saved)
        {
            MeshSaveLoad.LoadStart();
        }
        else if (mainMenu.mode == MainMenu.Mode.Select_Delete && hitGO.layer == LayerMask.NameToLayer("Mesh"))
        {
            audioData.PlayOneShot(deleteAudio);
            PhotonView pv = gameObject.GetComponent<PhotonView>();
            pv.RPC("PunRPC_DeleteGO", RpcTarget.All, hitGO.name);
        }
    }
    // </ShortTap>

    private void OnEnable()
    {
        PhotonNetwork.AddCallbackTarget(this);
    }
    private void OnDisable()
    {
        PhotonNetwork.RemoveCallbackTarget(this);
    }
    public void OnEvent(EventData photonEvent)
    {
        byte eventCode = photonEvent.Code;
        if (eventCode == AddNewMeshEventCode)
        {
            addNewMeshResponse(photonEvent.CustomData);
        }
        //if (eventCode == ModifyVerticesNearPointEventCode)
        //{
        //    modifyVerticesNearPointResponse(photonEvent.CustomData, riseNearCenter);
        //}
        if (eventCode == AddVertexEventCode)
        {
            addVertexToMeshResponse(photonEvent.CustomData);
        }
        if (eventCode == VertexPushLinearEventCode)
        {
            VertexManipulatorResponse(photonEvent.CustomData, LinearNearHitpoint);
        }
        if (eventCode == VertexPushGaussianEventCode)
        {
            VertexManipulatorResponse(photonEvent.CustomData, GaussianNearHitpoint);
        }
        if (eventCode == VertexPullLinearEventCode)
        {
            VertexManipulatorResponse(photonEvent.CustomData, LinearNearHitpoint);
        }
        if (eventCode == VertexPullGaussianEventCode)
        {
            VertexManipulatorResponse(photonEvent.CustomData, GaussianNearHitpoint);
        }
    }

    /// <summary>
    /// Remove child game object across all clients
    /// </summary>
    /// <param name="name"></param>
    [PunRPC]
    private void PunRPC_DeleteGO(string name)
    {
        int location = children.Count; // failsafe idx in case we don't find the child
        for (int i = 0; i < children.Count; i++)
        {
            Debug.Log(children[i].name == name);
            Debug.Log(children[i].name);
            if (children[i].name == name)
            {
                location = i;
                break;
            }
        }

        Debug.Log($"Location: {location}");
        Debug.Log($"children.Count: {children.Count}");
        if (location < children.Count) // we found a valid object
        {
            audioData.PlayOneShot(deleteAudio);
            if (PhotonNetwork.IsMasterClient) // only call on one client
            {
                Debug.Log("isMaster");
                children[location].GetPhotonView().RequestOwnership();
                GameObject child = children[location];
                StartCoroutine(DestroyObjectDelayed(child, 0.5f));

            }

            Debug.Log(children[location].name);
            Debug.Log(children[location]);
          
            childMeshs.RemoveAt(location);
            children.RemoveAt(location);

            Debug.Log($"children.Count: {children.Count}");

            for (int i = 0; i < children.Count; i++)
            {
                if (i >= location)
                {
                    children[i].name = i.ToString();
                }
            }
        }
    }

    // <destroyObjectDelayed>
    /// <summary>
    /// Destroy object.
    /// Used in delayed fashion e.g. when removing long tap's sphere object created for user feedback
    /// </summary>
    /// <param name="gameObject"></param>
    /// <param name="time"></param>
    /// <returns></returns>
    private IEnumerator DestroyObjectDelayed(GameObject gameObject, float time)
    {
        yield return new WaitForSeconds(time);
        Debug.Log("DestroyObjectDelayed");
        PhotonNetwork.Destroy(gameObject);
    }
    // </destroyObjectDelayed>

    private void WireSpawnedMesh(GameObject child, Mesh mesh, Vector3 spawnPosition, Vector3 localScale)
    {
        MeshFilter mFilter = child.GetComponent<MeshFilter>();
        MeshCollider mCollider = child.GetComponent<MeshCollider>();

        mFilter.mesh = mesh;
        //mCollider.sharedMesh = mesh;
        
        // wire up animator
        Animator animator = child.AddComponent<Animator>();
        animator.cullingMode = AnimatorCullingMode.AlwaysAnimate;
        animator.updateMode = AnimatorUpdateMode.Normal;
        var runtimeAnimatorController = (RuntimeAnimatorController)UnityEngine.Resources.Load("AlphaCutoff");
        animator.runtimeAnimatorController = runtimeAnimatorController;

        // reparent, scale, position
        child.transform.SetParent(meshParent.transform, true);
        child.transform.position = spawnPosition;
        child.transform.localScale = localScale;
        child.name = children.Count.ToString();

        // put in correct layer for raycasting
        int LayerMesh = LayerMask.NameToLayer("Mesh");
        child.layer = LayerMesh;

        // start animator and remove spawn material after some time
        StartCoroutine(ChangeSpawnShader(child));

        Debug.Log($"wire spawn: first vertex: {mesh.vertices[0]}");
        Debug.Log($"wire spawn: last vertex: {mesh.vertices[mesh.vertices.Length - 1]}");

        // track the new mesh
        children.Add(child);
        childMeshs.Add(mesh);
        RecalculateAllMeshes();
    }

    public void addNewMeshEvent(Mesh mesh, Vector3 spawnPosition, Vector3 localScale)
    {
        GameObject child = PhotonNetwork.InstantiateRoomObject(defaultGameObject.name, spawnPosition, Quaternion.identity);
        PhotonView pv = child.GetComponent<PhotonView>();

        Mesh mesh2 = new Mesh();
        mesh2.vertices = mesh.vertices;
        mesh2.triangles = mesh.triangles;
        mesh2.normals = mesh.normals;
        mesh2.uv = mesh.uv;
        mesh2.uv2 = mesh.uv2;

        Debug.Log($"pre tesselation on master: # verts: {mesh2.vertexCount}");

        Vector3 ide(Vector3 vec) { return vec; }
        mesh2 = DynamicMeshTessellation.MeshDeformationWithAutomaticTessellation(mesh2, ide);

        Debug.Log($"post tesselation on master: # verts: {mesh2.vertexCount}");

        WireSpawnedMesh(child, mesh2, spawnPosition, localScale);

        object[] data = new object[]
        {
                child.transform.position, child.transform.rotation, pv.ViewID, (object)mesh, localScale
        };

        RaiseEventOptions raiseEventOptions = new RaiseEventOptions
        {
            Receivers = ReceiverGroup.Others,
            CachingOption = EventCaching.AddToRoomCache
        };

        SendOptions sendOptions = new SendOptions
        {
            Reliability = true
        };

        Debug.Log($"first vertex: {mesh2.vertices[0]}");
        Debug.Log($"last vertex: {mesh2.vertices[mesh2.vertices.Length - 1]}");

        PhotonNetwork.RaiseEvent(AddNewMeshEventCode, data, raiseEventOptions, sendOptions);
    }

    public void addNewMeshResponse(object photonData)
    {
        object[] data = (object[])photonData;
        Vector3 spawnPosition = (Vector3)data[0];
        Quaternion spawnRotation = (Quaternion)data[1];
        int viewId = (int)data[2];
        Mesh mesh = (Mesh)data[3];
        Vector3 localScale = (Vector3)data[4];

        Debug.Log($"pre tesselation on client: # verts: {mesh.vertexCount}");

        Vector3 ide(Vector3 vec) { return vec; }
        Mesh mesh2 = DynamicMeshTessellation.MeshDeformationWithAutomaticTessellation(mesh, ide);

        Debug.Log($"post tesselation on client: # verts: {mesh2.vertexCount}");

        GameObject child = PhotonView.Find(viewId).gameObject;

        Debug.Log("client wiring spawned mesh");

        WireSpawnedMesh(child, mesh2, spawnPosition, localScale);
    }

    public void ToggleManipulability(bool _enable)
    {

        foreach (GameObject child in children)
        {
            child.GetComponent<ObjectManipulator>().enabled = _enable;
            child.GetComponent<NearInteractionGrabbable>().enabled = _enable;
        }
    }

    private void VertexPushLinearEvent(Matrix4x4 localToWorld, Matrix4x4 worldToLocal, Vector3 point, Vector3 surfaceNormal, string name)
    {
        float[] local2world = new float[16];
        float[] world2local = new float[16];
        float[] manipulation_params = new float[] { effectRadius, effectScale };

        for (int i = 0; i < 16; i++)
        {
            local2world[i] = localToWorld[i / 4, i % 4];
        }
        for (int i = 0; i < 16; i++)
        {
            world2local[i] = worldToLocal[i / 4, i % 4];
        }
        object[] content = { (object)point, (object)(-1 * surfaceNormal), (object)local2world, (object)world2local,(object)name, (object)manipulation_params };
        RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All };
        PhotonNetwork.RaiseEvent(VertexPushLinearEventCode, content, raiseEventOptions, SendOptions.SendReliable);
    }

    private void VertexPushGaussianEvent(Matrix4x4 localToWorld, Matrix4x4 worldToLocal, Vector3 point, Vector3 surfaceNormal, string name)
    {
        float[] local2world = new float[16];
        float[] world2local = new float[16];
        float[] manipulation_params = new float[] { effectRadius, effectScale };

        for (int i = 0; i < 16; i++)
        {
            local2world[i] = localToWorld[i / 4, i % 4];
        }
        for (int i = 0; i < 16; i++)
        {
            world2local[i] = worldToLocal[i / 4, i % 4];
        }
        object[] content = { (object)point, (object)(-1 * surfaceNormal), (object)local2world, (object)world2local, (object)name, (object)manipulation_params };
        RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All };
        PhotonNetwork.RaiseEvent(VertexPushGaussianEventCode, content, raiseEventOptions, SendOptions.SendReliable);
    }
    private void VertexPullLinearEvent(Matrix4x4 localToWorld, Matrix4x4 worldToLocal, Vector3 point, Vector3 surfaceNormal,string name)
    {
        float[] local2world = new float[16];
        float[] world2local = new float[16];
        float[] manipulation_params = new float[] { effectRadius, effectScale };

        for (int i = 0; i < 16; i++)
        {
            local2world[i] = localToWorld[i / 4, i % 4];
        }
        for (int i = 0; i < 16; i++)
        {
            world2local[i] = worldToLocal[i / 4, i % 4];
        }
        object[] content = { (object)point, (object)(surfaceNormal), (object)local2world, (object)world2local, (object)name, (object)manipulation_params };
        RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All };
        PhotonNetwork.RaiseEvent(VertexPullLinearEventCode, content, raiseEventOptions, SendOptions.SendReliable);
    }

    private void VertexPullGaussianEvent(Matrix4x4 localToWorld, Matrix4x4 worldToLocal, Vector3 point, Vector3 surfaceNormal, string name)
    {
        float[] local2world = new float[16];
        float[] world2local = new float[16];
        float[] manipulation_params = new float[] { effectRadius, effectScale };
        for (int i = 0; i < 16; i++)
        {
            local2world[i] = localToWorld[i / 4,i % 4];
        }
        for (int i = 0; i < 16; i++)
        {
            world2local[i] = worldToLocal[i / 4,i % 4];
        }

        object[] content = { (object)point, (object)(surfaceNormal), (object)local2world, (object)world2local, (object)name,(object)manipulation_params };
        RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All };
        PhotonNetwork.RaiseEvent(VertexPullGaussianEventCode, content, raiseEventOptions, SendOptions.SendReliable);
    }

    //f is a function of the form (current vertex position, response point) -> new vertex position
    private void VertexManipulatorResponse(object photonData, Func<Vector3, Vector3, Vector3, float[], Vector3> f)
    {
        // fill in hitPoint and surfaceNormal
        //GameObject hitGO = default;
        Matrix4x4 localToWorld = default;
        Matrix4x4 worldToLocal = default;
        float[] world2local = new float[16];
        float[] local2world = new float[16];
        Vector3 hitPoint = Vector3.zero;
        Vector3 surfaceNormal = Vector3.zero;

        hitPoint = (Vector3)((object[])photonData)[0];
        surfaceNormal = (Vector3)((object[])photonData)[1];
        local2world = (float[])((object[])photonData)[2];
        world2local = (float[])((object[])photonData)[3];
        string name = (string)((object[])photonData)[4];
        float[] manipulation_params = (float[])((object[])photonData)[5];

        for (int i = 0; i < 16; i++)
        {
            localToWorld[i / 4,i % 4] = local2world[i];
        }
        for (int i = 0; i < 16; i++)
        {
            worldToLocal[i / 4,i % 4] = world2local[i];
        }
        //Matrix4x4 localToWorld = hitGO.transform.localToWorldMatrix;
        //Matrix4x4 worldToLocal = hitGO.transform.worldToLocalMatrix;

        Debug.Log($"name: {name}");
        //iterate through all child meshes
        for (int i = 0; i < children.Count; i++)
        {
            Debug.Log($"i: {i}");
            Debug.Log(i.ToString() == name);

            if (i.ToString() == name)
            {
                Mesh currMesh = childMeshs[i];
                childMeshs[i] = DynamicMeshTessellation.MeshDeformationWithAutomaticTessellation(currMesh, deformer);
                Vector3 deformer(Vector3 curr_V)
                {
                    return worldToLocal.MultiplyPoint3x4(f(localToWorld.MultiplyPoint3x4(curr_V), hitPoint, surfaceNormal, manipulation_params));
                }

                RecalculateMesh(i);
            }
        }
    }

    private void addVertexToMeshEvent(int childIndex, Vector3 addedVertex, int triangleIndex)
    {
        float[] content = { childIndex, addedVertex.x, addedVertex.y, addedVertex.z, triangleIndex };
        RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All };
        PhotonNetwork.RaiseEvent(AddVertexEventCode, content, raiseEventOptions, SendOptions.SendReliable);
    }

    private void addVertexToMeshResponse(object photonData)
    {
        float[] content = (float[])photonData;
        int childIndex = (int)content[0];
        Vector3 addedVertex = new Vector3(content[1], content[2], content[3]);
        int triangleIndex = (int)content[4];

        childMeshs[childIndex] = AddElevatedVertex(childMeshs[childIndex], addedVertex, triangleIndex);
        RecalculateMesh(childIndex);
    }

    //Here are graphic functions
    private Mesh AddElevatedVertex(Mesh mesh, Vector3 addedVertex, int triangleIndex)
    {
        int[] triangles = mesh.triangles;
        Vector3[] vertices = mesh.vertices;

        int p0Index = triangles[triangleIndex * 3 + 0];
        int p1Index = triangles[triangleIndex * 3 + 1];
        int p2Index = triangles[triangleIndex * 3 + 2];

        Vector3 p0 = vertices[p0Index];
        Vector3 p1 = vertices[p1Index];
        Vector3 p2 = vertices[p2Index];

        //Generating added vertex and faces
        int addedVertexIndex = vertices.Length;
        int[] addedTriangles = {p0Index, p1Index, addedVertexIndex,
                                            p1Index, p2Index, addedVertexIndex,
                                            p2Index, p0Index, addedVertexIndex};

        //Making the new mesh object
        Vector3[] newVertices = new Vector3[vertices.Length + 1];
        vertices.CopyTo(newVertices, 0);
        newVertices[addedVertexIndex] = addedVertex;

        int[] newTriangles = new int[triangles.Length + addedTriangles.Length];
        triangles.CopyTo(newTriangles, 0);
        addedTriangles.CopyTo(newTriangles, triangles.Length);
        Mesh newMesh = new Mesh();
        newMesh.vertices = newVertices;
        newMesh.triangles = newTriangles;
        return newMesh;
    }

    //Here are some helper functions which you should mind
    void RecalculateAllMeshes()
    {
        for (int i = 0; i < children.Count; i++)
        {
            RecalculateMesh(i);
        }
    }
    void RecalculateMesh(int i)
    {
        children[i].GetComponent<MeshFilter>().sharedMesh = childMeshs[i];
        children[i].GetComponent<MeshCollider>().sharedMesh = childMeshs[i];
        children[i].GetComponent<MeshFilter>().sharedMesh.RecalculateNormals();
        //children[i].GetComponent<MeshFilter>().sharedMesh = childMeshs[i];
        //children[i].GetComponent<MeshCollider>().sharedMesh = childMeshs[i];
        //children[i].GetComponent<MeshFilter>().sharedMesh.RecalculateNormals();
    }

    /// <summary>
    /// Linear deform vertices near hitpoint on mesh
    /// </summary>
    /// <param name="point"></param>
    /// <param name="center"></param>
    /// <returns></returns>
    private Vector3 LinearNearHitpoint(Vector3 vertex, Vector3 hitPoint, Vector3 surfaceNormal,float[] mani_params)
    {
        //Debug.Log($"{vertex.x}, {vertex.y}, {vertex.y}");
        float distance = (vertex - hitPoint).magnitude;
        float _effectRadius = mani_params[0];
        float _effectScale = mani_params[1];
        if (distance < _effectRadius)//0.25)//3)
        {
            Vector3 newV = vertex + (_effectScale * surfaceNormal) * (1.0f - (distance / _effectRadius));
            return newV;
        }
        else
        {
            return vertex;
        }
    }

    /// <summary>
    /// Gaussian deform vertices near hitpoint on mesh
    /// </summary>
    /// <param name="vertex"></param>
    /// <param name="hitPoint"></param>
    /// <param name="surfaceNormal"></param>
    /// <returns></returns>
    private Vector3 GaussianNearHitpoint(Vector3 vertex, Vector3 hitPoint, Vector3 surfaceNormal, float[] mani_params)
    {
        //Debug.Log($"{vertex.x}, {vertex.y}, {vertex.y}");
        float distance = (vertex - hitPoint).magnitude;
        float _effectRadius = mani_params[0];
        float _effectScale = mani_params[1];
        if (distance < _effectRadius)//0.25)//3)
        {
            float b = (distance * distance) / (2.0f * (_effectRadius * _effectRadius / 4.0f));
            Vector3 newV = vertex + (_effectScale * surfaceNormal) * (float)Math.Exp(-b);
            return newV;
        }
        else
        {
            return vertex;
        }
    }

    private void Draw2DShapeEvent(Vector3[] points)
    {
        Vector3[] content = points;
        RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All };
        PhotonNetwork.RaiseEvent(GenerateFlatMeshEventCode, content, raiseEventOptions, SendOptions.SendReliable);
    }

    private void Draw2DShapeResponse(object photonData)
    {
        Vector3[] content = (Vector3[])photonData;
        Mesh mesh = Drawing2D.GenerateMeshFrom3DPoints(content);
        GameObject child = new GameObject();
        child.AddComponent<MeshFilter>();
        child.AddComponent<MeshCollider>();
        child.AddComponent<MeshRenderer>();
        child.GetComponent<MeshRenderer>().material.color = new Color(1, 1, 1, 1);
        child.transform.parent = meshParent.transform;
        child.name = children.Count.ToString();

        children.Add(child);
        childMeshs.Add(mesh);
        RecalculateAllMeshes();
    }

    public void Draw2DShape(Vector3[] points)
    {
        Mesh mesh = Drawing2D.GenerateMeshFrom3DPoints(points);

        mesh2D = new Mesh();
        mesh2D.vertices = mesh.vertices;
        mesh2D.triangles = mesh.triangles;
        mesh2D.normals = mesh.normals;
        mesh2D.uv = mesh.uv;
        mesh2D.uv2 = mesh.uv2;
        mesh2D.RecalculateNormals();

        sketchObject = new GameObject();
        MeshFilter mFilter = sketchObject.AddComponent<MeshFilter>();
        MeshCollider mCollider = sketchObject.AddComponent<MeshCollider>();
        MeshRenderer mRenderer = sketchObject.AddComponent<MeshRenderer>();
        mRenderer.material.color = new Color(1, 0, 0, 1);

        //sketchObject.transform.localScale = Vector3.one * 2f;
        sketchObject.transform.SetParent(whiteboard.transform, true);
        //sketchObject.transform.position = whiteboard.transform.position -
        //    Vector3.forward * (whiteboard.transform.position.z + 0.01f) -
        //    mesh.vertices[mesh.vertices.Length - 1];
        //sketchObject.transform.localToWorldMatrix.MultiplyPoint3x4(mesh.vertices[mesh.vertices.Length - 1]);

        sketchObject.transform.localPosition = Vector3.zero;
        sketchObject.transform.localScale = Vector3.one;
        sketchObject.transform.localRotation = Quaternion.identity;

        //sketchObject.transform.position = mesh.vertices[mesh.vertices.Length - 1];
        //sketchObject.transform.localScale = whiteboard.transform.localScale;//Vector3.one;
        //sketchObject.name = children.Count.ToString();

        // Culling occurs for 2D meshe facing us, so we generate a 3D mesh with zero thickness to have two faces.  This way we can see it.
        mesh = Drawing2D.ExtrudeMeshFrom2D(mesh2D, 0.0f * Vector3.back);
        mesh.RecalculateNormals();
        
        mFilter.mesh = mesh;
        mCollider.sharedMesh = mesh;

        //Instantiate(defaultGameObject, sketchObject.transform.position, Quaternion.identity);

        //children.Add(child);
        //childMeshs.Add(mesh);
        //RecalculateAllMeshes();

        //GameObject temp = Instantiate(defaultGameObject, sketchObject.transform.position, Quaternion.identity);
        //temp.transform.localScale = Vector3.one * 0.1f;
    }

    public void Update2DMesh()
    {
        //Mesh mesh = sketchObject.GetComponent<MeshFilter>().mesh;
        //Mesh mesh = Drawing2D.ExtrudeMeshFrom2D(mesh2D, effectExtrude * sketchController.surfaceNormal_) ;
        Mesh mesh = Drawing2D.ExtrudeMeshFrom2D(mesh2D, effectExtrude * Vector3.back);
        sketchObject.GetComponent<MeshFilter>().mesh = mesh;
        sketchObject.GetComponent<MeshCollider>().sharedMesh = mesh;
    }

    public void ExtractExtrudedMeshForInstatiation()
    {
        Debug.Log("ExtractExtrudedMeshForInstatiation");

        //GameObject go = children[children.Count - 1];
        Mesh mesh = sketchObject.GetComponent<MeshFilter>().mesh;

        Debug.Log($"before: {childMeshs.Count}");
        Debug.Log($"before: {children.Count}");

        //childMeshs.RemoveAt(childMeshs.Count - 1);
        //children.RemoveAt(children.Count - 1);

        Debug.Log($"after: {childMeshs.Count}");
        Debug.Log($"after: {children.Count}");

        Vector3 pos = mesh.vertices[mesh.vertices.Length - 1];//sketchObject.transform.position;
        //Matrix4x4 wl2wp = meshParent.transform.worldToLocalMatrix;
        //Matrix4x4 wb2wl = sketchObject.transform.localToWorldMatrix;

        pos = sketchObject.transform.position - meshParent.transform.position;
        Vector3 localScale = sketchObject.transform.localScale;

        Debug.Log($"localScale: {sketchObject.transform.localScale}");

        Debug.Log($"pos: {pos}");

        Destroy(sketchObject);

        //addNewMeshEvent(mesh, pos);
        PhotonView pv = gameObject.GetPhotonView();
        pv.RPC("PunRPC_LoadMesh", RpcTarget.MasterClient, (object)mesh, pos, localScale);

        Debug.Log("after addNewMeshEvent");
    }

    /// <summary>
    /// We don't want continuous spawning so we throttle the spawn rate
    /// </summary>
    /// <param name="time"></param>
    /// <returns></returns>
    IEnumerator CanSpawnTimer(float time)
    {
        yield return new WaitForSeconds(time);

        canSpawn = true;
    }

    [PunRPC]
    private void PunRPC_LoadMesh(object mesh, Vector3 spawnPosition, Vector3 localScale)
    {
        //Vector3 spawnPosition = spawnPoint.transform.position;
        addNewMeshEvent((Mesh)mesh, spawnPosition, localScale);
    }

    /// <summary>
    /// There is typically delay in between when addNewMeshEvent is called and when it is recieved which causes the position of 
    /// tracked hand's spawnpoint to change.
    /// TODO: consider replacing this async method with a forced update of the Solver Hanlder on the SpawnPoint object
    /// </summary>
    /// <param name="time"></param>
    /// <returns></returns>
    IEnumerator LoadMeshAsync(float time)
    {
        yield return new WaitForSeconds(time);

        // Code to execute after the delay
        //Vector3 spawnPosition = spawnPoint.transform.position;
        //addNewMeshEvent(loadedMesh, spawnPosition - meshParent.transform.position);
        PhotonView pv = gameObject.GetPhotonView();
        pv.RPC("PunRPC_LoadMesh", RpcTarget.MasterClient, (object)loadedMesh, spawnPoint.transform.position, Vector3.one);
    }

    /// <summary>
    /// Loads the mesh currently stored in loadedMesh.  loadedMesh is set by MainMenu.
    /// </summary>
    public void LoadMesh()
    {
        if (mainMenu.mode == MainMenu.Mode.Select_Load_Default || mainMenu.mode == MainMenu.Mode.Select_Load_Saved)
        {
            if (canSpawn)
            {
                audioData.PlayOneShot(spawnAudio);
                StartCoroutine(LoadMeshAsync(0.1f));
                canSpawn = false;
                StartCoroutine(CanSpawnTimer(3f));
            }
        }
    }

    /// <summary>
    /// Run spawn material for a few seconds before changing the material to the default material
    /// </summary>
    /// <param name="go"></param>
    /// <returns></returns>
    IEnumerator ChangeSpawnShader(GameObject go)
    {
        MeshRenderer renderer = go.GetComponent<MeshRenderer>();
        renderer.material = spawnShaderMaterial;
        Animator animator = go.GetComponent<Animator>();

        // starthalf way through animation sequence, which better looks like "coalescing" instead of "dissolving"
        animator.Play("AlphaCutoff", -1, 0.5f); 

        float runTime = 1.5f;
        float dt = 0.01f;

        while (runTime > 0.0f)
        {
            runTime -= dt;

            // wait time before next loop
            yield return new WaitForSeconds(dt);
        }

        Destroy(go.GetComponent<Animator>());
        renderer.material = defaultMaterial;
    }
}