using ExitGames.Client.Photon;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class MainMenu : MonoBehaviour
{
    [SerializeField] GameObject sketchMenu = default;
    [SerializeField] GameObject sculptMenu = default;
    [SerializeField] GameObject selectMenu = default;
    [SerializeField] GameObject sculptSubmenuPush = default;
    [SerializeField] GameObject sculptSubmenuPull = default;
    [SerializeField] GameObject closeButton = default;
    [SerializeField] GameObject mainMenu = default;
    [SerializeField] GameObject sculptMenuSliders = default;
    [SerializeField] GameObject sketchMenuSliders = default;
    [SerializeField] GameObject toggleDebugWindowButton = default;
    [SerializeField] GameObject debugWindow = default;
    [SerializeField] GameObject sketchEffectSlider = default;
    [SerializeField] GameObject sketchScaleSlider = default;
    [SerializeField] GameObject sculptEffectSlider = default;
    [SerializeField] GameObject sculptScaleSlider = default;
    [SerializeField] MeshController meshController = default;
    [SerializeField] GameObject whiteboard = default;
    [SerializeField] SketchController sketchController = default;

    private bool sketchMenuIsActive = false;
    private bool sculptMenuIsActive = false;
    private bool selectMenuIsActive = false;
    private bool debugWindowIsActive = false;
    private bool sculptSubmenuPushIsActive = false;
    private bool sculptSubmenuPullIsActive = false;
    
    private float sketchEffectSliderVal = 0f;
    private float sketchScaleSliderVal = 0f;
    private float sculptEffectSliderVal = 0f;
    private float sculptScaleSliderVal = 0f;
    [SerializeField] private float sketchSculptScale = 10f;

    public enum Mode
    {
        Sketch,
        Sketch_Draw,
        Sketch_Extrude,
        Sculpt,
        Sculpt_Push,
        Sculpt_Pull,
        Sculpt_Push_Linear,
        Sculpt_Pull_Linear,
        Sculpt_Push_Gaussian,
        Sculpt_Pull_Gaussian,
        Select,
        Select_Move,
        Select_Save,
        Select_Load
    }

    public Mode mode = default;

    public void Start()
    {
        //CoreServices.DiagnosticsSystem.ShowDiagnostics = debugWindowIsActive;
        //CoreServices.DiagnosticsSystem.ShowProfiler = false;
    }

    /// <summary>
    /// Hide/show sketch menu
    /// </summary>
    public void ToggleSketchMenu()
    {
        sketchMenuIsActive = !sketchMenuIsActive;
        sketchMenu.SetActive(sketchMenuIsActive);
        sketchMenuSliders.SetActive(sketchMenuIsActive);

        if (sketchMenuIsActive)
        {
            mode = Mode.Sketch;

            HideSculptMenu();
            HideSelectMenu();

            sketchScaleSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = $"Value: {sketchScaleSliderVal * sketchSculptScale}";
            sketchEffectSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = $"Value: {sketchScaleSliderVal * sketchEffectSliderVal}";

            whiteboard.SetActive(true);
            sketchController.StartSketch();
        } else
        {
            whiteboard.SetActive(false);
        }
    }

    /// <summary>
    /// Hide/show sculpt menu
    /// </summary>
    public void ToggleSculptMenu()
    {
        sculptMenuIsActive = !sculptMenuIsActive;
        sculptMenu.SetActive(sculptMenuIsActive);
        sculptMenuSliders.SetActive(sculptMenuIsActive);

        if (sculptMenuIsActive)
        {
            mode = Mode.Sculpt;

            HideSketchMenu();
            HideSelectMenu();

            sculptScaleSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = $"Value: {sculptScaleSliderVal * sketchSculptScale}";
            sculptEffectSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = $"Value: {sculptScaleSliderVal * sculptEffectSliderVal}";
        } else
        {
            sculptSubmenuPush.SetActive(sculptMenuIsActive);
            sculptSubmenuPull.SetActive(sculptMenuIsActive);
        }
    }

    /// <summary>
    /// Hide/show select menu
    /// </summary>
    public void ToggleSelectMenu()
    {
        selectMenuIsActive = !selectMenuIsActive;
        selectMenu.SetActive(selectMenuIsActive);

        if (selectMenuIsActive)
        {
            mode = Mode.Select;

            HideSketchMenu();
            HideSculptMenu();
        }
    }

    /// <summary>
    /// Hide/show sculptSubmenuPush menu
    /// </summary>
    public void ToggleSculptSubmenuPush()
    {
        sculptSubmenuPushIsActive = !sculptSubmenuPushIsActive;
        sculptSubmenuPush.SetActive(sculptSubmenuPushIsActive);

        HideSculptSubmenuPull();

        if (sculptSubmenuPushIsActive)
        {
            mode = Mode.Sculpt_Push;
        }
    }

    /// <summary>
    /// Hide/show sculptSubmenuPull menu
    /// </summary>
    public void ToggleSculptSubmenuPull()
    {
        sculptSubmenuPullIsActive = !sculptSubmenuPullIsActive;
        sculptSubmenuPull.SetActive(sculptSubmenuPullIsActive);

        HideSculptSubmenuPush();

        if (sculptSubmenuPullIsActive)
        {
            mode = Mode.Sculpt_Pull;
        }
    }

    /// <summary>
    /// Toggle submode under sculptSubmenuPush menu
    /// </summary>
    public void ToggleSculptSubmenuPushLinear()
    {
        mode = Mode.Sculpt_Push_Linear;
    }

    /// <summary>
    /// Toggle submode under sculptSubmenuPull menu
    /// </summary>
    public void ToggleSculptSubmenuPullLinear()
    {
        mode = Mode.Sculpt_Pull_Linear;
    }

    /// <summary>
    /// Toggle submode under sculptSubmenuPush menu
    /// </summary>
    public void ToggleSculptSubmenuPushGaussian()
    {
        mode = Mode.Sculpt_Push_Gaussian;
    }

    /// <summary>
    /// Toggle submode under sculptSubmenuPull menu
    /// </summary>
    public void ToggleSculptSubmenuPullGaussian()
    {
        mode = Mode.Sculpt_Pull_Gaussian;
    }

    /// <summary>
    /// Hide/show debug window
    /// </summary>
    public void ToggleDebugWindow()
    {
        debugWindowIsActive = !debugWindowIsActive;
        debugWindow.SetActive(debugWindowIsActive);
        //CoreServices.DiagnosticsSystem.ShowDiagnostics = debugWindowIsActive;
        //CoreServices.DiagnosticsSystem.ShowProfiler = debugWindowIsActive;

        if (debugWindowIsActive)
        {
            toggleDebugWindowButton.GetComponent<ButtonConfigHelper>().MainLabelText = "Hide Debug";
        } else
        {
            toggleDebugWindowButton.GetComponent<ButtonConfigHelper>().MainLabelText = "Show Debug";
        }
    }

    public void HideSketchMenu()
    {
        sketchMenuIsActive = false;
        sketchMenu.SetActive(sketchMenuIsActive);
        sketchMenuSliders.SetActive(sketchMenuIsActive);
        whiteboard.SetActive(false);
    }

    public void HideSculptMenu()
    {
        sculptMenuIsActive = false;
        sculptMenu.SetActive(sculptMenuIsActive);
        sculptMenuSliders.SetActive(sculptMenuIsActive);
        sculptSubmenuPull.SetActive(sculptMenuIsActive);
        sculptSubmenuPush.SetActive(sculptMenuIsActive);
    }

    public void HideSelectMenu()
    {
        selectMenuIsActive = false;
        selectMenu.SetActive(selectMenuIsActive);
    }

    public void HideSculptSubmenuPush()
    {
        sculptSubmenuPushIsActive = false;
        sculptSubmenuPush.SetActive(sculptSubmenuPushIsActive);
    }

    public void HideSculptSubmenuPull()
    {
        sculptSubmenuPullIsActive = false;
        sculptSubmenuPull.SetActive(sculptSubmenuPullIsActive);
    }

    public void HideCloseButton()
    {
        sculptSubmenuPull.SetActive(false);
    }

    public void HideSculptMenuSliders()
    {
        sculptMenuSliders.SetActive(false);
    }

    public void HideSketchMenuSliders()
    {
        sketchMenuSliders.SetActive(false);
    }

    public void HideMainMenu()
    {
        mainMenu.SetActive(false);

        HideSketchMenu();
        HideSculptMenu();
        HideSelectMenu();
        HideSculptSubmenuPush();
        HideSculptSubmenuPull();
        HideCloseButton();
        HideSketchMenuSliders();
        HideSculptMenuSliders();
    }

    public void SketchEffectSliderChanged(SliderEventData eventData)
    {
        sketchEffectSliderVal = eventData.NewValue;
        float newEffectScale = sketchSculptScale * sketchEffectSliderVal * sketchScaleSliderVal;
        sketchEffectSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = "Value: " + newEffectScale.ToString();
        meshController.effectScale = newEffectScale;
    }

    public void SketchScaleSliderChanged(SliderEventData eventData)
    {
        sketchScaleSliderVal = eventData.NewValue;
        float newEffectScale = sketchSculptScale * sketchEffectSliderVal * sketchScaleSliderVal;
        sketchScaleSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = "Value: " + (sketchSculptScale * eventData.NewValue).ToString();
        meshController.effectScale = newEffectScale;
        sketchEffectSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = "Value: " + newEffectScale.ToString();
    }

    public void SculptEffectSliderChanged(SliderEventData eventData)
    {
        sculptEffectSliderVal = eventData.NewValue;
        float newEffectScale = sketchSculptScale * sculptEffectSliderVal * sculptScaleSliderVal;
        sculptEffectSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = "Value: " + newEffectScale.ToString();
        meshController.effectScale = newEffectScale;
    }

    public void SculptScaleSliderChanged(SliderEventData eventData)
    {
        sculptScaleSliderVal = eventData.NewValue;
        float newEffectScale = sketchSculptScale * sculptEffectSliderVal * sculptScaleSliderVal;
        sculptScaleSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = "Value: " + (sketchSculptScale * eventData.NewValue).ToString();
        meshController.effectScale = newEffectScale;
        sculptEffectSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = "Value: " + newEffectScale.ToString();
    }
}
