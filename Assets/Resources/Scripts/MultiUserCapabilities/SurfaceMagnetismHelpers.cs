using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using Photon.Pun;
using UnityEngine;

/// <summary>
/// Disable other player's ghost holds for this player so that their ghost holds' SurfaceMagnetism components follow their cursors and not this player's cursor
/// </summary>
namespace MultiUserCapabilities
{
    public class SurfaceMagnetismHelpers : MonoBehaviour, IPunInstantiateMagicCallback
    {
        public void OnPhotonInstantiate(PhotonMessageInfo info)
        {
            if (!this.gameObject.GetPhotonView().IsMine)
            {
                this.GetComponent<SurfaceMagnetism>().enabled = false;
            }  
        }
    }
}
