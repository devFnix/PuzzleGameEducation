using UnityEngine;
using PrimeTween;

public class PanelAnimationManager : MonoBehaviour
{
    void Start()
    {
        // Encuentra todos los paneles con el tag "PanelAnimation"
        GameObject[] panels = GameObject.FindGameObjectsWithTag("PanelAnimation");
        foreach (GameObject panel in panels)
        {
            // Asegura que cada panel tenga el componente auxiliar
            if (panel.GetComponent<PanelAnimator>() == null)
            {
                panel.AddComponent<PanelAnimator>();
            }
        }
    }
}

// Componente auxiliar para animar el panel al activarse
public class PanelAnimator : MonoBehaviour
{
    private Vector3 originalScale;
    private Vector3 originalPosition;
    private bool firstEnable = true;

    void Awake()
    {
        originalScale = transform.localScale;
        originalPosition = transform.localPosition;
    }

    void OnEnable()
    {
        if (firstEnable)
        {
            firstEnable = false;
            return; // Evita animar en el primer enable si ya está activo al inicio
        }

        // Mueve al centro de la pantalla y escala a 0
        transform.localScale = Vector3.zero;
        transform.localPosition = Vector3.zero;

        // Anima posición y escala a su valor original
        Tween.LocalPosition(transform, originalPosition, 0.3f, Ease.OutCubic);
        Tween.Scale(transform, originalScale, 0.3f, Ease.OutBack);
    }
    void OnDisable()
    {
        // Anima el escalado a 0 antes de desactivar
        Tween.Scale(transform, Vector3.zero, 0.2f, Ease.InBack);
    }
}
