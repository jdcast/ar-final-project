using Microsoft.Azure.SpatialAnchors;
using Microsoft.Azure.SpatialAnchors.Unity;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.XR;
using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using TMPro;
using Photon.Pun;
using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using MultiUserCapabilities;

namespace Scripts
{
    public class HoldManipulator : MonoBehaviourPunCallbacks
    {
        /// <summary>
        /// Used to distinguish short taps and long taps
        /// </summary>
        private float[] _tappingTimer = { 0, 0 };

        /// <summary>
        /// Editing modes
        /// </summary>
        public enum EditingMode
        {
            Place,
            Delete,
            //PlaceRoute
            Off
        }

        /// <summary>
        /// Used to track hold editing mode
        /// </summary>
        public EditingMode editingMode;

        /// <summary>
        /// hold prefab chosen in scroll hold menu
        /// </summary>
        private string menuHold;

        /// <summary>
        /// sphere prefab for long tap user feedback
        /// </summary>
        public GameObject longTapSphere;

        /// <summary>
        /// Progress indicator object
        /// </summary>
        [SerializeField]
        private GameObject indicatorObject;

        /// <summary>
        /// Signals when user has finished placing object and surface magnetism should turn off for that object
        /// NOTE: doesn't work
        /// </summary>
        //private UnityEvent stoppedPlacement;

        /// <summary>
        /// GameObject to represent currently chosen hold during movement of that hold
        /// </summary>
        private GameObject ghost = default;

        TaskCompletionSource<CloudSpatialAnchor> taskWaitForAnchorLocation;

        // we have to apply audio sources for create/delete/moveStart/moveEnd events here because we will be disabling/enabling manipulation components depending on the
        // mode we are in
        // manipulation audio (i.e. rotation) is supplied by the manipulation component since it only applies in the mode when the manipulation component is enabled
        [SerializeField]
        private AudioSource audioData;

        [SerializeField]
        private AudioClip createAudio;

        [SerializeField]
        private AudioClip deleteOneAudio;

        [SerializeField]
        private AudioClip deleteAllAudio;

        [SerializeField]
        private AudioClip moveStartAudio;

        [SerializeField]
        private AudioClip moveEndAudio;

        [SerializeField]
        private GameObject toggleEditorMode = default;

        // parent to all holds except for those under specific routes
        [SerializeField]
        private GameObject globalHoldParent = default;

        [SerializeField]
        private GameObject commonOriginPin = default;

        [SerializeField]
        public RouteManipulator routeManipulator = default;

        // search radius for route parents
        [SerializeField] private float holdSearchRadius = 0.0f;

        // <Start>
        // Start is called before the first frame update
        void Start()
        {
            editingMode = EditingMode.Place;
            toggleEditorMode.GetComponentInChildren<TextMeshPro>().text = "Mode: Place";
            indicatorObject.SetActive(false);
            menuHold = "Hold_1_Simple";
        }
        // </Start>

        // <Update>
        // Update is called once per frame
        void Update()
        {
            if (editingMode != EditingMode.Off)
            {
                //Check for any air taps from either hand
                for (int i = 0; i < 2; i++)
                {
                    InputDevice device = InputDevices.GetDeviceAtXRNode((i == 0) ? XRNode.RightHand : XRNode.LeftHand);
                    if (device.TryGetFeatureValue(CommonUsages.primaryButton, out bool isTapping))
                    {
                        if (!isTapping)
                        {
                            //Stopped Tapping or wasn't tapping
                            if (0f < _tappingTimer[i] && _tappingTimer[i] < 1f)
                            {
                                //User has been tapping for less than 1 sec. Get hand-ray's end position and call ShortTap
                                foreach (var source in CoreServices.InputSystem.DetectedInputSources)
                                {
                                    // Ignore anything that is not a hand because we want articulated hands
                                    if (source.SourceType == Microsoft.MixedReality.Toolkit.Input.InputSourceType.Hand)
                                    {
                                        foreach (var p in source.Pointers)
                                        {
                                            if (p is IMixedRealityNearPointer && editingMode != EditingMode.Delete) // we want to be able to use direct touch to delete game objects
                                            {
                                                // Ignore near pointers, we only want the rays
                                                //Debug.Log("Near Pointer");
                                                continue;
                                            }
                                            if (p.Result != null)
                                            {
                                                var startPoint = p.Position;
                                                var endPoint = p.Result.Details.Point;
                                                var hitObject = p.Result.Details.Object;

                                                //Debug.Log($"{isRouteParentTTPOn}");
                                                //Debug.Log($"{hitObject.gameObject.tag}");

                                                // we need the surface normal of the spatial mesh we want to place the hold on
                                                // we allow hits on route parents so that we can do nothing when selecting them in short taps
                                                LayerMask mask = LayerMask.GetMask("Spatial Awareness", "RouteParent", "Hold");
                                                if (Physics.Raycast(startPoint, endPoint - startPoint, out var hit, Mathf.Infinity, mask)) // check if successful before calling ShortTap
                                                {
                                                    //Debug.Log($"Hit layer: {hit.collider.gameObject.layer}");
                                                    //Debug.Log($"{hit.collider.gameObject.tag}");
                                                    PhotonView photonView = PhotonView.Get(this);

                                                    // we need to recognize when we hit a route parent so that we can ignore the processing of short tap
                                                    // since ShortTap will otherwise find the nearest hold and mistakenly process it
                                                    // this is especially important if the search radius is nonzero
                                                    if (hit.collider.gameObject.tag != "RouteParent")
                                                    {
                                                        // avoid having to search later if we already know we collided with a route parent game object
                                                        // also necessary in case search radius is set to zero due to unlikelihood of registering hit precisely at object's origin
                                                        GameObject hitGO = null;
                                                        string tag = hit.collider.gameObject.tag;
                                                        if (tag == "Hold")
                                                        {
                                                            hitGO = hit.collider.gameObject;
                                                        }

                                                        ShortTap(hit.point, hit.normal, photonView, hitGO);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            _tappingTimer[i] = 0;
                        }
                        else
                        {
                            _tappingTimer[i] += Time.deltaTime;
                            if (_tappingTimer[i] >= 2f)
                            {
                                if (editingMode == EditingMode.Delete)
                                {
                                    //User has been air tapping for at least 2sec. Get hand position and call LongTap
                                    if (device.TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 handPosition))
                                    {
                                        // feedback for user on long airtap by briefly displaying a dot at the cursor
                                        foreach (var source in CoreServices.InputSystem.DetectedInputSources)
                                        {
                                            // Ignore anything that is not a hand because we want articulated hands
                                            if (source.SourceType == Microsoft.MixedReality.Toolkit.Input.InputSourceType.Hand)
                                            {
                                                foreach (var p in source.Pointers)
                                                {
                                                    if (p is IMixedRealityNearPointer)
                                                    {
                                                        // Ignore near pointers, we only want the rays
                                                        continue;
                                                    }
                                                    if (p.Result != null)
                                                    {
                                                        var startPoint = p.Position;
                                                        var endPoint = p.Result.Details.Point;
                                                        var hitObject = p.Result.Details.Object;

                                                        //Quaternion orientationTowardsHead = Quaternion.LookRotation(handPosition - headPosition, Vector3.up);
                                                        GameObject gameObject = PhotonNetwork.Instantiate(longTapSphere.name, endPoint, Quaternion.identity);
                                                        gameObject.transform.localScale = Vector3.one * 0.05f;

                                                        StartCoroutine(DestroyObjectDelayed(gameObject, .2f));
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    LongTap();
                                }
                                _tappingTimer[i] = -float.MaxValue; // reset the timer, to avoid retriggering if user is still holding tap
                            }
                        }
                    }
                }
            }
        }
        // </Update>

        // <ShortTap>
        /// <summary>
        /// Called when a user is air tapping for a short time.
        /// We pass the PhotonView in since this is an async function and loses context
        /// </summary>
        /// <param name="handPosition">Location where tap was registered</param>
        private async void ShortTap(Vector3 handPosition, Vector3 surfaceNormal, PhotonView photonView, GameObject hitGO)
        {
            // if we are passed in a valid route parent game object then we don't have to search
            bool holdNearby = false;
            GameObject hold = null;
            if (hitGO != null)
            {
                holdNearby = true;
                hold = hitGO;
            }
            else // do search if we aren't passed a valid route parent game object
            {
                holdNearby = IsAnchorNearby(handPosition, out hold);
            }

            if (!hold && editingMode == EditingMode.Place)
            {
                audioData.PlayOneShot(createAudio);

                // No Anchor Nearby, start session and create an anchor
                await CreateAnchor(menuHold, handPosition, surfaceNormal, photonView);
            }
            else if (hold && editingMode == EditingMode.Place)
            {
                // toggle surface magnetism component so we can start or end moving the object
                bool isTappingToPlace = hold.GetComponent<HoldData>().isTappingToPlace;
                hold.GetComponent<HoldData>().isTappingToPlace = !hold.GetComponent<HoldData>().isTappingToPlace;
                SurfaceMagnetism sm = hold.EnsureComponent<SurfaceMagnetism>();

                if (isTappingToPlace)
                {
                    audioData.PlayOneShot(moveEndAudio);

                    sm.enabled = false;

                    // make visible and remove ghost hold
                    PhotonNetwork.Destroy(ghost);
                    hold.GetComponent<OnHoldMove>().OnMoveEnd();
                    await HoldOnPlacingStopped(hold, surfaceNormal, photonView);
                }
                else
                {
                    audioData.PlayOneShot(moveStartAudio);

                    sm.enabled = true;

                    // make invisible and show ghost hold instead
                    hold.GetComponent<OnHoldMove>().OnMoveBegin();
                    string holdType = hold.name.Replace("(Clone)", string.Empty);

                    // in case we are manipulating the flipped version -> only have one ghost so we just want the original name
                    holdType = holdType.Replace("_Flipped", string.Empty);
                    ghost = PhotonNetwork.Instantiate(holdType + "_Ghost", handPosition, Quaternion.identity);
                }
            }
            else if (holdNearby && editingMode == EditingMode.Delete)
            {
                audioData.PlayOneShot(deleteOneAudio);

                // Delete nearby Anchor
                await DeleteGameObject(hold);
            }
        }
        // </ShortTap>

        // <LongTap>
        /// <summary>
        /// Called when a user is air tapping for a long time (>=2 sec)
        /// </summary>
        private async void LongTap()
        {
            if (editingMode == EditingMode.Delete)
            {
                audioData.PlayOneShot(deleteAllAudio);
                PhotonView pv = this.gameObject.GetPhotonView();
                pv.RPC("PunRPC_RemoveAllAnchorGameObjects", RpcTarget.All);
            }
        }
        // </LongTap>

        // <RemoveAllAnchorGameObjects>
        /// <summary>
        /// Destroys all Anchor GameObjects.
        /// </summary>
        [PunRPC]
        private async void PunRPC_RemoveAllAnchorGameObjects()
        {
            indicatorObject.gameObject.SetActive(true);

            // only need to call destroy from one client due synchronization provided by Photon so we decide to call it on the master
            if (PhotonNetwork.IsMasterClient)
            {
                List<GameObject> children = globalHoldParent.GetComponent<GlobalHoldParent>().childHolds;
          
                foreach (var anchorGameObject in children)//_foundOrCreatedAnchorGameObjects)
                {
                    PhotonView pv = anchorGameObject.GetComponent<PhotonView>();
                    pv.RequestOwnership(); // we need ownership of the object to destroy it
                }

                // the RequestOwnership calls above are asynchronous and need time to complete before we call Destroy() below
                await Task.Delay(1000);

                foreach (var anchorGameObject in children)//_foundOrCreatedAnchorGameObjects)
                {
                    PhotonView pv = anchorGameObject.GetComponent<PhotonView>();
                    PhotonNetwork.Destroy(anchorGameObject);
                }
            }
            
            // clear tracking list on parent
            globalHoldParent.GetComponent<GlobalHoldParent>().childHolds.Clear();

            indicatorObject.gameObject.SetActive(false);
        }
        // </RemoveAllAnchorGameObjects>

        // <IsAnchorNearby>
        /// <summary>
        /// Returns true if an Anchor GameObject is within 15cm of the received reference position
        /// </summary>
        /// <param name="position">Reference position</param>
        /// <param name="anchorGameObject">Hold GameObject within search radius of received position. Not necessarily the nearest to this position. If no AnchorObject is within 15cm, this value will be null</param>
        /// <returns>True if a Hold GameObject is within search radius</returns>
        private bool IsAnchorNearby(Vector3 position, out GameObject anchorGameObject)
        {
            anchorGameObject = null;

            List<GameObject> children = globalHoldParent.GetComponent<GlobalHoldParent>().childHolds;
            //Debug.Log($"IsAnchorNearby -> number of objects in scene: {children.Count}");

            if (children.Count <= 0)
            {
                return false;
            }

            //Iterate over existing anchor gameobjects to find the nearest
            var (distance, closestObject) = children.Aggregate(
                new Tuple<float, GameObject>(Mathf.Infinity, null),
                (minPair, gameobject) =>
                {
                    Vector3 gameObjectPosition = gameobject.transform.position;
                    float distance = (position - gameObjectPosition).magnitude;
                    return distance < minPair.Item1 ? new Tuple<float, GameObject>(distance, gameobject) : minPair;
                });

            if (distance <= holdSearchRadius)
            {
                //Found an anchor within search radius
                anchorGameObject = closestObject;
                return true;
            }
            else
            {
                return false;
            }
        }
        // </IsAnchorNearby>

        //// <HoldOnPlacingStarted>
        ///// <summary>
        ///// Called on start of movement of object
        ///// </summary>
        ///// <param name="go"></param>
        //private void HoldOnPlacingStarted(GameObject go)
        //{
        //    Debug.Log("HoldOnPlacingStarted");
        //}
        //// </HoldOnPlacingStarted>

        // <HoldOnPlacingStopped>
        /// <summary>
        /// Handles object saving once user has finished moving an object.
        /// Called for surface magnetism movement
        /// </summary>
        /// <param name="go"></param>
        /// <returns></returns>
        private async Task HoldOnPlacingStopped(GameObject go, Vector3 surfaceNormal, PhotonView photonView)
        {
            Vector3 position = go.transform.position;
            string holdType = go.name.Replace("(Clone)", string.Empty);
            // in case we are manipulating the flipped version -> only have one ghost so we just want the original name
            holdType = holdType.Replace("_Flipped", string.Empty);

            // the game object may have been moved to a new surface necessitating a change of its local coordinate frame (i.e. its z-axis now has a negative dot-product with the
            // Frozen coordinate frame meaning that on manipulation, its rotation will be counter to whats expected)
            // So we destroy it and recreate it (since the logic for checking this dot-product will be contained within CreateAnchor anyway)
            await DeleteGameObject(go);
            await CreateAnchor(holdType, position, surfaceNormal, photonView);
        }
        // </HoldOnPlacingStopped>

        //// <HoldOnHoverStartedHandler>
        ///// <summary>
        ///// OnHoverStarted handler for hold GameObject.
        ///// Changes the color.
        ///// </summary>
        ///// <param name="eventdata"></param>
        ///// <param name="hold"></param>
        //private void HoldOnHoverStartedHandler(ManipulationEventData eventdata, GameObject hold)
        //{
        //    MeshRenderer m_Renderer = hold.GetComponent<MeshRenderer>();
        //    m_Renderer.material.color = Color.red;
        //}
        //// </HoldOnHoverStartedHandler>

        //// <HoldOnHoverExitedHandler>
        ///// <summary>
        ///// OnHoverExited handler for hold GameObjects.
        ///// Changes the color.
        ///// </summary>
        ///// <param name="eventdata"></param>
        ///// <param name="hold"></param>
        //private void HoldOnHoverExitedHandler(ManipulationEventData eventdata, GameObject hold)
        //{
        //    MeshRenderer m_Renderer = hold.GetComponent<MeshRenderer>();
        //    m_Renderer.material.color = Color.green;
        //}
        //// </HoldOnHoverExitedHandler>

        //// <HoldOnManipulationStartedHandler>
        ///// <summary>
        ///// Handles saving object once user has finished rotating an object
        ///// Called by manipulation script event for rotation
        ///// </summary>
        ///// <param name="eventData"></param>
        ///// <param name="hold"></param>
        //private void HoldOnManipulationStartedHandler(ManipulationEventData eventData, GameObject hold)
        //{
        //    Debug.Log($"HoldOnManipulationStarted");

        //    // detect if object is receiving a short tap
        //    eventData.ManipulationSource.GetComponent<HoldData>().manipulationStartTime = DateTime.Now;

        //    // the cursor doesn't always stay aligned with object's mesh when moving it with TapToPlace
        //    MeshRenderer m_Renderer = hold.GetComponent<MeshRenderer>();
        //    m_Renderer.material.color = Color.red;

        //    //// detect if object is receiving a short tap
        //    //bool receivingTap = false;
        //    //for (int i = 0; i < 2; i++)
        //    //{
        //    //    InputDevice device = InputDevices.GetDeviceAtXRNode((i == 0) ? XRNode.RightHand : XRNode.LeftHand);
        //    //    device.TryGetFeatureValue(CommonUsages.primaryButton, out bool handIsTapping);
        //    //    receivingTap = receivingTap || handIsTapping;
        //    //    Debug.Log(handIsTapping);
        //    //}
        //    //eventData.ManipulationSource.GetComponent<HoldData>().receivingShortTap = receivingTap;
        //}
        //// </HoldOnManipulationStartedHandler>

        //// <HoldOnManipulationEndedHandler>
        ///// <summary>
        ///// OnManipulationEndedHandler for GameObject.
        ///// Saves final position.
        ///// We don't want this called for short taps as those are reserved for movement corresponding to surface magnetism.
        ///// </summary>
        ///// <param name="eventData"></param>
        ///// <param name="currentAnchorGameObject"></param>
        //private async void HoldOnManipulationEndedHandler(ManipulationEventData eventData, GameObject currentAnchorGameObject)
        //{
        //    Debug.Log($"HoldOnManipulationEnded");

        //    DateTime currentTime = DateTime.Now;
        //    TimeSpan interval = currentTime - eventData.ManipulationSource.GetComponent<HoldData>().manipulationStartTime;
        //    Debug.Log(interval.TotalMilliseconds);

        //    // ignore short taps (shorter than 1 second) from either hand
        //    if (interval.TotalMilliseconds >= 1000)
        //    //if (!eventData.ManipulationSource.GetComponent<HoldData>().receivingShortTap)
        //    {
        //        Debug.Log("Detected long tap as manipulation event");

        //        Vector3 position = eventData.ManipulationSource.transform.position;
        //        Quaternion rotation = eventData.ManipulationSource.transform.rotation;
        //        Vector3 localScale = eventData.ManipulationSource.transform.localScale;

        //        DeleteGameObject(eventData.ManipulationSource);

        //        await BuildAnchor(hold, position, rotation, localScale);
        //    }
        //}
        //// </HoldOnManipulationEndedHandler>

        // <CreateAnchor>
        /// <summary>
        /// Creates an Azure Spatial Anchor at the given position rotated towards the user
        /// </summary>
        /// <param name="position">Position where Azure Spatial Anchor will be created</param>
        /// <returns>Async Task</returns>
        private Task CreateAnchor(string holdType,  Vector3 position, Vector3 surfaceNormal, PhotonView photonView)
        {
            //Debug.Log($"CreateAnchor");

            //Create Anchor GameObject. We will use ASA to save the position and the rotation of this GameObject.
            //if (!InputDevices.GetDeviceAtXRNode(XRNode.Head).TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 headPosition))
            //{
            //    headPosition = Vector3.zero;
            //}

            Quaternion normalOrientation = Quaternion.LookRotation(-surfaceNormal, Vector3.up);

            // NOTE: when anchor graph visualization is off, we can't reference F1 object but instead need to reference Pin01
            float normalDotProduct = Vector3.Dot(surfaceNormal, commonOriginPin.transform.forward);//GameObject.Find("SpatialAlignment/CommonOrigin/Pins/Pin01").transform.forward);//GameObject.Find("F1").transform.forward);

            //Debug.Log($"Normal Orientation: {surfaceNormal}");
            //Debug.Log($"Dot Product with Normal: {Vector3.Dot(surfaceNormal, commonOriginPin.transform.forward)}");//GameObject.Find("SpatialAlignment/CommonOrigin/Pins/Pin01").transform.forward)}");//GameObject.Find("F1").transform.forward)}");            

            string hold_version = holdType;
            if (normalDotProduct > 0)
            {
                hold_version = holdType + "_Flipped";
                normalOrientation = Quaternion.LookRotation(surfaceNormal, Vector3.up);
            }

            //Debug.Log($"Placing: {hold_version}");

            // InstantiateRoomObject only succeeds for master client
            List<string> customTags = new List<string> { };
            string customTagsString = string.Join(",", customTags); // PUN2 doesn't support arrays/lists as parameters
            photonView.RPC("BuildAnchor", RpcTarget.MasterClient, hold_version, position, normalOrientation, Vector3.one * 0.1f, customTagsString);
            
            return Task.CompletedTask;
        }
        // </CreateAnchor>

        [PunRPC]
        void BuildAnchor(string go, Vector3 position, Quaternion rotation, Vector3 localScale, string customTagsString)
        {
            // open loader
            // NOTE: showing/hiding the loader here appears to add significant lag and UI stutter
            //indicatorObject.SetActive(true);

            //// Temporarily disable MRTK input because this function is async and could be called in quick succession with race issues.  Last answer here: https://stackoverflow.com/questions/56757620/how-to-temporarly-disable-mixedrealitytoolkit-inputsystem
            //StartCoroutine(DisableCoroutine());

            GameObject newAnchorGameObject = PhotonNetwork.InstantiateRoomObject(go, position, rotation);

            //Debug.Log(newAnchorGameObject);

            newAnchorGameObject.GetComponent<MeshRenderer>().material.shader = Shader.Find("Legacy Shaders/Diffuse");
            newAnchorGameObject.transform.position = position;
            newAnchorGameObject.transform.rotation = rotation;
            //newAnchorGameObject.transform.localScale = localScale; // don't set to localScale because we need to be able to parent the holds arbitrarily and this line could make them either very small or large

            // set any custom tags on all clients (e.g. necessary for when instantiating hold configs)
            // NOTE: without RPC, the custom tags would only be set for this client
            newAnchorGameObject.GetComponent<PhotonView>().RPC("PunRPC_SetCustomTags", RpcTarget.All, customTagsString);

            //Debug.Log($"Forward Direction of Object: {newAnchorGameObject.transform.forward}");

            // NOTE: when anchor graph visualization is off, we can't reference F1 object but instead need to reference Pin01
            //Debug.Log($"Forward Direction of Frozen Frame: {commonOriginPin.transform.forward}");// GameObject.Find("SpatialAlignment/CommonOrigin/Pins/Pin01").transform.forward}");//{GameObject.Find("F1").transform.forward}");
            //Debug.Log($"Dot Product with Object z: {Vector3.Dot(newAnchorGameObject.transform.forward, commonOriginPin.transform.forward)}");//GameObject.Find("SpatialAlignment/CommonOrigin/Pins/Pin01").transform.forward)}");// GameObject.Find("F1").transform.forward)}");

            // Disable maninpulation scripts if we are in 'Delete' mode
            if (editingMode == EditingMode.Delete)
            {
                newAnchorGameObject.GetComponent<NearInteractionGrabbable>().enabled = false;
                newAnchorGameObject.GetComponent<ObjectManipulator>().enabled = false;
            }

            // close loader
            //indicatorObject.SetActive(false);
        }

        // <DeleteGameObject>
            /// <summary>
            /// Deleting Cloud Anchor attached to the given GameObject and deleting the GameObject
            /// </summary>
            /// <param name="anchorGameObject">Anchor GameObject that is to be deleted</param>
        private Task DeleteGameObject(GameObject anchorGameObject)
        {
            if (anchorGameObject != null)
            {
                // photon destroy the hold
                PhotonNetwork.Destroy(anchorGameObject);

                //Debug.Log($"ASA - Cloud anchor deleted!");
            }

            return Task.CompletedTask;
        }
        // </DeleteGameObject>

        // <ToggleEditingMode>
        /// <summary>
        /// Toggles editing mode between Place and Delete
        /// </summary>
        public async void ToggleEditingMode()
        {
          await DoToggleEditingMode();
        }
        // </ToggleEditingMode>

        private Task DoToggleEditingMode()
        {
            List<GameObject> children = globalHoldParent.GetComponent<GlobalHoldParent>().childHolds;
            //Debug.Log($"num children: {children.Count}");
            if (editingMode == EditingMode.Place)
            {
                editingMode = EditingMode.Delete;

                // make holds unmovable                
                foreach (GameObject child in children)
                {
                    //Debug.Log($"Disabling Manipulation");
                    child.GetComponent<NearInteractionGrabbable>().enabled = false;
                    child.GetComponent<ObjectManipulator>().enabled = false;
                }

                toggleEditorMode.GetComponentInChildren<TextMeshPro>().text = "Mode: Delete";
            }
            else if (editingMode == EditingMode.Delete)
            {
                editingMode = EditingMode.Place;

                // make holds movable
                //foreach (var anchorGameObject in _foundOrCreatedAnchorGameObjects)
                foreach (GameObject child in children)
                {
                    // enable manipulation scripts
                    //Debug.Log($"Enabling Manipulation");
                    child.GetComponent<NearInteractionGrabbable>().enabled = true;
                    child.GetComponent<ObjectManipulator>().enabled = true;
                }

                toggleEditorMode.GetComponentInChildren<TextMeshPro>().text = "Mode: Place";
            }
            return Task.CompletedTask;
        }

        //// <changeColorDelayed>
        ///// <summary>
        ///// Change color of game object.
        ///// Used in delayed fashion.
        ///// </summary>
        ///// <param name="gameObject"></param>
        //private IEnumerator ChangeColorDelayed(GameObject gameObject, Color color, float time)
        //{
        //    yield return new WaitForSeconds(time);
        //    gameObject.GetComponent<MeshRenderer>().material.color = color;
        //}
        //// </changeColorDelayed>

        // <destroyObjectDelayed>
        /// <summary>
        /// Destroy object.
        /// Used in delayed fashion e.g. when removing long tap's sphere object created for user feedback
        /// </summary>
        /// <param name="gameObject"></param>
        /// <param name="time"></param>
        /// <returns></returns>
        private IEnumerator DestroyObjectDelayed(GameObject gameObject, float time)
        {
            yield return new WaitForSeconds(time);
            PhotonNetwork.Destroy(gameObject);
        }
        // </destroyObjectDelayed>

        //// <DisableCoroutine>
        ///// <summary>
        ///// Disable MRTK input 
        ///// </summary>
        ///// <returns></returns>
        //private IEnumerator DisableCoroutine()
        //{
        //    yield return null;
        //    Microsoft.MixedReality.Toolkit.CoreServices.InputSystem.Disable();
        //}
        //// </DisableCoroutine>

        //// <EnableCoroutine>
        ///// <summary>
        ///// Enable MRTK input
        ///// </summary>
        ///// <returns></returns>
        //private IEnumerator EnableCoroutine()
        //{
        //    yield return null;
        //    Microsoft.MixedReality.Toolkit.CoreServices.InputSystem.Enable();
        //}
        //// </EnableCoroutine>

        // <ScrollHoldMenuClick>
        /// <summary>
        /// Handle scoll hold menu selection
        /// </summary>
        /// <param name="go"></param>
        public void ScrollHoldMenuClick(GameObject go)
        {
            Debug.Log(go);
            if (go != null)
            {
                // PhotonNetwork.PrefabPool lets us refer to prefabs by name under Resources folder without having to manually add them to the ResourceCache: https://forum.unity.com/threads/solved-photon-instantiating-prefabs-without-putting-them-in-a-resources-folder.293853/
                menuHold = $"{go.name}";
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
    }
}