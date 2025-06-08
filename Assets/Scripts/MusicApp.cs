using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MusicApp : MonoBehaviour
{
    private static MusicApp instance;
    private AudioSource audioSource;
    private static AudioClip bgMusic;

    [Header("UI Controls")]
    [SerializeField] Button buttonClose;
    [SerializeField] Button buttonShow;
    [SerializeField] GameObject Panel;
    [SerializeField] Slider volumeScrollbar;
    [SerializeField] Toggle muteToggle;
    [SerializeField] Button playButton;
    [SerializeField] Button pauseButton;
    [SerializeField] Button stopButton;

    void Awake()
    {
        // Singleton: solo una instancia
        if (instance != null && instance != this)
        {
            Destroy(gameObject);
            return;
        }
        instance = this;
        DontDestroyOnLoad(gameObject);

        // Cargar el audio solo una vez
        if (bgMusic == null)
        {
            bgMusic = Resources.Load<AudioClip>("music/sound-bg");
        }

        // Configurar AudioSource
        audioSource = GetComponent<AudioSource>();
        if (audioSource == null)
        {
            audioSource = gameObject.AddComponent<AudioSource>();
        }
        audioSource.clip = bgMusic;
        audioSource.loop = true;
        audioSource.playOnAwake = false;
        audioSource.volume = 0.25f;

        // Reproducir si no está sonando
        if (!audioSource.isPlaying)
        {
            audioSource.Play();
        }
    }

    void Start()
    {
        Panel.SetActive(false);
        buttonShow.onClick.AddListener(() =>
        {
            Panel.SetActive(!Panel.activeSelf);
        });
        buttonClose.onClick.AddListener(() =>
        {
            Panel.SetActive(false);
        });
        // Asignar eventos UI si están configurados
        if (volumeScrollbar != null)
        {
            volumeScrollbar.value = audioSource.volume;
            volumeScrollbar.onValueChanged.AddListener(SetVolume);
        }
        if (muteToggle != null)
        {
            muteToggle.isOn = audioSource.mute;
            muteToggle.onValueChanged.AddListener(SetMute);
        }
        if (playButton != null)
            playButton.onClick.AddListener(PlayMusic);
        if (pauseButton != null)
            pauseButton.onClick.AddListener(PauseMusic);
        if (stopButton != null)
            stopButton.onClick.AddListener(StopMusic);

    }

    public void SetVolume(float value)
    {
        audioSource.volume = value;
    }

    public void SetMute(bool isMuted)
    {
        audioSource.mute = isMuted;
    }

    public void PlayMusic()
    {
        if (!audioSource.isPlaying)
            audioSource.Play();
    }

    public void PauseMusic()
    {
        if (audioSource.isPlaying)
            audioSource.Pause();
    }

    public void StopMusic()
    {
        audioSource.Stop();
    }
}
