using Photon.Pun;
using System.Collections.Generic;
using UnityEngine;

namespace MultiUserCapabilities
{
    using RoomStatus = MultiUserCapabilities.PhotonRoom.RoomStatus;

    public class PhotonUser : MonoBehaviour
    {
        private PhotonView pv;
        private string username;

        [SerializeField]
        [Tooltip("Name text")]
        private TextMesh nameTag = null;

        //[SerializeField]
        //[Tooltip("User Icon")]
        //private GameObject userIcon = null;

        private Color originalUserIconColor = default;

        [SerializeField]
        [Tooltip("Icon Renderer")]
        private Renderer icon_renderer = null;

        private void Start()
        {
            pv = GetComponent<PhotonView>();

            // save original color for later
            // For some reason the original color of other user objects on this client have an initial main albedo Color=0,0,0,0 which is transparent.  However, the original
            // main albedo color is 1,1,1,1 for the user object of this client (which is what we want)
            originalUserIconColor = Color.white; //icon_renderer.material.color;
            username = "User" + PhotonNetwork.NickName;

            // just fire off below RPC once for all clients
            if (!pv.IsMine) return;

            pv.RPC("PunRPC_SetNickName", RpcTarget.AllBuffered, username);
        }

        public void ShareAzureAnchorId()
        {
            if (pv != null)
                pv.RPC("PunRPC_ShareAzureAnchorId", RpcTarget.AllBuffered,
                    GenericNetworkManager.Instance.azureAnchorId);
            else
                Debug.LogError("PV is null");
        }

        [PunRPC]
        private void PunRPC_SetNickName(string nName)
        {
            gameObject.name = nName;
            nameTag.text = nName;
        }

        [PunRPC]
        private void PunRPC_ShareAzureAnchorId(string anchorId)
        {
            GenericNetworkManager.Instance.azureAnchorId = anchorId;

            Debug.Log("\nPhotonUser.PunRPC_ShareAzureAnchorId()");
            Debug.Log("GenericNetworkManager.instance.azureAnchorId: " + GenericNetworkManager.Instance.azureAnchorId);
            Debug.Log("Azure Anchor ID shared by user: " + pv.Controller.UserId);
        }

        [PunRPC]
        private void PunRPC_SetUserIconColor(RoomStatus status)
        {
            switch (status)
            {
                case RoomStatus.JoinedRoom:
                    icon_renderer.material.color = Color.red;
                    break;
                case RoomStatus.JoinedRoomDownloadingAnchor:
                    icon_renderer.material.color = Color.gray;
                    break;
                case RoomStatus.JoinedRoomDownloadedAnchorId:
                    icon_renderer.material.color = Color.clear;
                    break;
                case RoomStatus.JoinedRoomDownloadedAnchor:
                    icon_renderer.material.color = this.originalUserIconColor;
                    break;
                case RoomStatus.CreatedRoomAndPublishedAnchor:
                    icon_renderer.material.color = originalUserIconColor;
                    break;
                default:
                    icon_renderer.material.color = originalUserIconColor;
                    break;
            }
        }
    }
}