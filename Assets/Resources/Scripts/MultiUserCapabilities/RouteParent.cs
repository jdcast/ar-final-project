using Photon.Pun;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

/// <summary>
/// Initializations for the hold upon instantiation
/// </summary>
namespace MultiUserCapabilities
{
    public class RouteParent : MonoBehaviour, IPunInstantiateMagicCallback
    {
        // global hold parent that parents all holds
        public GameObject globalRouteParent = default;

        [SerializeField] private AudioSource m_AudioSource;

        // audio for manipulation
        [SerializeField] private AudioClip onManipulationStartedAudio;
        [SerializeField] private AudioClip onManipulationEndedAudio;

        /// <summary>
        /// Parent each created hold to the root game object so we can easily track their relative positions with respect to each other across each device running the application
        /// </summary>
        /// <param name="info"></param>
        public void OnPhotonInstantiate(PhotonMessageInfo info)
        {
            globalRouteParent = GameObject.Find("GlobalRouteParent");
            this.transform.SetParent(globalRouteParent.transform, true);

            // track this game object via a list on its parent
            if (this.gameObject.tag == "RouteParent") // ghost holds will also be parented to this object but we only want to track the holds in this list
            {
                this.gameObject.transform.parent.GetComponent<GlobalRouteParent>().childRoutes.Add(this.gameObject);
            }
        }

        /// <summary>
        /// Do cleanup when destroyed.
        /// Currently, remove hold from its parent tracking list.
        /// </summary>
        private void OnDestroy()
        {
            // remove the hold from its parent's tracking list
            List<GameObject> children = globalRouteParent.GetComponent<GlobalRouteParent>().childRoutes;
            foreach (GameObject child in globalRouteParent.GetComponent<GlobalRouteParent>().childRoutes)
            {
                if (GameObject.ReferenceEquals(child, this.gameObject))
                {
                    globalRouteParent.GetComponent<GlobalRouteParent>().childRoutes.Remove(child);
                    break; // there will only be one match
                }
            }

            globalRouteParent.GetComponent<GlobalRouteParent>().childRoutes = children;
        }

        public void PlayOnManipulationStartedAudio()
        {
            m_AudioSource.PlayOneShot(onManipulationStartedAudio);
        }

        public void PlayOnManipulationEndedAudio()
        {
            m_AudioSource.PlayOneShot(onManipulationEndedAudio);
        }
    }
}