using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using UnityEngine;

public class ScrollHoldMenuInit : MonoBehaviour
{
    [SerializeField] private ScrollingObjectCollection scrollingObjectCollection = default;
    [SerializeField] private GridObjectCollection gridObjectCollection = default;
    void Start()
    {
        scrollingObjectCollection.GetComponent<ScrollingObjectCollection>().UpdateContent(); // causes "...(instance)(instance)...(instance)" error in Debug window 
        Debug.Log($"num children: {gridObjectCollection.gameObject.transform.childCount}"); // doesn't appear to print anything
    }
}
