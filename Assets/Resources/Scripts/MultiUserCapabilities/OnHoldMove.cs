using Photon.Pun;
using UnityEngine;

namespace MultiUserCapabilities
{
    /// <summary>
    /// Script to handle showing/hiding game object when its undergoing movement with SurfaceMagnetism
    /// We hide the game object because we temporally show a ghost version of the game object while its in transit
    /// </summary>
    public class OnHoldMove : MonoBehaviour
    {
        //Get the GameObject’s mesh renderer to access the GameObject’s material and color
        MeshRenderer m_Renderer;

        //GameObject
        public GameObject m_GameObject;

        // Start is called before the first frame update
        void Start()
        {
            //Fetch the mesh renderer component from the GameObject
            m_Renderer = m_GameObject.GetComponent<MeshRenderer>();
        }

        public void OnMoveBegin()
        {
            // Hide game object while we move it
            PhotonView photonView = PhotonView.Get(this);
            photonView.RPC("PunRPC_OnMoveBegin", RpcTarget.All);
        }

        public void OnMoveEnd()
        {
            // Show game object after we are done moving it
            PhotonView photonView = PhotonView.Get(this);
            photonView.RPC("PunRPC_OnMoveEnd", RpcTarget.All);
        }

        [PunRPC]
        void PunRPC_OnMoveBegin()
        {
            this.m_Renderer.enabled = false;

            // move to this layer so that raycast hits spatial mesh when determining its final position
            this.gameObject.layer = LayerMask.NameToLayer("Ignore Raycast"); 
        }

        [PunRPC]
        void PunRPC_OnMoveEnd()
        {
            this.m_Renderer.enabled = true;
            this.gameObject.layer = LayerMask.NameToLayer("Hold");
        }
    }
}