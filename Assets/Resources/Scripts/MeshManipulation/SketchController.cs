using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using UnityEngine;

public class SketchController : MonoBehaviour
{
    public List<GameObject> points;

    [SerializeField] GameObject sketchPoint = default;

    public void AddPoint(Vector3 point)
    {
        Debug.Log("AddPoint");

        if (point != null)
        {
            GameObject pointGO = PhotonNetwork.Instantiate(sketchPoint.name, point, Quaternion.identity);
            gameObject.transform.localScale = Vector3.one;// * 0.05f;
            gameObject.transform.position = point;
            points.Append(pointGO);
        }
    }

    public void StartSketch()
    {
        PhotonView pv = gameObject.GetPhotonView();
        pv.RPC("PunRPC_RemoveAllSketchPoints", RpcTarget.All);
    }

    [PunRPC]
    private void PunRPC_RemoveAllSketchPoints()
    {
        for (int i = 0; i < points.Count; i++)
        {
            GameObject pointGO = points[i];
            PhotonNetwork.Destroy(pointGO);
        }

        points = new List<GameObject>();
    }
}
