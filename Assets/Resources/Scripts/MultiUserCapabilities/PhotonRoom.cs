using ExitGames.Client.Photon;
using Photon.Pun;
using Photon.Realtime;
using TMPro;
using UnityEngine;
using System.Threading.Tasks;
using Scripts.WorldLocking;
using Microsoft.MixedReality.WorldLocking.ASA;
using UnityEngine.Events;
using Scripts;

namespace MultiUserCapabilities
{
    using CloudAnchorId = System.String;
    
    public class PhotonRoom : MonoBehaviourPunCallbacks, IInRoomCallbacks
    {
        public static PhotonRoom Room;

        [SerializeField] private GameObject photonUserPrefab = default; 
        [SerializeField] private GameObject sharedCursorFocus = default;
        [SerializeField] private GameObject longTapSpherePrefab = default;
        [SerializeField] private GameObject numPlayersDisplay = default;
        [SerializeField] private GameObject publisherStatusDisplay = default;
        [SerializeField] private GameObject roomStatusDisplay = default;
        [SerializeField] private UnityEvent JoinedRoomEvent;
        [SerializeField] private Scripts.WorldLocking.SpacePinBinder spacePinBinder = default;
        //[SerializeField] private GameObject TCPClient = default;

        /// <summary>
        /// Progress indicator object for publisher status
        /// Tells us when we can publish/download spacepin
        /// </summary>
        [SerializeField] private GameObject indicatorObject;

        private IBinder binder;

        private Player[] photonPlayers;
        private int playersInRoom;
        private int myNumberInRoom;
        private ActionPublish actionPublish;
        private CloudAnchorId cloudAnchorId = null;
        GameObject player = null;
        PhotonView playerPV = null;

        public enum RoomStatus
        {
            None,
            CreatedRoom,
            CreatedRoomAndPublishingAnchor,
            CreatedRoomAndPublishedAnchor,
            JoinedRoom,
            JoinedRoomDownloadedAnchor,
            JoinedRoomDownloadedAnchorId,
            JoinedRoomDownloadingAnchor
        }

        public int emptyRoomTimeToLiveSeconds = 120;

        RoomStatus roomStatus = RoomStatus.None;

        public static readonly string CLOUD_ANCHOR_ID_CUSTOM_PROPERTY = "cloudAnchorId";
        //static readonly string ROOM_NAME = "HardCodedRoomName";

        public override void OnPlayerEnteredRoom(Player newPlayer)
        {
            base.OnPlayerEnteredRoom(newPlayer);
            photonPlayers = PhotonNetwork.PlayerList;
            playersInRoom++;
            numPlayersDisplay.GetComponent<TextMeshPro>().text = $"# Players in room: {playersInRoom}";
            Debug.Log($"Player, {newPlayer.NickName}, entered room");
        }

        public override void OnPlayerLeftRoom(Player otherPlayer)
        {
            base.OnPlayerLeftRoom(otherPlayer);
            photonPlayers = PhotonNetwork.PlayerList;
            playersInRoom--;
            numPlayersDisplay.GetComponent<TextMeshPro>().text = $"# Players in room: {playersInRoom}";
            Debug.Log($"Player, {otherPlayer.NickName}, left room");
        }

        private void Awake()
        {
            if (Room == null)
            {
                Room = this;
            }
            else
            {
                if (Room != this)
                {
                    Destroy(Room.gameObject);
                    Room = this;
                }
            }
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

        private async void Start()
        {
            indicatorObject.SetActive(true);

            // Allow prefabs not in a Resources folder
            if (PhotonNetwork.PrefabPool is DefaultPool pool)
            {
                if (photonUserPrefab != null) pool.ResourceCache.Add(photonUserPrefab.name, photonUserPrefab);

                if (longTapSpherePrefab != null) pool.ResourceCache.Add(longTapSpherePrefab.name, longTapSpherePrefab);
            }

            binder = spacePinBinder;
            actionPublish = GetComponent<ActionPublish>();
            await Task.Delay(5000); // wait for user to stare at wall TODO: replace with count-down
        }

        private async void Update()
        {
            var status = new ReadinessStatus();
            if (binder != null)
            {
                status = binder.PublisherStatus;
            }
            publisherStatusDisplay.GetComponent<TextMeshPro>().text = $"Publisher Status: {status.readiness}";

            if (status.readiness == PublisherReadiness.Ready)
            {
                if (roomStatus == RoomStatus.CreatedRoom)
                {
                    // we don't want the Update() to call the following DoPublish() method multiple times in case there is a delay in DoPublish()
                    roomStatus = RoomStatus.CreatedRoomAndPublishingAnchor;
                    roomStatusDisplay.GetComponent<TextMeshPro>().text = $"Room Status: {roomStatus}";

                    // publish spacepin to share common origin
                    actionPublish.DoPublish();
                    roomStatus = RoomStatus.CreatedRoomAndPublishedAnchor;
                    roomStatusDisplay.GetComponent<TextMeshPro>().text = $"Room Status: {roomStatus}";
                    playerPV.RPC("PunRPC_SetUserIconColor", RpcTarget.All, roomStatus);
                    JoinedRoomEvent?.Invoke();
                    indicatorObject.SetActive(false);
                } else if (roomStatus == RoomStatus.JoinedRoomDownloadedAnchorId)
                {
                    // cloudAnchorId will be set in room properties on changed callback
                    if (cloudAnchorId != null)
                    {
                        // change status so we don't keep firing calls to download the anchor during the Delay() below
                        roomStatus = RoomStatus.JoinedRoomDownloadingAnchor;
                        roomStatusDisplay.GetComponent<TextMeshPro>().text = $"Room Status: {roomStatus}";
                        playerPV.RPC("PunRPC_SetUserIconColor", RpcTarget.All, roomStatus);

                        // arbitrary delay that is supposed to be long enough for anchorLocateCriteria within publisher to become setup (its setup is called in
                        // SpacePinBinder's Awake())
                        // Ideally this dealy would be replaced by better readiness checks within the publisher itself but I ran into issues trying to copy/modify the PublisherASA file
                        // due to having been compiled in assembly that defines scripting symbols used throughout the PublisherASA code within directives 
                        await Task.Delay(10000);
                        actionPublish.DoDownloadOne(cloudAnchorId);
                        roomStatus = RoomStatus.JoinedRoomDownloadedAnchor;
                        roomStatusDisplay.GetComponent<TextMeshPro>().text = $"Room Status: {roomStatus}";
                        playerPV.RPC("PunRPC_SetUserIconColor", RpcTarget.All, roomStatus);
                        indicatorObject.SetActive(false);
                    }
                }
            }
        }

        public override void OnJoinedRoom()
        {
            base.OnJoinedRoom();

            photonPlayers = PhotonNetwork.PlayerList;
            playersInRoom = photonPlayers.Length;
            myNumberInRoom = playersInRoom;
            PhotonNetwork.NickName = myNumberInRoom.ToString();

            StartGame();

            numPlayersDisplay.GetComponent<TextMeshPro>().text = $"# Players in room: {playersInRoom}";

            // Note that the creator of the room also joins the room...
            if (this.roomStatus == RoomStatus.None)
            {
                this.roomStatus = RoomStatus.JoinedRoom;
                this.roomStatusDisplay.GetComponent<TextMeshPro>().text = $"Room Status: {this.roomStatus}";
                playerPV.RPC("PunRPC_SetUserIconColor", RpcTarget.All, this.roomStatus);

                // check to see if cloudAnchorId is present i.e. we joined after the room creator created the cloundAnchorId and triggered OnRoomPropertiesUpdate
                object keyValue = null;

#if UNITY_2020
                if (PhotonNetwork.CurrentRoom.CustomProperties.TryGetValue(
                    CLOUD_ANCHOR_ID_CUSTOM_PROPERTY, out keyValue))
                {
                    // If the anchorId property is present then we will try and get the
                    // anchor but only once so change the status.
                    this.cloudAnchorId = (CloudAnchorId)keyValue;
                    this.roomStatus = RoomStatus.JoinedRoomDownloadedAnchorId;
                    this.roomStatusDisplay.GetComponent<TextMeshPro>().text = $"Room Status: {this.roomStatus}";
                    this.playerPV.RPC("PunRPC_SetUserIconColor", RpcTarget.All, this.roomStatus);

                    Debug.Log($"OnRoomPropertiesUpdate -> {keyValue}");
                } else 
                {
                    Debug.Log("OnJoinedRoom: AnchorId not present in room properties");
                }
#endif
            }
        }

        private void StartGame()
        {
            CreatePlayer();
            CreateSharedCursorFocus();

            if (!PhotonNetwork.IsMasterClient) return;
        }

        private void CreatePlayer()
        {
            player = PhotonNetwork.Instantiate(photonUserPrefab.name, Vector3.zero, Quaternion.identity);
            playerPV = player.GetPhotonView();
        }

        private void CreateSharedCursorFocus()
        {
            var cursor = PhotonNetwork.Instantiate(sharedCursorFocus.name, Vector3.zero, Quaternion.Euler(0f, 180f, 0f)); // instantiate for all to see
        }

        void IInRoomCallbacks.OnMasterClientSwitched(Player newMasterClient)
        {
            // connect to the TCP server if the old master client left and this is the new master client
            if (PhotonNetwork.IsMasterClient)
            {
                //TCPClient.GetComponent<TCPClient>().Connect();
            }
        }
        public override void OnCreatedRoom()
        {
            base.OnCreatedRoom();
            this.roomStatus = RoomStatus.CreatedRoom;
            this.roomStatusDisplay.GetComponent<TextMeshPro>().text = $"Room Status: {this.roomStatus}";

            // connect to TCP server for later save/recall of data e.g. hold configurations
            //TCPClient.GetComponent<TCPClient>().Connect();
        }

        public override void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
        {
            base.OnRoomPropertiesUpdate(propertiesThatChanged);
            
            // room creator can skip this
            if (this.roomStatus == RoomStatus.JoinedRoom)
            {
                object keyValue = null;

#if UNITY_2020
                if (propertiesThatChanged.TryGetValue(
                    CLOUD_ANCHOR_ID_CUSTOM_PROPERTY, out keyValue))
                {
                    // If the anchorId property is present then we will try and get the
                    // anchor but only once so change the status.
                    this.cloudAnchorId = (CloudAnchorId)keyValue;
                    this.roomStatus = RoomStatus.JoinedRoomDownloadedAnchorId;
                    this.roomStatusDisplay.GetComponent<TextMeshPro>().text = $"Room Status: {this.roomStatus}";
                    this.playerPV.RPC("PunRPC_SetUserIconColor", RpcTarget.All, this.roomStatus);

                    Debug.Log($"PhotonRoom:OnRoomPropertiesUpdate -> {keyValue}");
                } else 
                {
                    Debug.Log("PhotonRoom:OnRoomPropertiesUpdate: AnchorId not present in room properties");
                }
#endif
            }
        }
    }
}