using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuHideShow : MonoBehaviour
{
    public GameObject toggleMesh, toggleEditorMode, hideShowMenuButton, hideShowScrollingHoldMenu;

    private bool show;

    void Start()
    {
        show = true;
    }

    public void hideShowMenu()
    {
        if (show)
        {
            toggleMesh.SetActive(false);
            toggleEditorMode.SetActive(false);
            hideShowScrollingHoldMenu.SetActive(false);
            show = false;

            hideShowMenuButton.GetComponent<ButtonConfigHelper>().SetQuadIconByName("IconShow");

            // move hideShowMenu button left 
            //NOTE: has drift and eventually moves the button (maybe because button position is a float?)
            //Vector3 pos = hideShowMenuButton.transform.position;
            //pos.x -= .1f;
            //hideShowMenuButton.transform.position = pos;
        }
        else
        {
            toggleMesh.SetActive(true);
            toggleEditorMode.SetActive(true);
            hideShowScrollingHoldMenu.SetActive(true);
            show = true;

            hideShowMenuButton.GetComponent<ButtonConfigHelper>().SetQuadIconByName("IconHide");

            // move hideShowMenu button right
            //NOTE: has drift and eventually moves the button (maybe because button position is a float?)
            //Vector3 pos = hideShowMenuButton.transform.position;
            //pos.x += .1f;
            //hideShowMenuButton.transform.position = pos;
        }
    }
}
