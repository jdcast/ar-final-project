using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using ExitGames.Client.Photon;
using Photon.Realtime;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using System;

public class MeshSerializer : MonoBehaviourPunCallbacks
{
    // Convert an mesh to a byte array
    public static byte[] MeshToByteArray(object mesh)
    {
        BinaryFormatter bf = new BinaryFormatter();
        using (var ms = new MemoryStream())
        {
            SerializableMeshInfo serializableMesh = new SerializableMeshInfo((Mesh)mesh);
            bf.Serialize(ms, serializableMesh);
            return ms.ToArray();
        }
    }

    public static string[] MeshToString(object mesh)
    {
        string[] data = new string[5];
        SerializableMeshInfo serializableMesh = new SerializableMeshInfo((Mesh)mesh);
        data[0] = string.Join(",", serializableMesh.vertices);
        data[1] = string.Join(",", serializableMesh.triangles);
        data[2] = string.Join(",", serializableMesh.uv);
        data[3] = string.Join(",", serializableMesh.uv2);
        data[4] = string.Join(",", serializableMesh.normals);
        return data;
    }

    public static Mesh StringToMesh(string[] data)
    {
        Mesh mesh = new Mesh();
        SerializableMeshInfo serializableMesh = new SerializableMeshInfo(mesh);
        serializableMesh.vertices = Array.ConvertAll(data[0].Split(','), float.Parse);
        serializableMesh.triangles = Array.ConvertAll(data[1].Split(','), int.Parse);
        serializableMesh.uv = Array.ConvertAll(data[2].Split(','), float.Parse);
        serializableMesh.uv2 = Array.ConvertAll(data[3].Split(','), float.Parse);
        serializableMesh.normals = Array.ConvertAll(data[4].Split(','), float.Parse);
        return serializableMesh.GetMesh();
    }



    // Convert a byte array to a mesh
    public object ByteArrayToMesh(byte[] arrBytes)
    {
        using (var memStream = new MemoryStream())
        {
            var binForm = new BinaryFormatter();
            memStream.Write(arrBytes, 0, arrBytes.Length);
            memStream.Seek(0, SeekOrigin.Begin);
            Mesh mesh = ((SerializableMeshInfo)binForm.Deserialize(memStream)).GetMesh();
            return mesh;
        }
    }
}

[System.Serializable]
class SerializableMeshInfo
{
    [SerializeField]
    public float[] vertices;
    [SerializeField]
    public int[] triangles;
    [SerializeField]
    public float[] uv;
    [SerializeField]
    public float[] uv2;
    [SerializeField]
    public float[] normals;

    public SerializableMeshInfo(Mesh m) // Constructor: takes a mesh and fills out SerializableMeshInfo data structure which basically mirrors Mesh object's parts.
    {
        vertices = new float[m.vertexCount * 3]; // initialize vertices array.
        for (int i = 0; i < m.vertexCount; i++) // Serialization: Vector3's values are stored sequentially.
        {
            vertices[i * 3] = m.vertices[i].x;
            vertices[i * 3 + 1] = m.vertices[i].y;
            vertices[i * 3 + 2] = m.vertices[i].z;
        }
        triangles = new int[m.triangles.Length]; // initialize triangles array
        for (int i = 0; i < m.triangles.Length; i++) // Mesh's triangles is an array that stores the indices, sequentially, of the vertices that form one face
        {
            triangles[i] = m.triangles[i];
        }
        uv = new float[m.uv.Length * 2]; // initialize uvs array
        for (int i = 0; i < m.uv.Length; i++) // uv's Vector2 values are serialized similarly to vertices' Vector3
        {
            uv[i * 2] = m.uv[i].x;
            uv[i * 2 + 1] = m.uv[i].y;
        }
        uv2 = new float[m.uv2.Length * 2]; // uv2
        for (int i = 0; i < m.uv2.Length; i++)
        {
            uv[i * 2] = m.uv2[i].x;
            uv[i * 2 + 1] = m.uv2[i].y;
        }
        normals = new float[m.normals.Length * 3]; // normals are very important
        for (int i = 0; i < m.normals.Length; i++) // Serialization
        {
            normals[i * 3] = m.normals[i].x;
            normals[i * 3 + 1] = m.normals[i].y;
            normals[i * 3 + 2] = m.normals[i].z;
        }
    }

    // GetMesh gets a Mesh object from currently set data in this SerializableMeshInfo object.
    // Sequential values are deserialized to Mesh original data types like Vector3 for vertices.
    public Mesh GetMesh()
    {
        Mesh m = new Mesh();
        List<Vector3> verticesList = new List<Vector3>();
        for (int i = 0; i < vertices.Length / 3; i++)
        {
            verticesList.Add(new Vector3(
                    vertices[i * 3], vertices[i * 3 + 1], vertices[i * 3 + 2]
                ));
        }
        m.SetVertices(verticesList);
        m.triangles = triangles;
        List<Vector2> uvList = new List<Vector2>();
        for (int i = 0; i < uv.Length / 2; i++)
        {
            uvList.Add(new Vector2(
                    uv[i * 2], uv[i * 2 + 1]
                ));
        }
        m.SetUVs(0, uvList);
        List<Vector2> uv2List = new List<Vector2>();
        for (int i = 0; i < uv2.Length / 2; i++)
        {
            uv2List.Add(new Vector2(
                    uv2[i * 2], uv2[i * 2 + 1]
                ));
        }
        m.SetUVs(1, uv2List);
        List<Vector3> normalsList = new List<Vector3>();
        for (int i = 0; i < normals.Length / 3; i++)
        {
            normalsList.Add(new Vector3(
                    normals[i * 3], normals[i * 3 + 1], normals[i * 3 + 2]
                ));
        }
        m.SetNormals(normalsList);

        return m;
    }
}
