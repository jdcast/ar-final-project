using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class MeshControls : MonoBehaviour
{
    private bool showMesh;

    // <Start>
    // Start is called before the first frame update
    void Start()
    {
        showMesh = true;
    }
    // </Start>

    public void ToggleMesh()
    {
        // Get the first Mesh Observer available, generally we have only one registered
        var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();

        if (showMesh)
        {
            // Set to not visible
            observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.None;
        } else
        {
            // Set to not visible
            observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.Visible;
        }

        showMesh = !showMesh;
    }
}
