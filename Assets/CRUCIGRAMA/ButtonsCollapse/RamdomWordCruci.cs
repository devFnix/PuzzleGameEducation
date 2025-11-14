using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
using Unity.VisualScripting.Antlr3.Runtime;
using UnityEngine;
using UnityEngine.UI;
public class RamdomWordCruci : MonoBehaviour
{
    [SerializeField]
    public GameObject panelLetrasGame;
    RectTransform panelLetras;
    public Button buttonPrefab;
    public string selectedWord;
    private string wordShow;// = { "Wasi","Punku","Wayk�una wasi","Hisp�ana wasi","Pu�una wasi","Tiyana wasi"};
    public List<Button> listaButtons = new List<Button>();
    public string concatenatedString = "";
    public Text concatenatedText;
    public List<Button> visitButton = new List<Button>(); // Lista de botones visitados
    CruciAristas cruciAristas;
    Niveles niveles = new Niveles();

    void Start()
    {
        panelLetras = panelLetrasGame.GetComponent<RectTransform>();
        cruciAristas = FindObjectOfType<CruciAristas>();
        //confirmButton = GameObject.Find("ButtonPLAY")?.GetComponent<Button>();
        //concatenatedText = GameObject.Find("TextConcat")?.GetComponent<Text>();
        if (concatenatedText != null)
        {
            concatenatedText.text = concatenatedString;
        }
        else
        {
            concatenatedText = GameObject.Find("TextConcat")?.GetComponent<Text>();
        }
        GenerateButtons();
    }
    public void InsertOption(Opciones option)
    {
        Debug.Log("hola" + option.opciones);
        wordShow = ""; // Limpiar la lista de palabras antes de agregar una nueva
        ClearAll();
        ClearAristas();
        if (option != null)
        {
            string word = option.opciones;
            string description = option.descripcion_quechua;
            string imagenName = option.imagen;
            string sonidoName = option.sonido;
            wordShow = word;
            GenerateButtons();

        }
    }
    private void OnConfirm()
    {
        ClearAll();
        GenerateButtons();
    }
    public void ClearAristas()
    {
        concatenatedString = "";
        if (cruciAristas != null)
        {
            cruciAristas.ClearLines();
        }
        visitButton.Clear();
        foreach (Button button in listaButtons)
        {
            button.interactable = true;
        }
        if (concatenatedText != null)
        {
            concatenatedText.text = concatenatedString;
        }
    }
    public void ClearAll()
    {
        concatenatedString = "";
        if (cruciAristas != null)
        {
            cruciAristas.ClearLines();
        }
        // CORRECCIÓN 1: Destruir botones específicos de la lista primero
        foreach (Button button in listaButtons)
        {
            if (button != null)
            {
                Destroy(button.gameObject); // Cambiar DestroyImmediate por Destroy
            }
        }
        listaButtons.Clear(); // CORRECCIÓN 2: Limpiar la lista después de destruir

        foreach (Transform child in panelLetras)
        {
            Destroy(child.gameObject);
        }
        visitButton.Clear(); // Limpiar la lista de botones visitados
    }

    void GenerateButtons()
    {
        int index = 0;
        selectedWord = wordShow;
        if (selectedWord?.Length > 0)
        {
            Debug.Log($"Palabra seleccionada {selectedWord}");
            string wordShuffle = new string(selectedWord.ToCharArray().OrderBy(x => Random.value).ToArray());
            // Vector2[] positions = new Vector2[selectedWord.Length];
            // char[] letters = new char[selectedWord.Length];

            // for (int i = 0; i < selectedWord.Length; i++)
            // {
            //     char letter = selectedWord[i];
            //     letters[i] = letter;

            //     // Generar posiciones aleatorias dentro del panel
            //     RectTransform panelRect = panelLetras.GetComponent<RectTransform>();
            //     float randomX = Random.Range(panelRect.rect.xMin, panelRect.rect.xMax);
            //     float randomY = Random.Range(panelRect.rect.yMin, panelRect.rect.yMax);

            //     positions[i] = new Vector2(randomX, randomY);
            // }

            // GenerateButtonsOnScreen(letters, positions);
            // 1. Obtener el centro y el radio del panel
            Vector2[] positions = new Vector2[wordShuffle.Length];
            char[] letters = new char[wordShuffle.Length];
            RectTransform panelRect = panelLetras.GetComponent<RectTransform>();
            Vector2 center = panelRect.rect.center;
            // Usamos la dimensión más pequeña (alto o ancho) para que el círculo siempre quepa
            float radius = Mathf.Min(panelRect.rect.width, panelRect.rect.height) * 0.45f; // 45% del tamaño para dejar un margen

            // 2. Calcular el ángulo entre cada letra
            int cantidadDeLetras = wordShuffle.Length;
            float anguloPorLetra = 360f / cantidadDeLetras;

            // 3. Recorrer cada letra para calcular su posición
            for (int i = 0; i < cantidadDeLetras; i++)
            {
                char letter = wordShuffle[i];
                letters[i] = letter;
                float anguloActual = (i * anguloPorLetra) - 90f;
                float anguloEnRadianes = anguloActual * Mathf.Deg2Rad;

                // 4. Calcular las coordenadas (x, y) en el círculo
                float x = center.x + radius * Mathf.Cos(anguloEnRadianes);
                float y = center.y + radius * Mathf.Sin(anguloEnRadianes);
                positions[i] = new Vector2(x, y);
            }
            GenerateButtonsOnScreen(letters, positions);
        }

    }

    void GenerateButtonsOnScreen(char[] letters, Vector2[] positions)
    {
        listaButtons.Clear(); // Limpiar la lista para evitar conflictos

        for (int i = 0; i < letters.Length; i++)
        {
            Button newButton = Instantiate(buttonPrefab, panelLetras);
            RectTransform buttonRect = newButton.GetComponent<RectTransform>();

            // Asignar la posici�n recibida
            buttonRect.anchoredPosition = positions[i];

            // Asignar la letra al bot�n
            LetterCruci letraComponent = newButton.GetComponentInChildren<LetterCruci>();
            if (letraComponent != null)
            {
                letraComponent.Setear(i, letters[i].ToString()); // Setear el �ndice y letra
            }
            newButton.onClick.AddListener(() => OnButtonClick(newButton));

            listaButtons.Add(newButton); // Agregar el bot�n a la lista local
        }
    }

    void OnButtonClick(Button clickedButton)
    {
        int buttonIndex = clickedButton.GetComponent<LetterCruci>().position;
        string letter = clickedButton.GetComponent<LetterCruci>().texto;
        visitButton.Add(clickedButton); // Agregar el bot�n a la lista de visitados

        // Debug.Log($"Button clicked: {buttonIndex}, {letter}");
        HandleButtonClick(buttonIndex, letter);
        TryDrawLine(); // Intentar dibujar una l�nea si hay al menos 2 botones visitados
    }

    void HandleButtonClick(int buttonIndex, string letter)
    {
        DisableButton(buttonIndex, letter);
    }

    void DisableButton(int buttonIndex, string letter)
    {
        if (buttonIndex >= 0 && buttonIndex < listaButtons.Count)
        {
            Button buttonToDisable = listaButtons[buttonIndex];
            buttonToDisable.interactable = false;

            concatenatedString += letter;
            if (concatenatedText != null)
            {
                concatenatedText.text = concatenatedString;
            }
        }
    }

    void TryDrawLine()
    {
        if (visitButton.Count < 2 || cruciAristas == null)
            return;

        Button lastButton = visitButton[visitButton.Count - 1];
        Button secondLastButton = visitButton[visitButton.Count - 2];

        Vector2 startPos = secondLastButton.GetComponent<RectTransform>().anchoredPosition;
        Vector2 endPos = lastButton.GetComponent<RectTransform>().anchoredPosition;

        // Llamar directamente a la funci�n para dibujar la l�nea
        cruciAristas.DibujarLine(startPos, endPos);
    }
    private void Update()
    {
        if (concatenatedString?.Length == selectedWord?.Length && selectedWord?.Length > 0)
        {
            // Debug.Log("misma longitud");
            if (concatenatedString == selectedWord)
            {
                Debug.Log("Iguales");
                int pos = PlayerController.instance.GetCurrentOption();
                AudioControllerCoIn.instance.PlayCorrectSound();
                //delay de 1 segundo
                StartCoroutine(ShowRespuestaWithDelay(pos));
                //crosswordManager.ShowRespuesta(pos);
                // words.Remove(selectedWord);

                // if (words.Count > 0)
                // {
                //     OnConfirm(); // Generar nueva palabra si a�n hay palabras disponibles
                // }
                // else
                // {
                //     Debug.Log("�Completaste todas las palabras!");
                //     // Aqu� puedes agregar c�digo para manejar cuando se completan todas las palabras
                //     // Por ejemplo, cargar otra escena o mostrar un mensaje de victoria
                // }
                selectedWord = "";
            }
            else
            {
                Debug.Log("Desiguales Cruci");
                ClearAristas();
            }
        }
    }
    private IEnumerator ShowRespuestaWithDelay(int pos)
    {
        // Espera a que termine el sonido de AudioControllerCoIn.instance.PlayCorrectSound()
        // Si PlayCorrectSound() no es asíncrono, simplemente espera 1 segundo
        yield return new WaitForSeconds(2f);
        CrosswordManager crosswordManager = FindObjectOfType<CrosswordManager>();
        crosswordManager.ShowRespuesta(pos);
        SlidingButton helpMenu = FindAnyObjectByType<SlidingButton>();
        helpMenu.TogglePanel();

    }
}