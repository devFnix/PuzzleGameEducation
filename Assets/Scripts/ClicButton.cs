using UnityEngine;
using UnityEngine.EventSystems;
using PrimeTween;

public class ClicButton : MonoBehaviour, IPointerClickHandler
{
    private AudioSource audioSource;
    private static AudioClip touchSound;

    void Awake()
    {
        if (touchSound == null)
        {
            touchSound = Resources.Load<AudioClip>("music/sound-touch");
        }
        audioSource = GetComponent<AudioSource>();
        if (audioSource == null)
        {
            audioSource = gameObject.AddComponent<AudioSource>();
        }
        audioSource.playOnAwake = false;
        audioSource.clip = touchSound;
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if (CompareTag("ButtonSound"))
        {
            audioSource.Play();
            Tween.Scale(transform, Vector3.one * 1.5f, 0.1f)
                .OnComplete(() => Tween.Scale(transform, Vector3.one, 0.1f));
        }
    }
}
