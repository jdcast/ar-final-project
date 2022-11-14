using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScrollHoldMenuHideShow : MonoBehaviour
{
    public GameObject scrollHoldMenu;

    private bool show;

    void Start()
    {
        scrollHoldMenu.SetActive(false);
        show = false;
    }

    public void hideShowMenu()
    {
        if (show)
        {
            scrollHoldMenu.SetActive(false);
            show = false;
        }
        else
        {
            scrollHoldMenu.SetActive(true);
            show = true;
        }
    }
}