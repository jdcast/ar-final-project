using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideMenuOnStart : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        // Hide on startup
        gameObject.SetActive(false);
    }
}
