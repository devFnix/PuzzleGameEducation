using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using TMPro;

[Serializable]
public class WordToFind
{
    public string word;
    public bool found = false;
}

public class WordSearchGame : MonoBehaviour
{
    [Header("Configuraci�n")]
    [SerializeField] private int gridWidthHeight = 10;
    private int gridWidth = 10;
    private int gridHeight = 10;
    [SerializeField] private GameObject letterPrefab;
    [SerializeField] private GridLayoutGroup gridContainer;
    private Transform gridContainerTransform;
    [SerializeField] private Color selectionColor = Color.yellow;
    [SerializeField] private Color correctColor = Color.green;
    [SerializeField] private List<WordToFind> wordsToFind = new List<WordToFind>();
    // [SerializeField] private Transform wordListContainer;
    [SerializeField] private GameObject wordItemPrefab;

    [Header("Referencias de UI")]
    [SerializeField] private TextMeshProUGUI gameStateText;

    // Matriz para almacenar las letras en la cuadr�cula
    private LetraP[,] letterGrid;

    // Para el manejo de la selecci�n
    private bool isSelecting = false;
    private LetraP firstSelectedLetter;
    private LetraP lastSelectedLetter;
    private List<LetraP> currentSelection = new List<LetraP>();
    private Vector2 selectionDirection = Vector2.zero; // Direcci�n de la selecci�n actual
    public List<string> listWordsFound = new List<string>();
    // Para el manejo de palabras encontradas
    private int wordsFound = 0;
    Niveles niveles = new Niveles();
    // public PlayerController playerController;
    private void Start()
    {
        gridHeight = gridWidthHeight;
        gridWidth = gridWidthHeight;
        gridContainer.constraintCount = gridWidthHeight;
        gridContainerTransform = gridContainer.transform;

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
    void Play()
    {
        if (PlayerController.instance != null)
        {
            niveles = PlayerController.instance.levelSelected;
            List<WordToFind> wordsToFind_ = new List<WordToFind>();
            foreach (Opciones item in niveles.opciones)
            {
                WordToFind w = new WordToFind();
                w.word = item.opciones;
                wordsToFind_.Add(w);
            }
            wordsToFind = wordsToFind_;
            InitializeGame();
        }
    }

    private void InitializeGame()
    {
        // Crear la cuadr�cula
        CreateGrid();

        // Colocar palabras en la cuadr�cula
        PlaceWordsInGrid();

        // Rellenar espacios vac�os con letras aleatorias
        FillEmptySpacesWithRandomLetters();

        // Mostrar lista de palabras por encontrar
        // DisplayWordList();

        // Actualizar el estado del juego
        UpdateGameState();
    }

    private void CreateGrid()
    {
        letterGrid = new LetraP[gridWidth, gridHeight];

        float cellSize = 1.0f;
        float startX = -(gridWidth - 1) * cellSize / 2;
        float startY = (gridHeight - 1) * cellSize / 2;

        for (int y = 0; y < gridHeight; y++)
        {
            for (int x = 0; x < gridWidth; x++)
            {
                Vector3 position = new Vector3(startX + x * cellSize, startY - y * cellSize, 0);
                GameObject letterObj = Instantiate(letterPrefab, position, Quaternion.identity, gridContainerTransform);

                LetraP letterScript = letterObj.GetComponent<LetraP>();
                letterScript.Initialize(x, y, ' ', this);

                letterGrid[x, y] = letterScript;
            }
        }
    }

    private void PlaceWordsInGrid()
    {
        // Para cada palabra en la lista
        foreach (WordToFind wordToFind in wordsToFind)
        {
            string word = wordToFind.word.ToUpper();
            bool placed = false;
            int maxAttempts = 100;

            while (!placed && maxAttempts > 0)
            {
                // Elegir una direcci�n aleatoria
                WordDirection direction = (WordDirection)UnityEngine.Random.Range(0, 4);

                // Obtener posici�n inicial adecuada seg�n la direcci�n
                int startX, startY;
                GetValidStartPosition(word.Length, direction, out startX, out startY);

                // Verificar si podemos colocar la palabra en esta posici�n y direcci�n
                if (CanPlaceWord(word, startX, startY, direction))
                {
                    PlaceWord(word, startX, startY, direction);
                    placed = true;
                }

                maxAttempts--;
            }

            if (!placed)
            {
                Debug.LogWarning($"No se pudo colocar la palabra: {word}");
            }
        }
    }

    private void GetValidStartPosition(int wordLength, WordDirection direction, out int startX, out int startY)
    {
        startX = 0;
        startY = 0;

        switch (direction)
        {
            case WordDirection.Horizontal:
                startX = UnityEngine.Random.Range(0, gridWidth - wordLength + 1);
                startY = UnityEngine.Random.Range(0, gridHeight);
                break;
            case WordDirection.Vertical:
                startX = UnityEngine.Random.Range(0, gridWidth);
                startY = UnityEngine.Random.Range(0, gridHeight - wordLength + 1);
                break;
            /*case WordDirection.DiagonalDown:
                startX = UnityEngine.Random.Range(0, gridWidth - wordLength + 1);
                startY = UnityEngine.Random.Range(0, gridHeight - wordLength + 1);
                break;
            case WordDirection.DiagonalUp:
                startX = UnityEngine.Random.Range(0, gridWidth - wordLength + 1);
                startY = UnityEngine.Random.Range(wordLength - 1, gridHeight);
                break;*/
            case WordDirection.HorizontalReverse:
                startX = UnityEngine.Random.Range(wordLength - 1, gridWidth);
                startY = UnityEngine.Random.Range(0, gridHeight);
                break;
            case WordDirection.VerticalReverse:
                startX = UnityEngine.Random.Range(0, gridWidth);
                startY = UnityEngine.Random.Range(wordLength - 1, gridHeight);
                break;
                /*case WordDirection.DiagonalDownReverse:
                    startX = UnityEngine.Random.Range(wordLength - 1, gridWidth);
                    startY = UnityEngine.Random.Range(0, gridHeight - wordLength + 1);
                    break;
                case WordDirection.DiagonalUpReverse:
                    startX = UnityEngine.Random.Range(wordLength - 1, gridWidth);
                    startY = UnityEngine.Random.Range(wordLength - 1, gridHeight);
                    break;*/
        }
    }

    private bool CanPlaceWord(string word, int startX, int startY, WordDirection direction)
    {
        int dx = 0, dy = 0;
        GetDirectionOffsets(direction, out dx, out dy);

        for (int i = 0; i < word.Length; i++)
        {
            int x = startX + i * dx;
            int y = startY + i * dy;

            // Verificar l�mites de la cuadr�cula
            if (x < 0 || x >= gridWidth || y < 0 || y >= gridHeight)
                return false;

            // Verificar si la celda ya tiene una letra
            char currentLetter = letterGrid[x, y].GetLetter();

            // Si la celda est� vac�a o tiene la misma letra, podemos usarla
            if (currentLetter != ' ' && currentLetter != word[i])
                return false;
        }

        return true;
    }

    private void PlaceWord(string word, int startX, int startY, WordDirection direction)
    {
        int dx = 0, dy = 0;
        GetDirectionOffsets(direction, out dx, out dy);

        List<LetraP> wordLetters = new List<LetraP>();

        for (int i = 0; i < word.Length; i++)
        {
            int x = startX + i * dx;
            int y = startY + i * dy;

            letterGrid[x, y].SetLetter(word[i]);
            wordLetters.Add(letterGrid[x, y]);
        }

        // Registrar las letras que forman la palabra para poderlas verificar despu�s
        for (int i = 0; i < wordLetters.Count; i++)
        {
            wordLetters[i].AddToWord(word, direction);
        }
    }

    private void GetDirectionOffsets(WordDirection direction, out int dx, out int dy)
    {
        dx = 0;
        dy = 0;

        switch (direction)
        {
            case WordDirection.Horizontal:
                dx = 1; dy = 0;
                break;
            case WordDirection.Vertical:
                dx = 0; dy = 1;
                break;
            /*case WordDirection.DiagonalDown:
                dx = 1; dy = 1;
                break;
            case WordDirection.DiagonalUp:
                dx = 1; dy = -1;
                break;*/
            case WordDirection.HorizontalReverse:
                dx = -1; dy = 0;
                break;
            case WordDirection.VerticalReverse:
                dx = 0; dy = -1;
                break;
                /*case WordDirection.DiagonalDownReverse:
                    dx = -1; dy = 1;
                    break;
                case WordDirection.DiagonalUpReverse:
                    dx = -1; dy = -1;
                    break;*/
        }
    }

    private void FillEmptySpacesWithRandomLetters()
    {
        for (int y = 0; y < gridHeight; y++)
        {
            for (int x = 0; x < gridWidth; x++)
            {
                if (letterGrid[x, y].GetLetter() == ' ')
                {
                    // Generar una letra aleatoria (A-Z)
                    char randomLetter = (char)('A' + UnityEngine.Random.Range(0, 26));
                    letterGrid[x, y].SetLetter(randomLetter);
                }
            }
        }
    }

    // private void DisplayWordList()
    // {
    //     foreach (Transform child in wordListContainer)
    //     {
    //         Destroy(child.gameObject);
    //     }

    //     foreach (WordToFind word in wordsToFind)
    //     {
    //         GameObject wordItem = Instantiate(wordItemPrefab, wordListContainer);
    //         TextMeshProUGUI textComponent = wordItem.GetComponent<TextMeshProUGUI>();

    //         if (textComponent != null)
    //         {
    //             textComponent.text = word.word;

    //             if (word.found)
    //             {
    //                 textComponent.fontStyle = FontStyles.Strikethrough;
    //                 textComponent.color = correctColor;
    //             }
    //         }
    //     }
    // }

    // M�todo para iniciar la selecci�n
    public void StartSelection(LetraP letter)
    {
        isSelecting = true;
        firstSelectedLetter = letter;
        lastSelectedLetter = letter;
        currentSelection.Clear();
        currentSelection.Add(letter);
        letter.SetHighlight(selectionColor);
        selectionDirection = Vector2.zero; // Resetear la direcci�n
    }

    // M�todo para continuar la selecci�n mientras se arrastra
    public void ContinueSelection(LetraP letter)
    {
        if (!isSelecting || letter == lastSelectedLetter) return;

        // Si es la segunda letra seleccionada, establecer la direcci�n
        if (currentSelection.Count == 1)
        {
            selectionDirection = new Vector2(
                letter.GetX() - firstSelectedLetter.GetX(),
                letter.GetY() - firstSelectedLetter.GetY()
            );

            // Normalizar la direcci�n
            if (selectionDirection.x != 0) selectionDirection.x = selectionDirection.x / Mathf.Abs(selectionDirection.x);
            if (selectionDirection.y != 0) selectionDirection.y = selectionDirection.y / Mathf.Abs(selectionDirection.y);
        }

        // Verificar si la letra est� en la direcci�n correcta
        Vector2 currentDirection = new Vector2(
            letter.GetX() - lastSelectedLetter.GetX(),
            letter.GetY() - lastSelectedLetter.GetY()
        );

        // Normalizar la direcci�n actual
        if (currentDirection.x != 0) currentDirection.x = currentDirection.x / Mathf.Abs(currentDirection.x);
        if (currentDirection.y != 0) currentDirection.y = currentDirection.y / Mathf.Abs(currentDirection.y);

        // Verificar si mantiene la direcci�n y es adyacente
        if (currentDirection == selectionDirection)
        {
            // Si la letra ya est� en la selecci�n, eliminar letras hasta esa posici�n
            int existingIndex = currentSelection.IndexOf(letter);
            if (existingIndex >= 0)
            {
                // Desmarcar las letras que ya no est�n seleccionadas
                for (int i = currentSelection.Count - 1; i > existingIndex; i--)
                {
                    if (!currentSelection[i].IsFound())
                    {
                        currentSelection[i].ClearHighlight();
                    }
                    currentSelection.RemoveAt(i);
                }
                lastSelectedLetter = letter;
                return;
            }

            // Verificar que la letra sea adyacente en l�nea recta
            bool isAdjacent = TryFillGapInSelection(letter);

            if (isAdjacent)
            {
                lastSelectedLetter = letter;
                if (!currentSelection.Contains(letter))
                {
                    currentSelection.Add(letter);
                    letter.SetHighlight(selectionColor);
                }
            }
        }
    }

    // M�todo para llenar el espacio entre la �ltima letra seleccionada y la actual
    private bool TryFillGapInSelection(LetraP targetLetter)
    {
        int dx = (int)selectionDirection.x;
        int dy = (int)selectionDirection.y;

        int steps = 0;
        int maxSteps = Math.Max(gridWidth, gridHeight);

        int currentX = lastSelectedLetter.GetX();
        int currentY = lastSelectedLetter.GetY();

        // Verificar que la letra objetivo est� en la misma l�nea de direcci�n
        while (steps < maxSteps)
        {
            currentX += dx;
            currentY += dy;
            steps++;

            // Si llegamos a la letra objetivo, es v�lida
            if (currentX == targetLetter.GetX() && currentY == targetLetter.GetY())
            {
                // Rellenar las letras intermedias si hay alg�n salto
                if (steps > 1)
                {
                    int fillX = lastSelectedLetter.GetX();
                    int fillY = lastSelectedLetter.GetY();

                    for (int i = 0; i < steps - 1; i++)
                    {
                        fillX += dx;
                        fillY += dy;

                        // Verificar l�mites
                        if (fillX >= 0 && fillX < gridWidth && fillY >= 0 && fillY < gridHeight)
                        {
                            LetraP fillLetter = letterGrid[fillX, fillY];
                            if (!currentSelection.Contains(fillLetter))
                            {
                                currentSelection.Add(fillLetter);
                                fillLetter.SetHighlight(selectionColor);
                            }
                        }
                    }
                }
                return true;
            }

            // Si nos salimos de los l�mites, no es v�lida
            if (currentX < 0 || currentX >= gridWidth || currentY < 0 || currentY >= gridHeight)
            {
                return false;
            }
        }

        return false;
    }

    // M�todo para finalizar la selecci�n
    public void EndSelection()
    {
        if (!isSelecting) return;

        isSelecting = false;

        // Verificar si la palabra seleccionada coincide con alguna palabra de la lista
        string selectedWord = GetSelectedWord();
        bool wordFound = CheckIfWordIsFound(selectedWord);

        if (wordFound)
        {
            // Mantener el resaltado en las letras con el color correcto
            foreach (LetraP letter in currentSelection)
            {
                letter.SetHighlight(correctColor);
                letter.SetFound(true);
            }

            // Actualizar UI
            UpdateGameState();
            AudioControllerCoIn.instance.PlayCorrectSound();
            listWordsFound.Add(selectedWord.ToUpper());
        }
        else
        {
            // Borrar la selecci�n
            foreach (LetraP letter in currentSelection)
            {
                if (!letter.IsFound())
                {
                    letter.ClearHighlight();
                }
            }
            AudioControllerCoIn.instance.PlayIncorrectSound();
        }

        currentSelection.Clear();
        selectionDirection = Vector2.zero;
    }

    private string GetSelectedWord()
    {
        string word = "";
        foreach (LetraP letter in currentSelection)
        {
            word += letter.GetLetter();
        }
        return word;
    }

    private bool CheckIfWordIsFound(string selectedWord)
    {
        // Verificar si la palabra est� en la lista de palabras a encontrar
        foreach (WordToFind wordToFind in wordsToFind)
        {
            string normalWord = wordToFind.word.ToUpper();

            if (normalWord == selectedWord)
            {
                if (!wordToFind.found)
                {
                    wordToFind.found = true;
                    wordsFound++;
                }
                return true;
            }

            // Tambi�n verificar la palabra al rev�s
            string reversedSelectedWord = new string(selectedWord.ToCharArray().Reverse().ToArray());
            if (normalWord == reversedSelectedWord)
            {
                if (!wordToFind.found)
                {
                    wordToFind.found = true;
                    wordsFound++;
                }
                return true;
            }
        }

        return false;
    }

    private void UpdateGameState()
    {
        // Actualizar la lista de palabras
        // DisplayWordList();

        // Verificar si el juego ha terminado
        if (wordsFound >= wordsToFind.Count)
        {
            gameStateText.text = "�Felicidades! Has encontrado todas las palabras.";
        }
        else
        {
            gameStateText.text = $"Palabras encontradas: {wordsFound}/{wordsToFind.Count}";
        }
    }

    // M�todo para obtener una letra en una posici�n espec�fica (usado por el raycasting)
    public LetraP GetLetterAt(int x, int y)
    {
        if (x >= 0 && x < gridWidth && y >= 0 && y < gridHeight)
        {
            return letterGrid[x, y];
        }
        return null;
    }
}

public enum WordDirection
{
    Horizontal,
    Vertical,
    //DiagonalDown,
    //DiagonalUp,
    HorizontalReverse,
    VerticalReverse,
    //DiagonalDownReverse,
    //DiagonalUpReverse
}
