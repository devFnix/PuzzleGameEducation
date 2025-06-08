using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Linq;

public class WordConnectManager : MonoBehaviour
{
    public GameObject letterCellPrefab;
    public RectTransform gridPanel;
    public RectTransform cluesPanel;
    public int gridRows = 6;
    public int gridCols = 6;
    public float cellSize = 60f;
    public float cellSpacing = 10f;
    public List<string> targetWords = new List<string> { "TRONCO", "BELLOTA", "PATO", "RAMA", "ARDILLA", "SETA", "CARACOL" };
    public string[] allLetters; // Letras para llenar la grilla
    public Dictionary<Vector2Int, LetterCell> gridCells = new Dictionary<Vector2Int, LetterCell>();
    public List<string> foundWords = new List<string>();
    public List<string> clueImageNames = new List<string> { "troncos", "bellota", "pato", "rama", "ardilla", "seta", "caracol" }; // Nombres de los archivos de imagen de las pistas

    private List<Vector2Int> currentPath = new List<Vector2Int>();
    private string currentWord = "";

    void Start()
    {
        InitializeGame();
    }

    void InitializeGame()
    {
        // Generar una lista de todas las letras necesarias para las palabras objetivo
        List<char> lettersForGrid = new List<char>();
        foreach (string word in targetWords)
        {
            lettersForGrid.AddRange(word.ToCharArray());
        }

        // Añadir letras aleatorias para llenar el resto de la grilla
        int remainingCells = gridRows * gridCols - lettersForGrid.Count;
        for (int i = 0; i < remainingCells; i++)
        {
            lettersForGrid.Add((char)('A' + Random.Range(0, 26)));
        }

        // Barajar las letras
        allLetters = lettersForGrid.OrderBy(x => Random.value).Select(x => x.ToString()).ToArray();

        GenerateGrid();
        DisplayClues();
    }

    void GenerateGrid()
    {
        gridPanel.GetComponent<GridLayoutGroup>().constraintCount = gridCols;
        gridPanel.GetComponent<GridLayoutGroup>().cellSize = new Vector2(cellSize, cellSize);
        gridPanel.GetComponent<GridLayoutGroup>().spacing = new Vector2(cellSpacing, cellSpacing);

        for (int row = 0; row < gridRows; row++)
        {
            for (int col = 0; col < gridCols; col++)
            {
                GameObject cellObj = Instantiate(letterCellPrefab, gridPanel);
                LetterCell cell = cellObj.GetComponent<LetterCell>();
                cell.row = row;
                cell.col = col;
                cell.letter = allLetters[row * gridCols + col];
                cell.wordConnectManager = this;
                cell.SetLetter();
                gridCells[new Vector2Int(col, row)] = cell;
            }
        }
    }

    void DisplayClues()
    {
        if (cluesPanel == null) return;

        foreach (string clueName in clueImageNames)
        {
            GameObject clueObj = new GameObject("Clue_" + clueName);
            clueObj.transform.SetParent(cluesPanel, false);
            Image clueImage = clueObj.AddComponent<Image>();
            Sprite clueSprite = Resources.Load<Sprite>("PistasCrucigrama/" + clueName);
            if (clueSprite != null)
            {
                clueImage.sprite = clueSprite;
                // Ajusta el tamaño y la disposición según sea necesario
            }
            else
            {
                Debug.LogError("No se encontró la imagen de la pista: " + "PistasCrucigrama/" + clueName);
                Text textoPista = clueObj.AddComponent<Text>();
                textoPista.text = clueName;
                textoPista.font = Resources.GetBuiltinResource<Font>("Arial.ttf");
            }
        }

        // Puedes usar un Layout Group en cluesPanel para organizar las pistas
    }

    public void StartPath(LetterCell cell)
    {
        currentPath.Clear();
        currentWord = "";
        AddToPath(cell);
    }

    public void ContinuePath(LetterCell cell)
    {
        Vector2Int currentPos = currentPath.Last();
        Vector2Int newPos = new Vector2Int(cell.col, cell.row);

        // Solo permitir movimientos adyacentes y no volver atrás inmediatamente
        if (IsAdjacent(currentPos, newPos) && !currentPath.Contains(newPos) &&
            (currentPath.Count < 2 || currentPath[currentPath.Count - 2] != newPos))
        {
            AddToPath(cell);
        }
    }

    void AddToPath(LetterCell cell)
    {
        Vector2Int cellPos = new Vector2Int(cell.col, cell.row);
        currentPath.Add(cellPos);
        currentWord += cell.letter;
        cell.Select();
        CheckWord();
    }

    bool IsAdjacent(Vector2Int pos1, Vector2Int pos2)
    {
        return Mathf.Abs(pos1.x - pos2.x) <= 1 && Mathf.Abs(pos1.y - pos2.y) <= 1;
    }

    void CheckWord()
    {
        if (targetWords.Contains(currentWord) && !foundWords.Contains(currentWord))
        {
            foundWords.Add(currentWord);
            Debug.Log("¡Palabra encontrada: " + currentWord + "!");
            // Desactivar la interacción de las celdas de la palabra encontrada
            foreach (Vector2Int pos in currentPath)
            {
                if (gridCells.ContainsKey(pos))
                {
                    gridCells[pos].DisableInteraction();
                }
            }
            // Puedes marcar la pista visual como completada aquí
            MarkClueAsFound(currentWord);
        }
    }

    void MarkClueAsFound(string word)
    {
        string clueName = clueImageNames[targetWords.IndexOf(word)];
        // Encuentra el GameObject de la pista y puedes cambiar su apariencia (ej. hacerlo transparente)
        foreach (Transform child in cluesPanel)
        {
            if (child.name == "Clue_" + clueName)
            {
                Image clueImage = child.GetComponent<Image>();
                if (clueImage != null)
                {
                    clueImage.color = new Color(clueImage.color.r, clueImage.color.g, clueImage.color.b, 0.5f); // Hacer semitransparente
                }
                break;
            }
        }

        if (foundWords.Count == targetWords.Count)
        {
            Debug.Log("¡Todas las palabras encontradas!");
            // Lógica para cuando se completan todas las palabras
        }
    }

    public void EndPath()
    {
        // Deseleccionar las celdas si la palabra no es correcta o ya fue encontrada
        if (!targetWords.Contains(currentWord) || foundWords.Contains(currentWord))
        {
            foreach (Vector2Int pos in currentPath)
            {
                if (gridCells.ContainsKey(pos))
                {
                    gridCells[pos].Deselect();
                }
            }
        }
        currentPath.Clear();
        currentWord = "";
    }
}