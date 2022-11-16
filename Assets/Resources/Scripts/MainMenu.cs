using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenu : MonoBehaviour
{
    [SerializeField] GameObject sculptMenu = default;
    [SerializeField] GameObject deleteMenu = default;
    private bool sculptMenuIsActive = false;
    private bool deleteMenuIsActive = false;

    /// <summary>
    /// Hide/show sculpt menu
    /// </summary>
    public void toggleSculptMenu()
    {
        sculptMenuIsActive = !sculptMenuIsActive;
        sculptMenu.SetActive(sculptMenuIsActive);
    }

    /// <summary>
    /// Hide/show delete menu
    /// </summary>
    public void toggleDeleteMenu()
    {
        deleteMenuIsActive = !deleteMenuIsActive;
        deleteMenu.SetActive(deleteMenuIsActive);
    }

    public void hideSculptMenu()
    {
        sculptMenuIsActive = false;
        sculptMenu.SetActive(sculptMenuIsActive);
    }

    public void hideDeleteMenu()
    {
        deleteMenuIsActive = false;
        deleteMenu.SetActive(deleteMenuIsActive);
    }
}
