using Photon.Pun;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

/// <summary>
/// Initializations for the hold upon instantiation
/// </summary>
namespace MultiUserCapabilities
{
    public class HoldInit : MonoBehaviour, IPunInstantiateMagicCallback
    {
        // global hold parent that parents all holds
        public GameObject globalHoldParent = default;

        /// <summary>
        /// Parent each created hold to the root game object so we can easily track their relative positions with respect to each other across each device running the application
        /// </summary>
        /// <param name="info"></param>
        public void OnPhotonInstantiate(PhotonMessageInfo info)
        {
            globalHoldParent = GameObject.Find("GlobalHoldParent");
            this.transform.SetParent(globalHoldParent.transform, true);

            // track this game object via a list on its parent
            if (this.gameObject.tag == "Hold") // ghost holds will also be parented to this object but we only want to track the holds in this list
            {
                this.gameObject.transform.parent.GetComponent<GlobalHoldParent>().childHolds.Add(this.gameObject);
            }
        }

        /// <summary>
        /// Set custom tags for hold across all clients
        /// </summary>
        /// <param name="customTagsString"></param>
        [PunRPC]
        private void PunRPC_SetCustomTags(string customTagsString)
        {
            // set any custom tags (e.g. necessary for when instantiating hold configs)
            // NOTE: without RPC, the custom tags would only be set for this client
            List<string> customTags = customTagsString.Split(',').ToList(); // PUN2 doesn't support arrays/lists as parameters
            gameObject.GetComponent<CustomTag>().Tags = customTags;
        }

        /// <summary>
        /// Do cleanup when destroyed.
        /// Currently, remove hold from its parent tracking list.
        /// </summary>
        private void OnDestroy()
        {
            // remove the hold from its parent's tracking list
            List<GameObject> children = globalHoldParent.GetComponent<GlobalHoldParent>().childHolds;
            foreach (GameObject child in globalHoldParent.GetComponent<GlobalHoldParent>().childHolds)
            {
                if (GameObject.ReferenceEquals(child, this.gameObject))
                {
                    globalHoldParent.GetComponent<GlobalHoldParent>().childHolds.Remove(child);
                    break; // there will only be one match
                }
            }

            globalHoldParent.GetComponent<GlobalHoldParent>().childHolds = children;
        }
    }
}