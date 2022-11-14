using Microsoft.MixedReality.Toolkit.Input;
using Photon.Pun;
using Photon.Realtime;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

namespace MultiUserCapabilities
{
    public class OnRouteParentHover : MonoBehaviour,
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
            //Fetch the mesh renderer component from the GameObject's axis child object
            m_Renderer = m_GameObject.transform.Find("FrameVisual/Axis_LowPoly").GetComponent<MeshRenderer>();

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

        public async void OnHoverOver()
        {
            // Change the color of the GameObject to red when the pointer is over GameObject
            PhotonView photonView = PhotonView.Get(this);
            photonView.RPC("PunRPC_OnHoverOver", RpcTarget.All);

            // find all holds in the route of interest and request ownership of them in a batch
            //List<GameObject> holds = new List<GameObject>();
            foreach (Transform child in gameObject.transform)
            {
                if (child.tag == "Hold")
                {
                    //holds.Add(child.gameObject);
                    PhotonView cPV = child.gameObject.GetPhotonView();

                    // request ownership so that PunRPC_OnHoverOver has the correct color
                    cPV.RequestOwnership();
                }
            }

            // ownership request has a delay
            await Task.Delay(100);

            // tell all holds in the route of interest to change color in a batch RPC call
            foreach (Transform child in gameObject.transform)
            {
                if (child.tag == "Hold")
                {
                    PhotonView cPV = child.gameObject.GetPhotonView();
                    cPV.RPC("PunRPC_OnHoverOver", RpcTarget.All);
                }
            }

            isHover = true;
        }

        public async void OnHoverExit()
        {
            // Reset the color of the GameObject back to normal
            PhotonView photonView = PhotonView.Get(this);
            photonView.RPC("PunRPC_OnHoverExit", RpcTarget.All);

            // find all holds in the route of interest and request ownership of them in a batch
            //List<GameObject> holds = new List<GameObject>();
            foreach (Transform child in gameObject.transform)
            {
                if (child.tag == "Hold")
                {
                    //holds.Add(child.gameObject);
                    PhotonView cPV = child.gameObject.GetPhotonView();

                    // request ownership so that PunRPC_OnHoverOver has the correct color
                    cPV.RequestOwnership();
                }
            }

            // ownership request has a delay
            await Task.Delay(100);

            // tell all holds in the route of interest to change color in a batch RPC call
            foreach (Transform child in gameObject.transform)
            {
                if (child.tag == "Hold")
                {
                    PhotonView cPV = child.gameObject.GetPhotonView();
                    cPV.RPC("PunRPC_OnHoverExit", RpcTarget.All);
                }
            }

            isHover = false;
        }

        public async void OnOwnerChange(Player newOwner, Player previousOwner)
        {
            Debug.Log($"OnOwnershipChange: ownership successfully transfered from {previousOwner.NickName} to {newOwner.NickName}");
            if (isHover)
            {
                await Task.Delay(500); // even though ownership change is signaled, there is still a slight delay until photonView.IsMine becomes true (necessary for PunRPC)
                PhotonView photonView = PhotonView.Get(this);
                photonView.RPC("PunRPC_OnHoverOver", RpcTarget.All);

                // find all holds in the route of interest and request ownership of them in a batch
                //List<GameObject> holds = new List<GameObject>();
                foreach (Transform child in gameObject.transform)
                {
                    if (child.tag == "Hold")
                    {
                        //holds.Add(child.gameObject);
                        PhotonView cPV = child.gameObject.GetPhotonView();

                        // request ownership so that PunRPC_OnHoverOver has the correct color
                        cPV.RequestOwnership();
                    }
                }

                // ownership request has a delay
                await Task.Delay(100);

                // tell all holds in the route of interest to change color in a batch RPC call
                foreach (Transform child in gameObject.transform)
                {
                    if (child.tag == "Hold")
                    {
                        PhotonView cPV = child.gameObject.GetPhotonView();
                        cPV.RPC("PunRPC_OnHoverOver", RpcTarget.All);
                    }
                }
            }
        }

        /// <summary>
        /// NOTE: not the same function as the one of the same name defined in OnHoldHover.cs.  The function is required to be attached to the current
        /// gameObject that it is called one which is why we must also define it here.  
        /// TODO: consolidate this function with the one in OnHoldHover.cs
        /// </summary>
        [PunRPC]
        void PunRPC_OnHoverOver()
        {
            PhotonView photonView = PhotonView.Get(this);
            if (photonView.IsMine)
            {
                this.m_Renderer.material.color = my_MouseOverColor;
            }
            else
            {
                this.m_Renderer.material.color = their_MouseOverColor;
            }
        }

        /// <summary>
        /// NOTE: not the same function as the one of the same name defined in OnHoldHover.cs.  The function is required to be attached to the current
        /// gameObject that it is called one which is why we must also define it here.  
        /// TODO: consolidate this function with the one in OnHoldHover.cs
        /// </summary>
        [PunRPC]
        void PunRPC_OnHoverExit()
        {
            m_Renderer.material.color = m_OriginalColor;
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