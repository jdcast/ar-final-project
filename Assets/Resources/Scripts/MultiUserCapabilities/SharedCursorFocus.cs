using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using Photon.Pun;
using UnityEngine;

/// <summary>
/// Script to properly show/disable the shared cursor focuses of others and self
/// </summary>
public class SharedCursorFocus : MonoBehaviour, IPunInstantiateMagicCallback
{
    public void OnPhotonInstantiate(PhotonMessageInfo info)
    {
        PhotonView photonView = PhotonView.Get(this);
        if (photonView.IsMine)
        {
            // hide for this user so we don't have two cursors 
            int layer = LayerMask.NameToLayer("Ignore Locally"); 
            this.gameObject.layer = layer;
            this.gameObject.transform.GetChild(0).gameObject.layer = layer; // setting layer only works at top level of object so we must also call it on the child object since it contains the visible mesh
        } else
        {
            // disable the other player's cursors surface magnetism component because it will base its control off of the local player which is not what we want
            this.gameObject.GetComponent<SurfaceMagnetism>().enabled = false;
        }
    }
}
