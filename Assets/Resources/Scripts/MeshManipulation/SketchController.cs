using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using UnityEngine;

public class SketchController : MonoBehaviour
{
    private List<GameObject> points;

    [SerializeField] GameObject sketchPoint = default;
    [SerializeField] GameObject whiteboard = default;
    [SerializeField] public Vector3 surfaceNormal_ = Vector3.one;
    
    private void Start()
    {
        points = new List<GameObject>();
    }

    public void AddPoint(Vector3 point,Vector3 surfaceNormal)
    {
        Debug.Log("AddPoint");

        if (point != null)
        {
            //GameObject go = PhotonNetwork.Instantiate(sketchPoint.name, point, Quaternion.identity);
            GameObject go = Instantiate(sketchPoint, point, Quaternion.identity);
            go.transform.localScale = Vector3.one * 0.005f;
            go.transform.position = point;
            go.transform.SetParent(whiteboard.transform,true);
            points.Add(go);
            surfaceNormal_ = surfaceNormal;
        }
    }

    public void StartSketch()
    {
        RemoveAllSketchPoints();
        //PhotonView pv = gameObject.GetPhotonView();
        //pv.RPC("PunRPC_RemoveAllSketchPoints", RpcTarget.All);
    }

    public Vector3[] GetPoints()
    {
        Vector3[] vert_pts = new Vector3[points.Count];
        if (points.Count != 0)
        {
            for (int i = 0; i < points.Count; ++i)
            {
                vert_pts[i] = (points[i].transform.localPosition);
            }
        }
        return vert_pts;
    }

    public void RemoveAllSketchPoints()
    {
        Debug.Log(points.Count);
        for (int i = 0; i < points.Count; i++)
        {
            GameObject pointGO = points[i];
            Destroy(pointGO);
        }

        points = new List<GameObject>();
    }

    [PunRPC]
    private void PunRPC_RemoveAllSketchPoints()
    {
        Debug.Log(points.Count);
        for (int i = 0; i < points.Count; i++)
        {
            GameObject pointGO = points[i];
            PhotonNetwork.Destroy(pointGO);
        }

        points = new List<GameObject>();
    }
}
