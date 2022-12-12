using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Script to rotate automatically rotate pointer
/// </summary>
public class Pointer : MonoBehaviour
{
    private float ySpeed = 10f;
    void Update()
    {
        transform.Rotate(0f, ySpeed * Time.deltaTime, 0f);
    }
}
