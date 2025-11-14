using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReproducirCancion : MonoBehaviour
{
    public AudioSource audioSource;   // Arrastra aquí el AudioSource
    public AudioClip starClip;        // Arrastra el sonido de la estrella
    public int repeatCount = 3;       // 3 veces
    public float delayBetweenPlays = 0.4f; // 0.4 segundos entre cada sonido

    public bool isPlayingFx = false;

    private void Start()
    {
        if (audioSource == null)
        {
            audioSource = GetComponent<AudioSource>();
        }
        if (isPlayingFx)
            StartCoroutine(PlayStarSoundRepeated());
    }

    private IEnumerator PlayStarSoundRepeated()
    {
        isPlayingFx = true;

        for (int i = 0; i < repeatCount; i++)
        {
            audioSource.PlayOneShot(starClip);
            yield return new WaitForSeconds(delayBetweenPlays);
        }

        isPlayingFx = false;
    }
}