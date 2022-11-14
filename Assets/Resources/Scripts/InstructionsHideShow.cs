using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InstructionsHideShow : MonoBehaviour
{
    public GameObject instructions;

    private bool showInstructions; 

    // Start is called before the first frame update
    void Start()
    {
        instructions.SetActive(false);
        showInstructions = false;
    }

    public void ToggleInstructions()
    {
        if (showInstructions)
        {
            instructions.SetActive(false);
            showInstructions = false;
        }
        else
        {
            instructions.SetActive(true);
            showInstructions = true;
        }
    }
}
