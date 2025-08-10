using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class CrosswordManager : MonoBehaviour
{
    [Header("Tamaño de la cuadrícula")]
    [SerializeField] private int gridWidthHeight = 10;
    int rows = 10;
    int cols = 10;
    [Header("Prefab de celda")]
    public GameObject cellPrefab;
    [Header("Panel donde se instanciarán las celdas")]
    public Transform gridParent;

    private CrosswordGrid crosswordGrid;
    private List<WordPlacement> wordPlacements;
    private CrosswordGenerator generator;
    SlidingButton slidingButton;
    GameObject[][] lista;
    private void Awake()
    {
        // Inicializa la lista de celdas
        lista = new GameObject[gridWidthHeight][];
        for (int i = 0; i < gridWidthHeight; i++)
        {
            lista[i] = new GameObject[gridWidthHeight];
        }
    }
    void Start()
    {
        slidingButton = FindObjectOfType<SlidingButton>();
        rows = gridWidthHeight;
        cols = gridWidthHeight;
        generator = new CrosswordGenerator();
        crosswordGrid = new CrosswordGrid(rows, cols);
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

            Niveles levelSelected = PlayerController.instance.levelSelected;
            // foreach (Opciones item in levelSelected.opciones)
            // {
            //     Debug.Log($"Opción: {item.opciones}");
            // }

            var wordsAndClues = new List<System.Tuple<string, string>>
            {
                // new System.Tuple<string, string>("CASA", "Lugar para vivir"),
                // new System.Tuple<string, string>("SOL", "Estrella del sistema solar"),
                
            };
            for (int i = 0; i < levelSelected.opciones.Count; i++)
            {
                Opciones opcion = levelSelected.opciones[i];
                wordsAndClues.Add(new System.Tuple<string, string>(i.ToString() + opcion.opciones, (i).ToString()));
            }


            wordPlacements = generator.GenerateCrossword(wordsAndClues, crosswordGrid);
            foreach (WordPlacement w in wordPlacements)
            {
                Debug.Log($"Palabra colocada: {w.Word} {w.Clue} en ({w.Row}, {w.Col}) - {w.IsHorizontal}");
            }

            // Debug.Log($"Palabras colocadas por el generador: {wordPlacements.Count}");
            if (wordPlacements.Count == 0)
            {
                Debug.LogWarning("El generador no pudo colocar ninguna palabra. Revisa el tamaño de la grilla y las palabras.");
            }

            GenerateGridVisual();
        }
    }
    void GenerateGridVisual()
    {
        for (int r = 0; r < rows; r++)
        {
            for (int c = 0; c < cols; c++)
            {
                GameObject cell = Instantiate(cellPrefab, gridParent);
                var cellView = cell.GetComponent<CellView>();
                cellView.SetCrossWM(this);
                char letter = crosswordGrid.GetChar(r, c);
                cellView.isInteractive = this.IsDigitChar(letter);
                if (letter != crosswordGrid.GetEmptyChar())
                {
                    cellView.SetLetter(letter);
                    cellView.isVisible = false;
                }
                else
                {
                    // Llama al nuevo método para celdas vacías
                    cellView.SetEmpty();
                }
                lista[r][c] = cell; // Asigna la referencia de CellView a la lista
            }
        }
    }
    public bool IsDigitChar(char letter)
    {
        return (letter >= '0' && letter <= '9');
    }
    public void SelectCellOption(int option)
    {
        Opciones optionS = PlayerController.instance.GetOptionPosition(option);
        this.OpenPanel(optionS, option);

        Debug.Log($"Opción seleccionada: {option}");
        WordPlacement optionSelect = wordPlacements.FirstOrDefault(w => w.Clue == option.ToString());
        if (optionSelect != null)
        {
            int row = optionSelect.Row;
            int col = optionSelect.Col;
            bool isHorizontal = optionSelect.IsHorizontal;
            CellView cellViewTmp = null;
            if (isHorizontal)
            {
                for (int i = 0; i < optionSelect.Word.Length; i++)
                {
                    cellViewTmp = lista[row][col + i].GetComponent<CellView>();
                    //cellView.isInteractive = false;
                    //cellView.isVisible = true;//cambiar
                    //cellView.SetLetter(optionSelect.Word[i]);
                }
            }
            else
            {
                for (int i = 0; i < optionSelect.Word.Length; i++)
                {
                    cellViewTmp = lista[row + i][col].GetComponent<CellView>();
                    //cellView.isInteractive = false;
                    //cellView.isVisible = true;//cambiar
                    //cellView.SetLetter(optionSelect.Word[i]);
                }
            }
            cellViewTmp.isInteractive = EsSoloDigitos(cellViewTmp?.letter);
        }
        else
        {
            Debug.LogWarning($"No se encontró una palabra con la opción: {option}");
        }
        //activamos el ingreso de letras
    }
    public void ShowRespuesta(int option) {
        Opciones optionS = PlayerController.instance.GetOptionPosition(option);
        // this.OpenPanel(optionS, option);
        Debug.Log($"Opción seleccionada: {option}");
        WordPlacement optionSelect = wordPlacements.FirstOrDefault(w => w.Clue == option.ToString());
        if (optionSelect != null)
        {
            int row = optionSelect.Row;
            int col = optionSelect.Col;
            bool isHorizontal = optionSelect.IsHorizontal;
            CellView cellViewTmp = null;
            if (isHorizontal)
            {
                for (int i = 0; i < optionSelect.Word.Length; i++)
                {
                    cellViewTmp = lista[row][col + i].GetComponent<CellView>();
                    //cellView.isInteractive = false;
                    cellViewTmp.isVisible = true;//cambiar
                    //cellView.SetLetter(optionSelect.Word[i]);
                }
            }
            else
            {
                for (int i = 0; i < optionSelect.Word.Length; i++)
                {
                    cellViewTmp = lista[row + i][col].GetComponent<CellView>();
                    //cellView.isInteractive = false;
                    cellViewTmp.isVisible = true;//cambiar
                    //cellView.SetLetter(optionSelect.Word[i]);
                }
            }
        }

        slidingButton.ClosePanel();
    }
    public static bool EsSoloDigitos(string texto)
    {
        if (string.IsNullOrEmpty(texto))
            return false;

        foreach (char c in texto)
        {
            if (!char.IsDigit(c))
                return false;
        }

        return true;
    }
    void OpenPanel(Opciones op,int position)
    {
        if (slidingButton == null)
        {
            slidingButton = FindObjectOfType<SlidingButton>();
            slidingButton.OpenPanel(op,position);
        }
        else
        {
            slidingButton.OpenPanel(op,position);
        }
    }
}