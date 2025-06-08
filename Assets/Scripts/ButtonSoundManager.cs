using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using PrimeTween;

public class ButtonSoundManager : MonoBehaviour
{
    private static AudioClip touchSound;

    void Awake()
    {
        if (touchSound == null)
        {
            touchSound = Resources.Load<AudioClip>("music/sound-touch");
        }

        // Encuentra todos los botones con el tag "ButtonSound"
        GameObject[] buttonObjects = GameObject.FindGameObjectsWithTag("ButtonSound");
        foreach (GameObject obj in buttonObjects)
        {
            Button btn = obj.GetComponent<Button>();
            if (btn != null)
            {
                // Elimina listeners previos para evitar duplicados
                btn.onClick.RemoveListener(() => PlaySoundAndScale(obj.transform));
                // Agrega el listener
                btn.onClick.AddListener(() => PlaySoundAndScale(obj.transform));
            }
        }
    }

    private void PlaySoundAndScale(Transform target)
    {
        // Reproduce el sonido
        AudioSource audioSource = target.GetComponent<AudioSource>();
        if (audioSource == null)
        {
            audioSource = target.gameObject.AddComponent<AudioSource>();
            audioSource.playOnAwake = false;
            audioSource.clip = touchSound;
            audioSource.volume = 0.5f; // Ajusta el volumen según sea necesario
        }
        audioSource.Play();

        // Escalado con PrimeTween
        Tween.Scale(target, Vector3.one * 1.5f, 0.1f)
            .OnComplete(() => Tween.Scale(target, Vector3.one, 0.1f));
    }
}
