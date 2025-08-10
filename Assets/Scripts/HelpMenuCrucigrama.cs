using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class HelpMenuCrucigrama : MonoBehaviour
{
    [Header("Referencias UI")]
    public Image image;
    [SerializeField] private GameObject helpPanel;
    [SerializeField] private Button openHelpButton;
    [SerializeField] private Button playSoundButton;
    [SerializeField] private Button closeButton;
    [SerializeField] private TextMeshProUGUI description;
    private AudioSource audioSource;

    void Awake()
    {
        // Asegura que el panel est� oculto al inicio
        if (helpPanel != null)
            helpPanel.SetActive(true);

        // Configura el AudioSource
        audioSource = GetComponent<AudioSource>();
        if (audioSource == null)
            audioSource = gameObject.AddComponent<AudioSource>();

        // Asigna los listeners
        if (openHelpButton != null)
            openHelpButton.onClick.AddListener(OpenHelpPanel);

        if (playSoundButton != null)
            playSoundButton.onClick.AddListener(PlayOptionSound);

        if (closeButton != null)
            closeButton.onClick.AddListener(CloseHelpPanel);
        PlayOptionSound();
    }

    public void OpenHelpPanel()
    {
        if (helpPanel != null)
            helpPanel.SetActive(true);
        PlayOptionSound();
    }

    public void CloseHelpPanel()
    {
        if (helpPanel != null)
            helpPanel.SetActive(false);

        if (audioSource.isPlaying)
            audioSource.Stop();
    }

    private void PlayOptionSound()
    {
        if (PlayerController.instance == null)
        {
            Debug.LogWarning("PlayerController.instance no est� disponible.");
            return;
        }

        // Obt�n la opci�n actual (ajusta el nombre si tu m�todo es diferente)
        Opciones option = PlayerController.instance.GetPositionOption();
        if (option == null)
        {
            Debug.LogWarning("No se encontr� la opci�n actual.");
            return;
        }
        Debug.Log(option.sonido);
        description.text = option.descripcion_quechua;
        string nameSound = option.sonido.Replace(".mp3", "");
        string nameImage = option.imagen.Replace(".png", "");
        image.sprite = Resources.Load<Sprite>("images/" + nameImage);
        // El campo 'sonido' debe contener el nombre del archivo de sonido (sin extensi�n)
        string soundPath = "todos/descripcion_" + nameSound;
        AudioClip clip = Resources.Load<AudioClip>(soundPath);

        if (clip != null)
        {
            audioSource.clip = clip;
            audioSource.Play();
        }
        else
        {
            Debug.LogWarning("No se encontr� el sonido en: Resources/" + soundPath);
        }
    }
}
