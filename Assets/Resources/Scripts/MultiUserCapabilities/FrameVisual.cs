// Derived from WLT -> FrameVisual.cs

using UnityEngine;

namespace MultiUserCapabilities
{
    /// <summary>
    /// Component for adjusting color and description text of visual origin markers in a frame (coordinate system axes).
    /// Specifically, don't automatically set text of FrameVisual as was done in the original script
    /// </summary>
    public class FrameVisual : MonoBehaviour
    {
        [SerializeField]
        [Tooltip("Visual marker to be colored")]
        private Renderer originMarker = null;

        [SerializeField]
        [Tooltip("Text object to be colored and set to the name of this GameObject")]
        private TextMesh originText = null;

        /// <summary>
        /// Text and axes color
        /// </summary>
        public Color color
        {
            get { return originText.color; }
            set
            {
                originText.color = value;
                for (int i = 0; i < originMarker.materials.Length; i++)
                {
                    originMarker.materials[i].color = value;
                }
            }
        }
    }
}
