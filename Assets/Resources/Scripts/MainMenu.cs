using ExitGames.Client.Photon;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using drawing;
using Microsoft.MixedReality.Toolkit.Utilities.Editor;

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
    [SerializeField] GameObject sculptRadiusSlider = default;
    [SerializeField] MeshController meshController = default;
    [SerializeField] MeshSaverLoader meshSaverLoader = default;
    [SerializeField] GameObject whiteboard = default;
    [SerializeField] SketchController sketchController = default;
    [SerializeField] GameObject selectSubmenuLoad = default;

    private bool sketchMenuIsActive = false;
    private bool sculptMenuIsActive = false;
    private bool selectMenuIsActive = false;
    private bool debugWindowIsActive = false;
    private bool sculptSubmenuPushIsActive = false;
    private bool sculptSubmenuPullIsActive = false;
    private bool selectSubmenuLoadIsActive = false;
    private bool enableExtrude = false;
    private bool extrudeComplete = true;

    public float sketchEffectSliderVal = 0.0f;
    public float sketchScaleSliderVal = 0.5f;
    public float sculptEffectSliderVal = 0.5f;
    public float sculptScaleSliderVal = 0.5f;
    public float sketchRadiusSliderVal = 0.5f;
    public float sculptRadiusSliderVal = 0.5f;
    public float min_radius = 0.005f;
    public float max_radius = 0.3f;

    [SerializeField] public float sketchSculptScale = 10f;

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
        Select_Load,
        Select_Load_Default,
        Select_Load_Saved,
        Select_Delete
    }

    public Mode mode = default;

    public void Start()
    {
        //CoreServices.DiagnosticsSystem.ShowDiagnostics = debugWindowIsActive;
        //CoreServices.DiagnosticsSystem.ShowProfiler = false;
        meshController.effectExtrude = sketchScaleSliderVal * sketchEffectSliderVal;
    }

    /// <summary>
    /// Hide/show sketch menu
    /// </summary>
    public void ToggleSketchMenu()
    {
        enableExtrude = false;
        sketchMenuIsActive = !sketchMenuIsActive;
        sketchMenu.SetActive(sketchMenuIsActive);
        
        meshController.ToggleManipulability(false);
        meshSaverLoader.CloseScrollMenu();

        if (sketchMenuIsActive)
        {
            mode = Mode.Sketch;

            HideSculptMenu();
            HideSelectMenu();

            sketchScaleSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = $"Value: {sketchScaleSliderVal * sketchSculptScale}";
            sketchEffectSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = $"Value: {sketchSculptScale * sketchEffectSliderVal * sketchScaleSliderVal}";

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
        enableExtrude = false;
        meshSaverLoader.CloseScrollMenu();
        sculptMenuIsActive = !sculptMenuIsActive;
        sculptMenu.SetActive(sculptMenuIsActive);
        sculptMenuSliders.SetActive(sculptMenuIsActive);
        meshController.ToggleManipulability(false);
        meshSaverLoader.keyboardInputContainer.SetActive(false);

        if (sculptMenuIsActive)
        {
            mode = Mode.Sculpt;

            HideSketchMenu();
            HideSelectMenu();

            sculptScaleSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = $"Value: {sculptScaleSliderVal * sketchSculptScale}";
            sculptEffectSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = $"Value: {sketchSculptScale * sculptEffectSliderVal * sculptScaleSliderVal}";
            sculptRadiusSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = $"Value: {sculptRadiusSliderVal * (max_radius - min_radius) + min_radius}";
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
        enableExtrude = false;
        meshSaverLoader.CloseScrollMenu();
        selectMenuIsActive = !selectMenuIsActive;
        selectMenu.SetActive(selectMenuIsActive);
        meshController.ToggleManipulability(false);
        meshSaverLoader.keyboardInputContainer.SetActive(false);

        if (selectMenuIsActive)
        {
            mode = Mode.Select;

            HideSketchMenu();
            HideSculptMenu();
        } else
        {
            HideSelectSubmenuLoad();
        }
    }

    /// <summary>
    /// Toggle drawing
    /// </summary>
    public void ToggleSketchDraw()
    {
        if (extrudeComplete) {
            enableExtrude = false;
            meshSaverLoader.CloseScrollMenu();
            meshSaverLoader.keyboardInputContainer.SetActive(false);
            if (mode != Mode.Sketch_Draw)
            {
                mode = Mode.Sketch_Draw;
                enableExtrude = true;
            }
        }
    }

    public void ToggleSketchExtrude()
    {
        meshSaverLoader.CloseScrollMenu();
        meshSaverLoader.keyboardInputContainer.SetActive(false);
      
        if (mode != Mode.Sketch_Extrude)
        {
            extrudeComplete = false;

            sketchMenuSliders.SetActive(true);

            Vector3[] pts = sketchController.GetPoints();

            sketchController.RemoveAllSketchPoints();
            
            mode = Mode.Sketch_Extrude;

            if (pts.Length >= 3)
            {
                enableExtrude = true;
                meshController.Draw2DShape(pts);
            }
            //Mesh mesh = Drawing2D.GenerateMeshFrom3DPoints(pts);
            //GameObject planemesh = new GameObject();
            //MeshFilter mf = planemesh.AddComponent<MeshFilter>();
            //mf.mesh = mesh;
            //MeshCollider mc = planemesh.AddComponent<MeshCollider>();
            //mc.sharedMesh = mesh;
            //MeshRenderer mr = planemesh.AddComponent<MeshRenderer>();
            //mr.material.color = Color.white;
            //planemesh.transform.position = pts[pts.Length-1];
            //planemesh.transform.SetParent(MeshParent.transform, true);
            //planemesh.transform.localScale = Vector3.one;
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
    /// Toggle submenu under select menu
    /// </summary>
    public void ToggleSelectSubmenuLoad()
    {
        meshSaverLoader.keyboardInputContainer.SetActive(false);
        selectSubmenuLoadIsActive = !selectSubmenuLoadIsActive;
        selectSubmenuLoad.SetActive(selectSubmenuLoadIsActive);
        meshSaverLoader.CloseScrollMenu();

        if (selectSubmenuLoadIsActive)
        {
            mode = Mode.Select_Load;
        }
    }

    /// <summary>
    /// Toggle submode under selectSubmenuLoad menu
    /// </summary>
    public void ToggleSelectSubmenuLoadDefault()
    {
        meshSaverLoader.keyboardInputContainer.SetActive(false);
        meshController.ToggleManipulability(false);
        mode = Mode.Select_Load_Default;
        meshSaverLoader.CloseScrollMenu();
        meshController.loadedMesh = meshController.defaultGameObject.GetComponent<MeshFilter>().mesh;
    }


    /// <summary>
    /// Toggle submode under selectSubmenuLoad menu
    /// </summary>
    public void ToggleSelectSubmenuLoadSaved()
    {
        meshSaverLoader.keyboardInputContainer.SetActive(false);
        meshController.ToggleManipulability(false);
        mode = Mode.Select_Load_Saved;
        meshSaverLoader.LoadStart();
    }

    /// <summary>
    /// Toggle submode under select menu
    /// </summary>
    public void ToggleSelectMove()
    {
        meshSaverLoader.CloseScrollMenu();
        meshController.ToggleManipulability(true);
        meshSaverLoader.keyboardInputContainer.SetActive(false);
        mode = Mode.Select_Move;

        HideSelectSubmenuLoad();
    }

    /// <summary>
    /// Toggle submode under select menu
    /// </summary>
    public void ToggleSelectSave()
    {
        meshController.ToggleManipulability(false);
        mode = Mode.Select_Save;

        HideSelectSubmenuLoad();
    }

    /// <summary>
    /// Toggle submode under select menu
    /// </summary>
    public void ToggleSelectDelete()
    {
        meshController.ToggleManipulability(false);
        mode = Mode.Select_Delete;

        HideSelectSubmenuLoad();
    }

    /// <summary>
    /// Hide/show debug window
    /// </summary>
    public void ToggleDebugWindow()
    {
        meshSaverLoader.CloseScrollMenu();
        meshController.ToggleManipulability(false);
        meshSaverLoader.keyboardInputContainer.SetActive(false);
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
        enableExtrude = false;
        sketchMenuIsActive = false;
        sketchMenu.SetActive(sketchMenuIsActive);
        sketchMenuSliders.SetActive(sketchMenuIsActive);
        whiteboard.SetActive(false);
    }

    public void HideSculptMenu()
    {
        sculptMenuIsActive = false;
        sculptSubmenuPushIsActive = false;
        sculptSubmenuPullIsActive = false;
        sculptMenu.SetActive(sculptMenuIsActive);
        sculptMenuSliders.SetActive(sculptMenuIsActive);
        sculptSubmenuPull.SetActive(sculptMenuIsActive);
        sculptSubmenuPush.SetActive(sculptMenuIsActive);
    }

    public void HideSelectMenu()
    {
        selectMenuIsActive = false;
        selectSubmenuLoadIsActive = false;
        selectMenu.SetActive(selectMenuIsActive);
        selectSubmenuLoad.SetActive(selectSubmenuLoadIsActive);
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

    public void HideSelectSubmenuLoad()
    {
        selectSubmenuLoadIsActive = false;
        selectSubmenuLoad.SetActive(false);
    }

    public void HideMainMenu()
    {
        enableExtrude = false;
        meshSaverLoader.CloseScrollMenu();
        mainMenu.SetActive(false);

        HideSketchMenu();
        HideSculptMenu();
        HideSelectMenu();
        HideSculptSubmenuPush();
        HideSculptSubmenuPull();
        HideCloseButton();
        HideSketchMenuSliders();
        HideSculptMenuSliders();
        HideSelectSubmenuLoad();
    }

    public void SketchEffectSliderChanged(SliderEventData eventData)
    {
        sketchEffectSliderVal = eventData.NewValue;
        float newEffectScale = sketchSculptScale * sketchEffectSliderVal * sketchScaleSliderVal;
        sketchEffectSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = "Value: " + newEffectScale.ToString();
        meshController.effectExtrude = newEffectScale;
        if (enableExtrude)
        {
            meshController.Update2DMesh();
        }
    }

    public void SketchScaleSliderChanged(SliderEventData eventData)
    {
        sketchScaleSliderVal = eventData.NewValue;
        float newEffectScale = sketchSculptScale * sketchEffectSliderVal * sketchScaleSliderVal;
        sketchScaleSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = "Value: " + (sketchSculptScale * eventData.NewValue).ToString();
        meshController.effectExtrude = newEffectScale;
        sketchEffectSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = "Value: " + newEffectScale.ToString();
        if (enableExtrude)
        {
            meshController.Update2DMesh();
        }
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

    public void SculptRadiusSliderChanged(SliderEventData eventData)
    {
        sculptRadiusSliderVal = eventData.NewValue;
        //float newRadiusScale = sketchSculptScale * sketchRadiusSliderVal * sketchRadiusSliderVal;
        float newRadiusScale = sculptRadiusSliderVal * (max_radius - min_radius) + min_radius;
        sculptRadiusSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = "Value: " + newRadiusScale.ToString();
        meshController.effectRadius = newRadiusScale;
    }

    public void SketchExtrudeDone()
    {
        if (mode == Mode.Sketch_Extrude)
        {
            sketchScaleSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = $"Value: {0.5f}";
            sketchEffectSlider.transform.Find("Value").GetComponent<TextMeshPro>().text = $"Value: {0.0f}";
            //Vector3 position = sketchScaleSlider.transform.position;
            //position.x = -0.1255f;
            //position.y = 0f;
            //osition.z = 0.0f;
            Vector3 position = new Vector3(-0.1255f, 0f, 0f);
            sketchScaleSlider.transform.GetChild(2).localPosition = position;

            //Vector3 SliderPos = sketchEffectSlider.transform.position;
            //SliderPos.x = 0.0f;
            //SliderPos.y = 0.0f;
            //SliderPos.z = 0.0f;
            sketchEffectSlider.transform.GetChild(2).localPosition = Vector3.zero;
            extrudeComplete = true;
    
            GameObject extrudedMesh = whiteboard.transform.GetChild(1).gameObject.transform.GetChild(0).gameObject;
            //Vector3 localPos = extrudedMesh.transform.position - whiteboard.transform.position;
            extrudedMesh.transform.SetParent(meshController.meshParent.transform, true);
            //extrudedMesh.transform.localPosition = localPos;
            whiteboard.SetActive(false);

            HideMainMenu();

            meshController.ExtractExtrudedMeshForInstatiation();
        }
    }
}
