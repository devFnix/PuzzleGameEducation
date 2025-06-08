using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class LetterCell : MonoBehaviour, IPointerDownHandler, IPointerEnterHandler, IPointerUpHandler
{
    public int row;
    public int col;
    public string letter;
    public Text letterText;
    public WordConnectManager wordConnectManager;
    private bool isSelected = false;
    private bool isInteractable = true;

    void Awake()
    {
        letterText = GetComponentInChildren<Text>();
        if (letterText == null)
        {
            Debug.LogError("El prefab de la celda de letra debe tener un componente Text como hijo.");
        }
    }

    public void SetLetter()
    {
        letterText.text = letter;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (isInteractable && wordConnectManager != null)
        {
            wordConnectManager.StartPath(this);
            isSelected = true;
        }
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        if (isInteractable && isSelected && wordConnectManager != null)
        {
            wordConnectManager.ContinuePath(this);
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (isInteractable && wordConnectManager != null)
        {
            wordConnectManager.EndPath();
            isSelected = false;
        }
    }

    public void Select()
    {
        GetComponent<Image>().color = Color.yellow; // Cambiar color al seleccionar
    }

    public void Deselect()
    {
        GetComponent<Image>().color = Color.white; // Volver al color original
        isSelected = false;
    }

    public void DisableInteraction()
    {
        isInteractable = false;
        GetComponent<Button>().interactable = false; // Opcional: deshabilitar el botón
        GetComponent<Image>().color = Color.gray; // Cambiar color para indicar que ya se usó
    }
}