using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlobalHoldParent : MonoBehaviour
{
    [SerializeField] private AudioSource m_AudioSource;
    [SerializeField] private AudioClip onManipulationStartedAudio;
    [SerializeField] private AudioClip onManipulationEndedAudio;

    // keep track of its child holds for fastest lookup later (e.g. in holdManipulator.cs)
    public List<GameObject> childHolds = new List<GameObject>();

    public void PlayOnManipulationStartedAudio()
    {
        m_AudioSource.PlayOneShot(onManipulationStartedAudio);
    }

    public void PlayOnManipulationEndedAudio()
    {
        m_AudioSource.PlayOneShot(onManipulationEndedAudio);
    }
}
