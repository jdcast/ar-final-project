using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SketchPointInit : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        transform.parent = GameObject.Find("Whiteboard").transform;
    }
}
