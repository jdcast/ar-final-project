using Microsoft.MixedReality.Toolkit.Input;
using Photon.Pun;
using Photon.Realtime;
using System.Threading.Tasks;
using UnityEngine;

/// <summary>
/// Script to set OnHoverOver/OnHoverExit highlight colors for a photon networked GameObject
/// </summary>
namespace MultiUserCapabilities
{
    /// <summary>
    /// https://docs.unity3d.com/ScriptReference/MonoBehaviour.OnMouseOver.html
    /// </summary>
    public class OnHoldHover : MonoBehaviour,
         IOnPhotonViewOwnerChange,
        IMixedRealityFocusHandler
    {
        //When the pointer hovers over the GameObject, it turns to this color (red)
        Color my_MouseOverColor = Color.red;
        Color their_MouseOverColor = Color.blue;

        //This stores the GameObject’s original color
        Color m_OriginalColor;

        //Get the GameObject’s mesh renderer to access the GameObject’s material and color
        MeshRenderer m_Renderer;

        //GameObject
        public GameObject m_GameObject;

        // is currently hovering
        private bool isHover = false;

        // Start is called before the first frame update
        void Start()
        {
            //Fetch the mesh renderer component from the GameObject
            m_Renderer = m_GameObject.GetComponent<MeshRenderer>();

            //Fetch the original color of the GameObject
            m_OriginalColor = m_Renderer.material.color;
        }

        /// <summary>
        /// Bind hover events to focus so that when we need to disable the MRTK's NearInteractionGrabble and ObjectManipulator scripts on the game object within 
        /// AzureSpatialAnchors.cs, we don't lose the hover color interaction
        /// </summary>
        /// <param name="eventData"></param>
        public void OnFocusEnter(FocusEventData eventData)
        {
            OnHoverOver();
        }

        /// <summary>
        /// Bind hover events to focus so that when we need to disable the MRTK's NearInteractionGrabble and ObjectManipulator scripts on the game object within 
        /// AzureSpatialAnchors.cs, we don't lose the hover color interaction
        /// </summary>
        /// <param name="eventData"></param>
        public void OnFocusExit(FocusEventData eventData)
        {
            OnHoverExit();
        }

        public void OnHoverOver()
        {
            // Change the color of the GameObject to red when the pointer is over GameObject
            PhotonView photonView = PhotonView.Get(this);
            photonView.RPC("PunRPC_OnHoverOver", RpcTarget.All);
            isHover = true;
        }

        public void OnHoverExit()
        {
            // Reset the color of the GameObject back to normal
            PhotonView photonView = PhotonView.Get(this);
            photonView.RPC("PunRPC_OnHoverExit", RpcTarget.All);
            isHover = false;
        }

        [PunRPC]
        void PunRPC_OnHoverOver()
        {
            PhotonView photonView = PhotonView.Get(this);
            if (photonView.IsMine)
            {
                this.m_Renderer.material.color = my_MouseOverColor;
            } else
            {
                this.m_Renderer.material.color = their_MouseOverColor;
            }
        }

        [PunRPC]
        void PunRPC_OnHoverExit()
        {
            m_Renderer.material.color = m_OriginalColor;
        }

        public async void OnOwnerChange(Player newOwner, Player previousOwner)
        {
            Debug.Log($"OnOwnershipChange: ownership successfully transfered from {previousOwner.NickName} to {newOwner.NickName}");
            if (isHover)
            {
                await Task.Delay(100); // even though ownership change is signaled, there is still a slight delay until photonView.IsMine becomes true (necessary for PunRPC)
                PhotonView photonView = PhotonView.Get(this);
                photonView.RPC("PunRPC_OnHoverOver", RpcTarget.All);
            }
        }

        public void OnEnable()
        {
            var photonView = this.GetComponent<PhotonView>();
            photonView.AddCallbackTarget(this);
        }

        public void OnDisable()
        {
            var photonView = this.GetComponent<PhotonView>();
            photonView.RemoveCallbackTarget(this);
        }
    }
}