using UnityEngine;
using UnityEngine.UI;

public class CellView : MonoBehaviour
{
    public Text letterText;
    public Image background; // Arrastra aquí la imagen de fondo de la celda

    public void SetLetter(char letter)
    {
        if (letterText != null)
        {
            letterText.text = letter.ToString();
            letterText.enabled = true;
            Debug.Log($"Texto '{letter}' asignado a la UI en {gameObject.name}");
        }
        else
        {
            Debug.LogError($"ERROR: El campo 'letterText' no está asignado en el prefab de celda.", this.gameObject);
        }
    }

    // Nuevo método para celdas vacías
    public void SetEmpty()
    {
        if (letterText != null)
        {
            letterText.enabled = false;
        }
        if (background != null)
        {
            // Opcional: haz que el fondo de las celdas vacías sea semi-transparente
            var tempColor = background.color;
            tempColor.a = 0f;
            background.color = tempColor;
        }
    }
} 