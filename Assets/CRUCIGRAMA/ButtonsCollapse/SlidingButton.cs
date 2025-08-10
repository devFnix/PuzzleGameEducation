using UnityEngine;
using UnityEngine.UI;
using PrimeTween;

public class SlidingButton : MonoBehaviour
{
    [SerializeField] private Button toggleButton;

    [Header("Arrastra aquí el panel que quieres mostrar/ocultar")]
    [SerializeField] private GameObject panelToToggle;

    [Header("Duración de la animación (segundos)")]
    [SerializeField] private float animDuration = 0.4f;

    [Header("Tipo de animación")]
    [SerializeField] private Ease animEase = Ease.OutCubic;

    private CanvasGroup panelCanvasGroup;
    private RectTransform panelRect;
    private Vector2 hiddenPos;
    private Vector2 shownPos;
    private bool isPanelActive = false;
    private Sequence currentSequence;
    private Opciones optionCurrent;
    [SerializeField] private RamdomWordCruci ramdomWordCruci;
    [SerializeField] public HelpMenuCrucigrama helpMenuCrucigrama;
    void Awake()
    {
        if (toggleButton == null)
        {
            Debug.LogError("Debes asignar el botón en el campo 'toggleButton' del inspector.");
            enabled = false;
            return;
        }
        if (panelToToggle == null)
        {
            Debug.LogError("Debes asignar el panel en el campo 'panelToToggle' del inspector.");
            enabled = false;
            return;
        }

        // Asegúrate de que el panel tenga CanvasGroup para animar el fade
        panelCanvasGroup = panelToToggle.GetComponent<CanvasGroup>();
        if (!!helpMenuCrucigrama)
            helpMenuCrucigrama = FindObjectOfType<HelpMenuCrucigrama>();
        if (panelCanvasGroup == null)
            panelCanvasGroup = panelToToggle.AddComponent<CanvasGroup>();

        panelRect = panelToToggle.GetComponent<RectTransform>();
        if (panelRect == null)
        {
            Debug.LogError("El panel debe tener RectTransform.");
            enabled = false;
            return;
        }

        // Posición mostrada (la actual)
        shownPos = panelRect.anchoredPosition;
        // Posición oculta (fuera de pantalla a la izquierda)
        hiddenPos = shownPos + new Vector2(-panelRect.rect.width - 40, 0);

        // Inicialmente oculto
        panelRect.anchoredPosition = hiddenPos;
        panelCanvasGroup.alpha = 0f;
        panelToToggle.SetActive(false);
        isPanelActive = false;

        toggleButton.onClick.AddListener(TogglePanel);
        if (!panelToToggle.activeInHierarchy)
            panelToToggle.SetActive(true);

        // Now start your tween
        //PrimeTween.Tween(...);
    }
    private void Start()
    {
            panelToToggle?.SetActive(false);
    }
    void TogglePanel()
    {
        if (currentSequence.isAlive)
            currentSequence.Stop();

        if (!isPanelActive)
        {
            helpMenuCrucigrama.OpenHelpPanel();
            panelToToggle.SetActive(true);
            // Animar entrada: fade, scale y slide desde la izquierda
            panelRect.localScale = Vector3.one * 0.9f;
            currentSequence = Sequence.Create()
                .Group(Tween.UIAnchoredPosition(panelRect, shownPos, animDuration, animEase))
                .Group(Tween.Alpha(panelCanvasGroup, 1f, animDuration, animEase))
                .Group(Tween.Scale(panelRect, Vector3.one, animDuration, animEase));
        }
        else
        {
            // Animar salida: fade, scale y slide a la izquierda
            helpMenuCrucigrama.CloseHelpPanel();
            currentSequence = Sequence.Create()
                .Group(Tween.UIAnchoredPosition(panelRect, hiddenPos, animDuration, animEase))
                .Group(Tween.Alpha(panelCanvasGroup, 0f, animDuration, animEase))
                .Group(Tween.Scale(panelRect, Vector3.one * 0.9f, animDuration, animEase))
                .ChainCallback(() => panelToToggle.SetActive(false));
        }
        isPanelActive = !isPanelActive;
    }
    public void OpenPanel(Opciones option, int position)
    {
        ramdomWordCruci.ClearAll();
        optionCurrent = option;
        ramdomWordCruci.InsertOption(option);
        PlayerController.instance.SetCurrentOption(position);
        TogglePanel();
    }
    public void ClosePanel() { 
        helpMenuCrucigrama.CloseHelpPanel();
    }
    void OnDestroy()
    {
        if (currentSequence.isAlive)
            currentSequence.Stop();
    }
}