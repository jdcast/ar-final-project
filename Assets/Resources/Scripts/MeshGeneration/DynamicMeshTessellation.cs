using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;

public class DynamicMeshTessellation : MonoBehaviour
{

    static public float tolerence = 1.0f;

    static public void RefineTriangle(int triangleIndex, List<Vector3> vertices, List<int> triangles, Func<Vector3, Vector3> f){
        Vector3 v1 = vertices[triangles[triangleIndex]];
        Vector3 v2 = vertices[triangles[triangleIndex+1]];
        Vector3 v3 = vertices[triangles[triangleIndex+2]];

        Vector3 t1 = f(v1);
        Vector3 t2 = f(v2);
        Vector3 t3 = f(v3);

        if ((t1-t2).sqrMagnitude < tolerence &  (t2-t3).sqrMagnitude < tolerence & (t1-t3).sqrMagnitude < tolerence){
            return ;
        }

        Vector3 m12 = (v1+v2)/2;
        Vector3 m23 = (v2+v3)/2;
        Vector3 m31 = (v3+v1)/2;

        vertices.Add(m12);
        vertices.Add(m23);
        vertices.Add(m31);

        int m12Index = vertices.Count - 3;
        int m23Index = vertices.Count - 2;
        int m31Index = vertices.Count - 1;

        int v1Index = triangles[triangleIndex];
        int v2Index = triangles[triangleIndex+1];
        int v3Index = triangles[triangleIndex+2];


        //we first rewrite the current triangle
        //note that triangles[3*triangleIndex] is unchanged, v1
        triangles[triangleIndex+1] = m12Index; 
        triangles[triangleIndex+2] = m31Index; 

        //the remaining triangle indices are appended
        //central triangle
        triangles.Add(m12Index);
        triangles.Add(m23Index);
        triangles.Add(m31Index);

        //bottom right
        triangles.Add(m31Index);
        triangles.Add(m23Index);
        triangles.Add(v3Index);

        //top
        triangles.Add(m12Index);
        triangles.Add(v2Index);
        triangles.Add(m23Index);

        int count1 = triangles.Count-3;
        int count2 = triangles.Count-6;
        int count3 = triangles.Count-9;

        RefineTriangle(triangleIndex, vertices, triangles, f);
        RefineTriangle(count1, vertices, triangles, f);
        RefineTriangle(count2, vertices, triangles, f);
        RefineTriangle(count3, vertices, triangles, f);
        return ;
    }
    
    
    static public Mesh MeshDeformationWithAutomaticTessellation(Mesh mesh, Func<Vector3, Vector3> f){
        List<Vector3> vertices = new List<Vector3>(mesh.vertices);
        List<int> triangles = new List<int>(mesh.triangles);
        int count = triangles.Count;
        for (int i = 0; i < count; i+=3){
            RefineTriangle(i, vertices, triangles, f);
        }

        mesh.vertices = vertices.Select(x => f(x)).ToArray();
        mesh.triangles = triangles.ToArray();
        return mesh;
    }
}
