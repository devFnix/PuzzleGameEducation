using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CardOption : MonoBehaviour
{
    public PlayerController playerController; 
    private Image optionImage;
    private TextMeshProUGUI optionTitle;

    private string imageObjectName = "imagen"; // Nombre del objeto imagen a buscar
    private string titleObjectName = "texto"; // Nombre del objeto texto a buscar

    [SerializeField] Sprite mySprite;
    [SerializeField] string title;

    private void Awake()
    {
        // Buscar automáticamente componentes si no están asignados
        FindComponents();
    }

    // Método para buscar componentes por nombre
    public void FindComponents()
    {
        // Si la imagen no está asignada, buscarla por nombre
        if (optionImage == null)
        {
            // Buscar entre los hijos directos
            foreach (Transform child in transform)
            {
                // Comprueba si el nombre del hijo contiene "imagen" (insensible a mayúsculas/minúsculas)
                if (child.name.ToLower().Contains(imageObjectName.ToLower()))
                {
                    optionImage = child.GetComponent<Image>();
                    if (optionImage == null)
                        optionImage = child.gameObject.AddComponent<Image>();
                    break;
                }
            }

            // Si aún no la encuentra, buscar más profundamente
            if (optionImage == null)
            {
                Image[] images = GetComponentsInChildren<Image>();
                foreach (Image img in images)
                {
                    if (img.gameObject.name.ToLower().Contains(imageObjectName.ToLower()))
                    {
                        optionImage = img;
                        break;
                    }
                }
            }
        }

        // Si el texto no está asignado, buscarlo por nombre
        if (optionTitle == null)
        {
            foreach (Transform child in transform)
            {
                if (child.name.ToLower().Contains(titleObjectName.ToLower()))
                {
                    optionTitle = child.GetComponent<TextMeshProUGUI>();
                    if (optionTitle == null)
                        optionTitle = child.gameObject.AddComponent<TextMeshProUGUI>();
                    break;
                }
            }

            // Si aún no lo encuentra, buscar más profundamente
            if (optionTitle == null)
            {
                TextMeshProUGUI[] texts = GetComponentsInChildren<TextMeshProUGUI>();
                foreach (TextMeshProUGUI txt in texts)
                {
                    if (txt.gameObject.name.ToLower().Contains(titleObjectName.ToLower()))
                    {
                        optionTitle = txt;
                        break;
                    }
                }
            }
        }

        Debug.Log("Componentes encontrados - Imagen: " + (optionImage != null) + ", Título: " + (optionTitle != null));
    }

    private void Start()
    {
        playerController = GameObject.FindObjectOfType<PlayerController>();
        SetupOption(mySprite, title);
    }
    // Método para configurar la opción con datos
    public void SetupOption(Sprite imageSprite, string title)
    {
        // Asegurarse de que tenemos los componentes necesarios
        if (optionImage == null || optionTitle == null)
        {
            FindComponents();
        }

        // Establecer sprite y texto
        if (optionImage != null && imageSprite != null)
            optionImage.sprite = imageSprite;

        if (optionTitle != null)
            optionTitle.text = title;
    }
    public void SelectedGame()
    {
        playerController.SetGameName(title.ToLower());
    }
}
