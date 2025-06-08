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
    [Header("Configuración")]
    [SerializeField] private int gridWidth = 10;
    [SerializeField] private int gridHeight = 10;
    [SerializeField] private GameObject letterPrefab;
    [SerializeField] private Transform gridContainer;
    [SerializeField] private Color selectionColor = Color.yellow;
    [SerializeField] private Color correctColor = Color.green;
    [SerializeField] private List<WordToFind> wordsToFind = new List<WordToFind>();
    [SerializeField] private Transform wordListContainer;
    [SerializeField] private GameObject wordItemPrefab;

    [Header("Referencias de UI")]
    [SerializeField] private TextMeshProUGUI gameStateText;

    // Matriz para almacenar las letras en la cuadrícula
    private LetraP[,] letterGrid;

    // Para el manejo de la selección
    private bool isSelecting = false;
    private LetraP firstSelectedLetter;
    private LetraP lastSelectedLetter;
    private List<LetraP> currentSelection = new List<LetraP>();
    private Vector2 selectionDirection = Vector2.zero; // Dirección de la selección actual

    // Para el manejo de palabras encontradas
    private int wordsFound = 0;
    Niveles niveles = new Niveles();
    public PlayerController playerController;
    void Start()
    {
        playerController = GameObject.FindObjectOfType<PlayerController>();
        if (playerController != null)
        {
            niveles = playerController.levelSelected;
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
        // Crear la cuadrícula
        CreateGrid();

        // Colocar palabras en la cuadrícula
        PlaceWordsInGrid();

        // Rellenar espacios vacíos con letras aleatorias
        FillEmptySpacesWithRandomLetters();

        // Mostrar lista de palabras por encontrar
        DisplayWordList();

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
                GameObject letterObj = Instantiate(letterPrefab, position, Quaternion.identity, gridContainer);

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
                // Elegir una dirección aleatoria
                WordDirection direction = (WordDirection)UnityEngine.Random.Range(0, 4);

                // Obtener posición inicial adecuada según la dirección
                int startX, startY;
                GetValidStartPosition(word.Length, direction, out startX, out startY);

                // Verificar si podemos colocar la palabra en esta posición y dirección
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

            // Verificar límites de la cuadrícula
            if (x < 0 || x >= gridWidth || y < 0 || y >= gridHeight)
                return false;

            // Verificar si la celda ya tiene una letra
            char currentLetter = letterGrid[x, y].GetLetter();

            // Si la celda está vacía o tiene la misma letra, podemos usarla
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

        // Registrar las letras que forman la palabra para poderlas verificar después
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

    private void DisplayWordList()
    {
        foreach (Transform child in wordListContainer)
        {
            Destroy(child.gameObject);
        }

        foreach (WordToFind word in wordsToFind)
        {
            GameObject wordItem = Instantiate(wordItemPrefab, wordListContainer);
            TextMeshProUGUI textComponent = wordItem.GetComponent<TextMeshProUGUI>();

            if (textComponent != null)
            {
                textComponent.text = word.word;

                if (word.found)
                {
                    textComponent.fontStyle = FontStyles.Strikethrough;
                    textComponent.color = correctColor;
                }
            }
        }
    }

    // Método para iniciar la selección
    public void StartSelection(LetraP letter)
    {
        isSelecting = true;
        firstSelectedLetter = letter;
        lastSelectedLetter = letter;
        currentSelection.Clear();
        currentSelection.Add(letter);
        letter.SetHighlight(selectionColor);
        selectionDirection = Vector2.zero; // Resetear la dirección
    }

    // Método para continuar la selección mientras se arrastra
    public void ContinueSelection(LetraP letter)
    {
        if (!isSelecting || letter == lastSelectedLetter) return;

        // Si es la segunda letra seleccionada, establecer la dirección
        if (currentSelection.Count == 1)
        {
            selectionDirection = new Vector2(
                letter.GetX() - firstSelectedLetter.GetX(),
                letter.GetY() - firstSelectedLetter.GetY()
            );

            // Normalizar la dirección
            if (selectionDirection.x != 0) selectionDirection.x = selectionDirection.x / Mathf.Abs(selectionDirection.x);
            if (selectionDirection.y != 0) selectionDirection.y = selectionDirection.y / Mathf.Abs(selectionDirection.y);
        }

        // Verificar si la letra está en la dirección correcta
        Vector2 currentDirection = new Vector2(
            letter.GetX() - lastSelectedLetter.GetX(),
            letter.GetY() - lastSelectedLetter.GetY()
        );

        // Normalizar la dirección actual
        if (currentDirection.x != 0) currentDirection.x = currentDirection.x / Mathf.Abs(currentDirection.x);
        if (currentDirection.y != 0) currentDirection.y = currentDirection.y / Mathf.Abs(currentDirection.y);

        // Verificar si mantiene la dirección y es adyacente
        if (currentDirection == selectionDirection)
        {
            // Si la letra ya está en la selección, eliminar letras hasta esa posición
            int existingIndex = currentSelection.IndexOf(letter);
            if (existingIndex >= 0)
            {
                // Desmarcar las letras que ya no están seleccionadas
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

            // Verificar que la letra sea adyacente en línea recta
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

    // Método para llenar el espacio entre la última letra seleccionada y la actual
    private bool TryFillGapInSelection(LetraP targetLetter)
    {
        int dx = (int)selectionDirection.x;
        int dy = (int)selectionDirection.y;

        int steps = 0;
        int maxSteps = Math.Max(gridWidth, gridHeight);

        int currentX = lastSelectedLetter.GetX();
        int currentY = lastSelectedLetter.GetY();

        // Verificar que la letra objetivo esté en la misma línea de dirección
        while (steps < maxSteps)
        {
            currentX += dx;
            currentY += dy;
            steps++;

            // Si llegamos a la letra objetivo, es válida
            if (currentX == targetLetter.GetX() && currentY == targetLetter.GetY())
            {
                // Rellenar las letras intermedias si hay algún salto
                if (steps > 1)
                {
                    int fillX = lastSelectedLetter.GetX();
                    int fillY = lastSelectedLetter.GetY();

                    for (int i = 0; i < steps - 1; i++)
                    {
                        fillX += dx;
                        fillY += dy;

                        // Verificar límites
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

            // Si nos salimos de los límites, no es válida
            if (currentX < 0 || currentX >= gridWidth || currentY < 0 || currentY >= gridHeight)
            {
                return false;
            }
        }

        return false;
    }

    // Método para finalizar la selección
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
        }
        else
        {
            // Borrar la selección
            foreach (LetraP letter in currentSelection)
            {
                if (!letter.IsFound())
                {
                    letter.ClearHighlight();
                }
            }
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
        // Verificar si la palabra está en la lista de palabras a encontrar
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

            // También verificar la palabra al revés
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
        DisplayWordList();

        // Verificar si el juego ha terminado
        if (wordsFound >= wordsToFind.Count)
        {
            gameStateText.text = "¡Felicidades! Has encontrado todas las palabras.";
        }
        else
        {
            gameStateText.text = $"Palabras encontradas: {wordsFound}/{wordsToFind.Count}";
        }
    }

    // Método para obtener una letra en una posición específica (usado por el raycasting)
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
