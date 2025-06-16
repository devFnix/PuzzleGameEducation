using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using Unity.VisualScripting.Antlr3.Runtime;
using UnityEngine;
using UnityEngine.UI;

public class RandomWordGenerator : MonoBehaviour
{
    [SerializeField]
    public RectTransform panelLetras;
    public Button buttonPrefab;
    public Button confirmButton;
    public string selectedWord;
    private List<string> words;// = { "Wasi","Punku","Wayk�una wasi","Hisp�ana wasi","Pu�una wasi","Tiyana wasi"};
    public List<Button> listaButtons = new List<Button>();
    public string concatenatedString = "";
    Text concatenatedText;
    public List<Button> visitButton = new List<Button>(); // Lista de botones visitados
    CreateAristas createAristas;
    Niveles niveles = new Niveles();
    private void Start()
    {
        StartCoroutine(WaitPlayerController());
    }
    private IEnumerator WaitPlayerController()
    {
        // Espera hasta que PlayerController.instance y levelSelected y opciones est�n disponibles
        while (PlayerController.instance == null ||
               PlayerController.instance.levelSelected == null ||
               PlayerController.instance.levelSelected.opciones == null ||
               PlayerController.instance.levelSelected.opciones.Count == 0)
        {
            yield return null;
        }
        Play();
    }
    
    public void Play()
    {
       
        if (PlayerController.instance != null)
        {
            niveles = PlayerController.instance.levelSelected;
            List<string> wordsList = new List<string>();
            foreach (Opciones item in niveles.opciones)
            {
                wordsList.Add(item.opciones);
            }
            words = wordsList;
            createAristas = FindObjectOfType<CreateAristas>();
            confirmButton = GameObject.Find("ButtonPLAY")?.GetComponent<Button>();
            concatenatedText = GameObject.Find("TextConcat")?.GetComponent<Text>();
            if (concatenatedText != null)
            {
                concatenatedText.text = concatenatedString;
            }
            if (confirmButton != null)
            {
                confirmButton.onClick.AddListener(OnConfirm);
            }

            // Generar la primera ronda de botones al iniciar en modo no multijugador


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
        if (createAristas != null)
        {
            createAristas.ClearLines();
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

    void ClearAll()
    {
        foreach (Transform child in panelLetras)
        {
            Destroy(child.gameObject);
        }
        listaButtons.Clear();
        if (createAristas != null)
        {
            createAristas.ClearLines();
        }
        visitButton.Clear();
        concatenatedString = "";
        if (concatenatedText != null)
        {
            concatenatedText.text = concatenatedString;
        }
    }
 public int getCurrentPosition(string word){
    int index = 0;
    foreach (Opciones item in niveles.opciones)
    {
        if (item.opciones == word)
        {
            return index;
        }
        index++;
    }
    return -1;
 }

    void GenerateButtons()
    {
        int index = Random.Range(0, words.Count);
        selectedWord = words[index];
        int currentPosition = getCurrentPosition(selectedWord);
        //Debug.Log("currentPosition: " + currentPosition);
        PlayerController.instance.SetCurrentOption(currentPosition);
        Vector2[] positions = new Vector2[selectedWord.Length];
        char[] letters = new char[selectedWord.Length];

        for (int i = 0; i < selectedWord.Length; i++)
        {
            char letter = selectedWord[i];
            letters[i] = letter;

            // Generar posiciones aleatorias dentro del panel
            RectTransform panelRect = panelLetras.GetComponent<RectTransform>();
            float randomX = Random.Range(panelRect.rect.xMin, panelRect.rect.xMax);
            float randomY = Random.Range(panelRect.rect.yMin, panelRect.rect.yMax);

            positions[i] = new Vector2(randomX, randomY);
        }

        GenerateButtonsOnScreen(letters, positions);
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
            Letter letraComponent = newButton.GetComponentInChildren<Letter>();
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
        int buttonIndex = clickedButton.GetComponent<Letter>().position;
        string letter = clickedButton.GetComponent<Letter>().texto;
        visitButton.Add(clickedButton); // Agregar el bot�n a la lista de visitados

        Debug.Log($"Button clicked: {buttonIndex}, {letter}");
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
        if (visitButton.Count < 2 || createAristas == null)
            return;

        Button lastButton = visitButton[visitButton.Count - 1];
        Button secondLastButton = visitButton[visitButton.Count - 2];

        Vector2 startPos = secondLastButton.GetComponent<RectTransform>().anchoredPosition;
        Vector2 endPos = lastButton.GetComponent<RectTransform>().anchoredPosition;

        // Llamar directamente a la funci�n para dibujar la l�nea
        createAristas.DibujarLine(startPos, endPos);
    }
    private void Update()
    {
        if (concatenatedString?.Length == selectedWord?.Length)
        {
            if (concatenatedString == selectedWord)
            {
                Debug.Log("Iguales");
                words.Remove(selectedWord);
                AudioControllerCoIn.instance.PlayCorrectSound();
                if (words.Count > 0)
                {
                    OnConfirm(); // Generar nueva palabra si a�n hay palabras disponibles
                }
                else
                {
                    Debug.Log("�Completaste todas las palabras!");
                    // Aqu� puedes agregar c�digo para manejar cuando se completan todas las palabras
                    // Por ejemplo, cargar otra escena o mostrar un mensaje de victoria
                }
            }
            else
            {
                Debug.Log("Desiguales");
                AudioControllerCoIn.instance.PlayIncorrectSound();
                ClearAristas();
            }
        }
    }
}