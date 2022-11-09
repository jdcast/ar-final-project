using System;
using Microsoft.MixedReality.Toolkit.Input;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

/// <summary>
/// Script to negotiate ownership of networked GameObject
/// Derived from: https://mtaulty.com/2019/07/18/simple-shared-holograms-with-photon-networking-part-2/
/// </summary>
[RequireComponent(typeof(PhotonView))]
public class OwnershipHandler : MonoBehaviourPun,
    IMixedRealityFocusHandler,
    IOnPhotonViewOwnerChange
{
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

    public void OnFocusEnter(FocusEventData eventData)
    {
        // ask the photonview for permission
        var photonView = this.GetComponent<PhotonView>();
        photonView.RequestOwnership();
    }

    public void OnFocusExit(FocusEventData eventData)
    {
    }

    public void OnOwnerChange(Player newOwner, Player previousOwner)
    {
        Debug.Log($"OnOwnershipChange: ownership successfully transfered from {previousOwner.NickName} to {newOwner.NickName}");
    }
}

