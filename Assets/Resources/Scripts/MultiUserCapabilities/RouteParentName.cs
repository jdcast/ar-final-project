using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MultiUserCapabilities
{
    public class RouteParentName : MonoBehaviour
    {
        /// <summary>
        /// RPC for all clients to set the same name for the route parent when it is instantiated from a route menu (important for functions in 
        /// routeManipulator.cs)
        /// </summary>
        /// <param name="name"></param>
        [PunRPC]
        private void PunRPC_SetName(string name)
        {
            gameObject.name = name; // set object name
            gameObject.transform.Find("FrameVisual/OriginText").gameObject.GetComponent<TextMesh>().text = name; // set display name
        }
    }
}