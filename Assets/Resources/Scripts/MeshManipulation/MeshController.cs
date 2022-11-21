using ExitGames.Client.Photon;
using Photon.Realtime;
using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using System;

public class MeshController : MonoBehaviour, IOnEventCallback
{
    //These fields will probably be removed soon. Since all meshes are children of the Mesh Holder,
    //we already have an ordering for all the meshes as prescribed by the hierchy.
    private List<GameObject> children;
    private List<Mesh> childMeshs;
    private List<MeshCollider> childMeshColliders;

    //The different event codes
    public const byte ModifyVerticesNearPointEventCode = 1;
    public const byte AddNewMeshEventCode = 2;
    public const byte AddVertexEventCode = 3;

    // mesh parent
    [SerializeField] private GameObject meshParent = default;

    //Unity functions
    void Start()
    {
        children = new List<GameObject>();
        childMeshs = new List<Mesh>();
        childMeshColliders = new List<MeshCollider>();

        for (int i = 0; i < meshParent.transform.childCount; i++)
        {
            GameObject child = meshParent.transform.GetChild(i).gameObject;
            children.Add(child);
            childMeshs.Add(child.GetComponent<MeshFilter>().mesh);
            childMeshColliders.Add(child.GetComponent<MeshCollider>());
        }
    }
    void Update()
    {
        if (Input.GetKey("q"))
        {
            Mesh newMesh;
            int xSize = 10;
            int ySize = 10;
            newMesh = new Mesh();
            newMesh.name = "Procedural Grid";

            Vector3[] vertices = new Vector3[(xSize + 1) * (ySize + 1)];
            for (int i = 0, y = 0; y <= ySize; y++)
            {
                for (int x = 0; x <= xSize; x++, i++)
                {
                    vertices[i] = new Vector3(x, y);
                }
            }
            newMesh.vertices = vertices;

            int[] triangles = new int[xSize * ySize * 6];
            for (int ti = 0, vi = 0, y = 0; y < ySize; y++, vi++)
            {
                for (int x = 0; x < xSize; x++, ti += 6, vi++)
                {
                    triangles[ti] = vi;
                    triangles[ti + 3] = triangles[ti + 2] = vi + 1;
                    triangles[ti + 4] = triangles[ti + 1] = vi + xSize + 1;
                    triangles[ti + 5] = vi + xSize + 2;
                }
            }

            newMesh.triangles = triangles;

            addNewMeshEvent(newMesh);
        }
        if (Input.GetMouseButtonDown(3))
        {
            if (!(Camera.main is null))
            {
                RaycastHit hit;
                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

                if (Physics.Raycast(ray, out hit, Mathf.Infinity))
                {
                    Vector3 hitPoint = hit.point;
                    modifyVerticesNearPointEvent(hitPoint);
                }
            }
        }
        if (Input.GetMouseButtonDown(4))
        {
            if (!(Camera.main is null))
            {
                RaycastHit hit;
                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

                if (Physics.Raycast(ray, out hit, Mathf.Infinity))
                {
                    MeshCollider meshCollider = hit.collider as MeshCollider;
                    if (meshCollider == null || meshCollider.sharedMesh == null)
                        return;

                    Vector3 offset = new Vector3(0, 1, 0);
                    Vector3 addedVertex = hit.point + offset;
                    int hitObjectID = hit.transform.gameObject.GetInstanceID();
                    int childIndex = 0;

                    for (int i = 0; i < meshParent.transform.childCount; i++)
                    {
                        GameObject child = meshParent.transform.GetChild(i).gameObject;
                        if (child.GetInstanceID() == hitObjectID)
                        {
                            childIndex = i;
                            break;
                        }
                    }

                    float[] content = { childIndex, addedVertex.x, addedVertex.y, addedVertex.z, hit.triangleIndex };
                    RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All };
                    PhotonNetwork.RaiseEvent(AddVertexEventCode, content, raiseEventOptions, SendOptions.SendReliable);
                }
            }
        }
    }
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
    }


    //Here are networking functions 
    private void addNewMeshEvent(Mesh mesh)
    {
        Mesh content = mesh;
        RaiseEventOptions raiseEventOptions = new RaiseEventOptions { Receivers = ReceiverGroup.All };
        PhotonNetwork.RaiseEvent(AddNewMeshEventCode, content, raiseEventOptions, SendOptions.SendReliable);
    }
    private void addNewMeshResponse(object photonData)
    {
        Mesh data = (Mesh)photonData;
        GameObject child = new GameObject();
        child.AddComponent<MeshFilter>();
        child.AddComponent<MeshCollider>();
        child.AddComponent<MeshRenderer>();
        child.GetComponent<MeshRenderer>().material.color = new Color(1, 1, 1, 1);
        child.transform.parent = meshParent.transform;
        child.name = children.Count.ToString();

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
        Debug.Log($"hitPoint: {hitPoint}");

        //iterate through all child meshes
        for (int i = 0; i < children.Count; i++)
        {
            Mesh currMesh = childMeshs[i];
            Vector3[] changedVertices = currMesh.vertices;
            for (int v = 0; v < currMesh.vertices.Length; v++)
            {
               // Debug.Log("Before");
                //Debug.Log(changedVertices[v]);
                changedVertices[v] = f(changedVertices[v], hitPoint);
                //Debug.Log("After");
                //Debug.Log(changedVertices[v]);
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
        meshParent.transform.GetChild(i).gameObject.GetComponent<MeshFilter>().sharedMesh = childMeshs[i];
        meshParent.transform.GetChild(i).gameObject.GetComponent<MeshCollider>().sharedMesh = childMeshs[i];
        meshParent.transform.GetChild(i).gameObject.GetComponent<MeshFilter>().sharedMesh.RecalculateNormals();
    }

    //Here are some helper functions which you should NOT mind
    private Vector3 riseNearCenter(Vector3 point, Vector3 center)
    {
        float distance = (point - center).magnitude;
        
        if (distance < 1.5)//3)
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

}