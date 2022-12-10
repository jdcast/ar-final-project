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

    private void Start()
    {
        points = new List<GameObject>();
    }

    public void AddPoint(Vector3 point)
    {
        Debug.Log("AddPoint");

        if (point != null)
        {
            //GameObject go = PhotonNetwork.Instantiate(sketchPoint.name, point, Quaternion.identity);
            GameObject go = Instantiate(sketchPoint, point, Quaternion.identity);
            go.transform.localScale = Vector3.one * 0.005f;
            go.transform.position = point;
            go.transform.parent = whiteboard.transform;
            points.Add(go);
        }
    }

    public void StartSketch()
    {
        RemoveAllSketchPoints();
        //PhotonView pv = gameObject.GetPhotonView();
        //pv.RPC("PunRPC_RemoveAllSketchPoints", RpcTarget.All);
    }

    private void RemoveAllSketchPoints()
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
