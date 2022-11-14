using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace MultiUserCapabilities
{
    public class HoldData : MonoBehaviour
    {
        /// <summary>
        /// Stores the last manipulation of an object.
        /// Helps determine whether movement should correspond to rotation (i.e. manipulation script handler) or translation (i.e. surface magnetism movement handler)
        /// </summary>
        public DateTime manipulationStartTime;

        /// <summary>
        /// Holds state for object for whether it is receiving a short tap corresponding to placement
        /// Used for surface magnetism movement of the object
        /// </summary> 
        public bool isTappingToPlace = false;

        /// <summary>
        /// Surface normal offset to use for Surface Magnetism component. 
        /// Tunable parameter.
        /// Necessary because otherwise, when we operate the snap-to-mesh functionality, the hold may be too close to the spatial mesh and not register
        /// a hit on the spatial mesh in a RayCast.  Additionally, the spatial mesh frequently updates due to corrections being constantly made via the 
        /// sensors, so if we make the hold too tight to the spatial mesh, it may clip through on later spatial mesh updates.
        /// 
        /// NOTE: not needed now that we have turned on Physics.queriesHitBackfaces:
        /// 1. https://docs.unity3d.com/ScriptReference/Physics-queriesHitBackfaces.html
        /// 2. https://answers.unity.com/questions/129715/collision-detection-if-raycast-source-is-inside-a.html
        /// </summary>
        //[SerializeField] public float surfaceNormalOffset; 
    }
}