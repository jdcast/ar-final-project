using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

/// <summary>
/// Script to handle show/hide of the startup instructions for master client (since they are responsible for setting the spacepin for the rest of the clients)
/// </summary>
public class TargetInstructions : MonoBehaviourPunCallbacks, IMatchmakingCallbacks
{
    //public UnityEvent JoinedRoomEvent;
    private MeshRenderer m_renderer;
    private bool hide_called = false;

    // Start is called before the first frame update
    void Start()
    {
        m_renderer = this.gameObject.GetComponent<MeshRenderer>();
        m_renderer.enabled = false;
    }

    public override void OnEnable()
    {
        base.OnEnable();
        PhotonNetwork.AddCallbackTarget(this);
    }

    public override void OnDisable()
    {
        base.OnDisable();
        PhotonNetwork.RemoveCallbackTarget(this);
    }

    public void Hide()
    {
        m_renderer.enabled = false;
        hide_called = true;
    }

    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        if (PhotonNetwork.IsMasterClient && !hide_called)
        {
            m_renderer.enabled = true;
        }
    }
}
