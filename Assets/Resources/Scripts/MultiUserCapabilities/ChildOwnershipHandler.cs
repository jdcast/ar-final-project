using Microsoft.MixedReality.Toolkit.Input;
using Photon.Pun;
using UnityEngine;

/// <summary>
/// Script to negotiate ownership of networked child GameObjects to the GameObject this script is attached to
/// Derived from: https://mtaulty.com/2019/07/18/simple-shared-holograms-with-photon-networking-part-2/
/// </summary>
namespace MultiUserCapabilities
{
    [RequireComponent(typeof(PhotonView))]
    public class ChildOwnershipHandler : MonoBehaviourPun,
        IMixedRealityFocusHandler
    {
        public void OnFocusEnter(FocusEventData eventData)
        {
            // ask the photonviews of its children for permission to transfer to this client
            foreach (Transform child in transform)
            {
                if (child.tag == "Hold")
                {
                    var photonView = child.GetComponent<PhotonView>();
                    Debug.Log($"Requesting owernship for: {child.name}, {photonView.ViewID}");
                    photonView.RequestOwnership();
                }
            }     
        }

        public void OnFocusExit(FocusEventData eventData)
        {
        }
    }
}