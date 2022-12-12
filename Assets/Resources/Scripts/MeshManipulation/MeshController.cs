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
//using System.Numerics;

public class MeshController : MonoBehaviour, IOnEventCallback
{
    public GameObject loadedMesh = default;
    
    private bool canSpawn = true;

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
    [SerializeField] private AudioClip pointerAudio;
    [SerializeField] public float effectScale = 0;
    [SerializeField] public float effectRadius = 0.05f;
    [SerializeField] public MainMenu mainMenu = default;
    [SerializeField] private SketchController sketchController = default;
    [SerializeField] public GameObject defaultMesh = default;
    [SerializeField] private GameObject defaultGameObject = default;
    [SerializeField] private GameObject spawnPoint = default;
    [SerializeField] private GameObject meshParent = default;
    [SerializeField] private Material spawnShaderMaterial = default;
    [SerializeField] private Material defaultMaterial = default;
    [SerializeField] private GameObject pointerPrefab = default;

    //Unity functions
    void Start()
    {
        children = new List<GameObject>();
        childMeshs = new List<Mesh>();
        childMeshColliders = new List<MeshCollider>();

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
            || mainMenu.mode == MainMenu.Mode.Select_Move)
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
                                                ShortTap(hit.point, hit.normal, hitGO);
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
                                                    Quaternion normalOrientation = Quaternion.LookRotation(Vector3.up, hit.normal);

                                                    //Quaternion orientationTowardsHead = Quaternion.LookRotation(handPosition - headPosition, Vector3.up);
                                                    GameObject go = PhotonNetwork.Instantiate(pointerPrefab.name, endPoint, normalOrientation);
                                                    go.transform.localScale = Vector3.one * 0.1f;

                                                    StartCoroutine(DestroyObjectDelayed(go, 5f));
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
    private async void ShortTap(Vector3 hitPoint, Vector3 surfaceNormal, GameObject hitGO)
    {
        if (hitGO == null)
        {
            //Debug.Log("Null GO");
            return;
        }

        Matrix4x4 localToWorld = hitGO.transform.localToWorldMatrix;
        Matrix4x4 worldToLocal = hitGO.transform.worldToLocalMatrix;

        if (mainMenu.mode == MainMenu.Mode.Sculpt_Push_Linear)//(editingMode == EditingMode.VertexPush)
        {
            audioData.PlayOneShot(createAudio);
            VertexPushLinearEvent(localToWorld, worldToLocal, hitPoint, surfaceNormal);
        }
        else if (mainMenu.mode == MainMenu.Mode.Sculpt_Push_Gaussian)//(editingMode == EditingMode.VertexPush)
        {
            audioData.PlayOneShot(createAudio);
            VertexPushGaussianEvent(localToWorld, worldToLocal, hitPoint, surfaceNormal);
        }
        else if (mainMenu.mode == MainMenu.Mode.Sculpt_Pull_Linear)//(editingMode == EditingMode.VertexPush)
        {
            audioData.PlayOneShot(createAudio);
            VertexPullLinearEvent(localToWorld, worldToLocal, hitPoint, surfaceNormal);
        }
        else if (mainMenu.mode == MainMenu.Mode.Sculpt_Pull_Gaussian)//(editingMode == EditingMode.VertexPush)
        {
            audioData.PlayOneShot(createAudio);
            VertexPullGaussianEvent(localToWorld, worldToLocal, hitPoint, surfaceNormal);
        }
        else if (mainMenu.mode == MainMenu.Mode.Sketch_Draw)
        {
            sketchController.AddPoint(hitPoint);
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
        if (eventCode == ModifyVerticesNearPointEventCode)
        {
            modifyVerticesNearPointResponse(photonEvent.CustomData, riseNearCenter);
        }
        if (eventCode == AddVertexEventCode)
        {
            addVertexToMeshResponse(photonEvent.CustomData);
        }
        if (eventCode == VertexPushLinearEventCode)
        {
            VertexManipulatorResponse(photonEvent.CustomData, PullLinearNearHitpoint);
        }
        if (eventCode == VertexPushGaussianEventCode)
        {
            VertexManipulatorResponse(photonEvent.CustomData, PullGaussianNearHitpoint);
        }
        if (eventCode == VertexPullLinearEventCode)
        {
            VertexManipulatorResponse(photonEvent.CustomData, PullLinearNearHitpoint);
        }
        if (eventCode == VertexPullGaussianEventCode)
        {
            VertexManipulatorResponse(photonEvent.CustomData, PullGaussianNearHitpoint);
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
        PhotonNetwork.Destroy(gameObject);
    }
    // </destroyObjectDelayed>

    //Here are networking functions 
    public void addNewMeshEvent(Mesh mesh, Vector3 spawnPosition)
    {
        object[] content = { (object)mesh, (object)spawnPosition };
        RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All };
        PhotonNetwork.RaiseEvent(AddNewMeshEventCode, content, raiseEventOptions, SendOptions.SendReliable);
    }
    public void addNewMeshResponse(object photonData)
    {
        Mesh data = (Mesh)((object[])photonData)[0];
        Vector3 spawnPosition = (Vector3)((object[])photonData)[1];
        GameObject child = new GameObject();

        // add necessary components
        MeshFilter mFilter = child.AddComponent<MeshFilter>();
        mFilter.mesh = data;
        child.AddComponent<MeshCollider>();
        child.AddComponent<MeshRenderer>();

        // wire up animator
        Animator animator = child.AddComponent<Animator>();
        animator.cullingMode = AnimatorCullingMode.AlwaysAnimate;
        animator.updateMode = AnimatorUpdateMode.Normal;
        var runtimeAnimatorController = (RuntimeAnimatorController)UnityEngine.Resources.Load("AlphaCutoff");
        animator.runtimeAnimatorController = runtimeAnimatorController;

        // reparent, scale, position
        child.transform.parent = meshParent.transform;
        child.transform.position = spawnPosition + meshParent.transform.position;
        child.transform.localScale = Vector3.one; //* 0.5f;
        child.name = children.Count.ToString();

        // put in correct layer for raycasting
        int LayerMesh = LayerMask.NameToLayer("Mesh");
        child.layer = LayerMesh;

        // start animator and remove spawn material after some time
        StartCoroutine(ChangeSpawnShader(child));

        // track the new mesh
        children.Add(child);
        childMeshs.Add(data);
        RecalculateAllMeshes();
    }

    private void modifyVerticesNearPointEvent(Vector3 point)
    {
        Vector3 content = point;
        RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All };
        PhotonNetwork.RaiseEvent(ModifyVerticesNearPointEventCode, content, raiseEventOptions, SendOptions.SendReliable);
    }
    //f is a function of the form (current vertex position, response point) -> new vertex position
    private void modifyVerticesNearPointResponse(object photonData, Func<Vector3, Vector3, Vector3> f)
    {
        Vector3 data = (Vector3)photonData;
        Vector3 hitPoint = data;

        //iterate through all child meshes
        for (int i = 0; i < children.Count; i++)
        {
            Mesh currMesh = childMeshs[i];
            Vector3[] changedVertices = currMesh.vertices;
            for (int v = 0; v < currMesh.vertices.Length; v++)
            {
                changedVertices[v] = f(changedVertices[v], hitPoint);
            }
            childMeshs[i].vertices = changedVertices;
            RecalculateMesh(i);
        }
    }

    private void VertexPushLinearEvent(Matrix4x4 localToWorld, Matrix4x4 worldToLocal, Vector3 point, Vector3 surfaceNormal)
    {
        object[] content = { (object)point, (object)(-1 * surfaceNormal), (object)localToWorld, (object)worldToLocal };
        RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All };
        PhotonNetwork.RaiseEvent(VertexPushLinearEventCode, content, raiseEventOptions, SendOptions.SendReliable);
    }

    private void VertexPushGaussianEvent(Matrix4x4 localToWorld, Matrix4x4 worldToLocal, Vector3 point, Vector3 surfaceNormal)
    {
        object[] content = { (object)point, (object)(-1 * surfaceNormal), (object)localToWorld, (object)worldToLocal };
        RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All };
        PhotonNetwork.RaiseEvent(VertexPushGaussianEventCode, content, raiseEventOptions, SendOptions.SendReliable);
    }
    private void VertexPullLinearEvent(Matrix4x4 localToWorld, Matrix4x4 worldToLocal, Vector3 point, Vector3 surfaceNormal)
    {
        object[] content = { (object)point, (object)(surfaceNormal), (object)localToWorld, (object)worldToLocal };
        RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All };
        PhotonNetwork.RaiseEvent(VertexPullLinearEventCode, content, raiseEventOptions, SendOptions.SendReliable);
    }

    private void VertexPullGaussianEvent(Matrix4x4 localToWorld, Matrix4x4 worldToLocal, Vector3 point, Vector3 surfaceNormal)
    {
        object[] content = { (object)point, (object)(surfaceNormal), (object)localToWorld, (object)worldToLocal };
        RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All };
        PhotonNetwork.RaiseEvent(VertexPullGaussianEventCode, content, raiseEventOptions, SendOptions.SendReliable);
    }

    //f is a function of the form (current vertex position, response point) -> new vertex position
    private void VertexManipulatorResponse(object photonData, Func<Vector3, Vector3, Vector3, Vector3> f)
    {
        // fill in hitPoint and surfaceNormal
        //GameObject hitGO = default;
        Matrix4x4 localToWorld = default;
        Matrix4x4 worldToLocal = default;
        Vector3 hitPoint = Vector3.zero;
        Vector3 surfaceNormal = Vector3.zero;

        hitPoint = (Vector3)((object[])photonData)[0];
        surfaceNormal = (Vector3)((object[])photonData)[1];
        localToWorld = (Matrix4x4)((object[])photonData)[2];
        worldToLocal = (Matrix4x4)((object[])photonData)[3];

        //Matrix4x4 localToWorld = hitGO.transform.localToWorldMatrix;
        //Matrix4x4 worldToLocal = hitGO.transform.worldToLocalMatrix;

        //iterate through all child meshes
        for (int i = 0; i < children.Count; i++)
        {
            Mesh currMesh = childMeshs[i];
            Vector3[] changedVertices = currMesh.vertices;
            for (int j = 0; j < currMesh.vertices.Length; j++)
            {
                //Debug.Log($"{currMesh.vertices[j].x.ToString("F32")}, {currMesh.vertices[j].y.ToString("F32")}, {currMesh.vertices[j].z.ToString("F32")}");

                Vector3 worldV = localToWorld.MultiplyPoint3x4(currMesh.vertices[j]);
                //Debug.Log($"{worldV.x}, {worldV.y}, {worldV.z}");

                Vector3 newWorldV = f(worldV, hitPoint, surfaceNormal);
                //Debug.Log($"{newWorldV.x}, {newWorldV.y}, {newWorldV.z}");

                Vector3 newLocalV = worldToLocal.MultiplyPoint3x4(newWorldV);
                //Debug.Log($"{newLocalV.x.ToString("F32")}, {newLocalV.y.ToString("F32")}, {newLocalV.z.ToString("F32")}");

                changedVertices[j] = newLocalV;
            }
            childMeshs[i].vertices = changedVertices;
            RecalculateMesh(i);
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
    }

    //Here are some helper functions which you should NOT mind
    private Vector3 riseNearCenter(Vector3 point, Vector3 center)
    {
        float distance = (point - center).magnitude;

        if (distance < effectRadius)//1.5)//3)
        {
            Vector3 newV = point * ((distance * distance) / 9) + (center + new Vector3(0, 1, 0)) * (1 - ((distance * distance) / 9));
            Debug.Log($"center: {center}");
            Debug.Log($"distance: {distance}");
            Debug.Log($"oldV: {point}");
            Debug.Log($"newV: {newV}");
            return newV;
        }
        else
        {
            return point;
        }
    }

    /// <summary>
    /// Linear pull to deform vertices near hitpoint on mesh
    /// </summary>
    /// <param name="point"></param>
    /// <param name="center"></param>
    /// <returns></returns>
    private Vector3 PullLinearNearHitpoint(Vector3 vertex, Vector3 hitPoint, Vector3 surfaceNormal)
    {
        //Debug.Log($"{vertex.x}, {vertex.y}, {vertex.y}");
        float distance = (vertex - hitPoint).magnitude;

        if (distance < effectRadius)//0.25)//3)
        {
            Vector3 newV = vertex + (effectScale * surfaceNormal) * (1.0f - (distance / effectRadius));
            return newV;
        }
        else
        {
            return vertex;
        }
    }

    /// <summary>
    /// Gaussian pull to deform vertices near hitpoint on mesh
    /// </summary>
    /// <param name="vertex"></param>
    /// <param name="hitPoint"></param>
    /// <param name="surfaceNormal"></param>
    /// <returns></returns>
    private Vector3 PullGaussianNearHitpoint(Vector3 vertex, Vector3 hitPoint, Vector3 surfaceNormal)
    {
        //Debug.Log($"{vertex.x}, {vertex.y}, {vertex.y}");
        float distance = (vertex - hitPoint).magnitude;

        if (distance < effectRadius)//0.25)//3)
        {
            float b = (distance * distance) / (2.0f * (effectRadius * effectRadius / 4.0f));
            Vector3 newV = vertex + (effectScale * surfaceNormal) * (float)Math.Exp(-b);
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
        Vector3 spawnPosition = spawnPoint.transform.position;
        addNewMeshEvent(loadedMesh.GetComponent<MeshFilter>().mesh, spawnPosition - meshParent.transform.position);
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