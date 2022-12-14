using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;
namespace drawing
{
    public class Drawing2D
    {
        public static float[] MakePlaneFromPoints(Vector3[] points)
        {
            Vector3 point1 = points[0];
            Vector3 point2 = points[1];
            Vector3 point3 = points[2];

            float a1 = point2.x - point1.x;
            float b1 = point2.y - point1.y;
            float c1 = point2.z - point1.z;
            float a2 = point3.x - point1.x;
            float b2 = point3.y - point1.y;
            float c2 = point3.z - point1.z;
            float a = b1 * c2 - b2 * c1;
            float b = a2 * c1 - a1 * c2;
            float c = a1 * b2 - b1 * a2;
            float d = (-a * point1.x - b * point1.y - c * point1.z);

            return new float[4] { a, b, c, d };
        }

        public static Vector2[] AngularSort(Vector2[] points, Vector2 center)
        {
            return points.OrderBy(point => Math.Atan2(point.x - center.x, point.y - center.y)).ToArray<Vector2>();
        }

        public static Vector2 CenterOfMassOfPoints(Vector2[] points)
        {
            float sumOfMassX = 0;
            float sumOfMassY = 0;
            int numPoints = points.Length;
            foreach (Vector2 point in points)
            {
                sumOfMassX += point.x;
                sumOfMassY += point.y;
            }
            return new Vector2(sumOfMassX / (float)numPoints, sumOfMassY / (float)numPoints);
        }

        public static Vector3 makeVertexFrom2DPoint(Vector2 point, Vector3 origin, Vector3 xAxis, Vector3 yAxis)
        {
            return (xAxis * point.x + yAxis * point.y) + origin;
        }

        public static Vector2 make2DPointFromVector(Vector3 point, Vector3 origin, Vector3 xAxis, Vector3 yAxis)
        {
            return new Vector2(Vector3.Dot(xAxis, point - origin), Vector3.Dot(yAxis, point - origin));
        }

        public static Vector2[] make2DPointFromVector(Vector3[] points, Vector3 origin, Vector3 xAxis, Vector3 yAxis)
        {
            return points.Select(point3D => make2DPointFromVector(point3D, origin, xAxis, yAxis)).ToArray();
        }

        public static Vector3[] makeVertexFrom2DPoint(Vector2[] points, Vector3 origin, Vector3 xAxis, Vector3 yAxis)
        {
            return points.Select(point2D => makeVertexFrom2DPoint(point2D, origin, xAxis, yAxis)).ToArray();
        }

        public static Mesh GenerateMeshFrom3DPoints(Vector3[] points)
        {
            float[] plane = MakePlaneFromPoints(points);
            Vector3 normal = new Vector3(plane[0], plane[1], plane[2]);
            Vector3 origin = points[0];
            Vector3 xAxis = Vector3.Normalize(points[1] - origin);
            Vector3 yAxis = Vector3.Normalize(Vector3.Cross(normal, xAxis));
            Vector2[] points2D = make2DPointFromVector(points, origin, xAxis, yAxis);
            foreach (Vector2 point in points2D)
            {
                Debug.Log(point);
            }

            Vector2 centerOfMass = CenterOfMassOfPoints(points2D);
            Vector2[] sortedPoints = AngularSort(points2D, centerOfMass);

            //Making the new mesh object
            Vector3[] vertices = new Vector3[points2D.Length + 1];
            int[] newTriangles = new int[3 * points2D.Length];
            int centerOfMassIndex = points2D.Length;
            vertices[centerOfMassIndex] = makeVertexFrom2DPoint(centerOfMass, origin, xAxis, yAxis);
            

            for (int i = 0; i < sortedPoints.Length; i++)
            {
                // Find index of relevant points
                int firstPointIndex = i;
                int secondPointIndex = (i + 1) % sortedPoints.Length;

                //add current point to vertices
                Vector2 firstPoint = sortedPoints[firstPointIndex];
                vertices[firstPointIndex] = makeVertexFrom2DPoint(firstPoint, origin, xAxis, yAxis);

                //add current indices to triangles
                newTriangles[3 * i] = firstPointIndex;
                newTriangles[3 * i + 1] = secondPointIndex;
                newTriangles[3 * i + 2] = centerOfMassIndex;
            }

            Mesh newMesh = new Mesh();
            newMesh.vertices = vertices;
            newMesh.triangles = newTriangles;
            return newMesh;
        }

        public static Mesh ExtrudeMeshFrom2D(Mesh mesh2D, Vector3 offset)
        {
            Vector3[] oldVertices = mesh2D.vertices;
            int[] oldTriangles = mesh2D.triangles;
            Vector3[] vertices = new Vector3[oldVertices.Length * 2];
            Vector2[] uv = new Vector2[oldVertices.Length*2];
            Vector2[] uv2 = new Vector2[oldVertices.Length * 2];

            for (int i = 0; i < oldVertices.Length; i += 1)
            {
                vertices[i] = oldVertices[i];
                vertices[i + oldVertices.Length] = oldVertices[i] + offset;
                uv[i] = new Vector2(oldVertices[i].x, oldVertices[i].y);
                uv2[i] = new Vector2(oldVertices[i].x, oldVertices[i].y);
                uv[i + oldVertices.Length] = new Vector2(oldVertices[i].x, oldVertices[i].y);
                uv2[i + oldVertices.Length] = new Vector2(oldVertices[i].x, oldVertices[i].y);

            }

            int[] newTriangles = new int[2 * 3 * (vertices.Length - 2)];

            for (int i = 0; i < oldTriangles.Length; i += 3)
            {
                newTriangles[2 * i] = oldTriangles[i];
                newTriangles[2 * i + 1] = oldTriangles[i + 1];
                newTriangles[2 * i + 2] = oldTriangles[i + 2];

                newTriangles[2 * i + 5] = oldTriangles[i] + oldVertices.Length;
                newTriangles[2 * i + 4] = oldTriangles[i + 1] + oldVertices.Length;
                newTriangles[2 * i + 3] = oldTriangles[i + 2] + oldVertices.Length;
            }

            //Then we specify the triangles for the sides 
            for (int i = 2 * oldTriangles.Length; i < newTriangles.Length; i += 6)
            {
                int j = (i - 2 * oldTriangles.Length) / 6;
                int bottomFirst = j;
                int bottomSecond = (j + 1) % (oldVertices.Length - 1);
                int topFirst = j + oldVertices.Length;
                int topSecond = ((j + 1) % (oldVertices.Length - 1)) + oldVertices.Length;

                newTriangles[i + 2] = bottomFirst;
                newTriangles[i + 1] = bottomSecond;
                newTriangles[i] = topFirst;
                newTriangles[i + 5] = topFirst;
                newTriangles[i + 4] = bottomSecond;
                newTriangles[i + 3] = topSecond;
            }

            Mesh newMesh = new Mesh();
            newMesh.vertices = vertices;
            newMesh.triangles = newTriangles;
            newMesh.uv = uv;
            newMesh.uv2 = uv2;
            return newMesh;
        }
    }
}