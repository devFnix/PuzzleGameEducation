using UnityEngine;
using UnityEngine.UI;

public class CellView : MonoBehaviour
{
    public string letter = ""; // Almacena la letra de la celda
    public Text letterText;
    public Image background; // Arrastra aquí la imagen de fondo de la celda
    public int position = -1;
    public bool isVisible = false; // Indica si la celda es visible o no
    public bool isInteractive = false; // Indica si la celda es interactiva o no
    CrosswordManager crosswordManager;
    Button button;
    void Start()
    {
        button = GetComponent<Button>();
        button.interactable = isInteractive; // Configura la interactividad del botón
        if (isInteractive) isVisible = true;
        button.onClick.AddListener(() =>
        {
            if (crosswordManager != null)
            {
                crosswordManager.SelectCellOption(position);
            }
            else
            {
                Debug.LogError("ERROR: crosswordManager no está asignado en CellView.", this.gameObject);
            }
        });
    }
    public void SetCrossWM(CrosswordManager crosswordManager)
    {
        this.crosswordManager = crosswordManager;
    }
    public void SetLetter(char letter)
    {
        if (letterText != null)
        {
            this.letter = letter.ToString();
            letterText.text = letter.ToString();
            letterText.enabled = isVisible;
            if (letter >= '0' && letter <= '9') // Verifica si el carácter es un dígito
                position = int.Parse(letter.ToString()); // Asigna la posición basada en el dígito de la letra
            // Debug.Log($"Texto '{letter}' asignado a la UI en {gameObject.name}");
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
    void Update()
    {
        if (isInteractive) letterText.enabled = true;
        if(isVisible)  letterText.enabled = true;
    }
}