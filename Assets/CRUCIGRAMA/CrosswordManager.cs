using System.Collections.Generic;
using UnityEngine;

public class CrosswordManager : MonoBehaviour
{
    [Header("Tamaño de la cuadrícula")]
    public int rows = 10;
    public int cols = 10;
    [Header("Prefab de celda")]
    public GameObject cellPrefab;
    [Header("Panel donde se instanciarán las celdas")]
    public Transform gridParent;

    private CrosswordGrid crosswordGrid;
    private List<WordPlacement> wordPlacements;
    private CrosswordGenerator generator;

    void Start()
    {
        generator = new CrosswordGenerator();
        crosswordGrid = new CrosswordGrid(rows, cols);
        var wordsAndClues = new List<System.Tuple<string, string>>
        {
            // new System.Tuple<string, string>("CASA", "Lugar para vivir"),
            // new System.Tuple<string, string>("SOL", "Estrella del sistema solar"),
            // new System.Tuple<string, string>("LUNA", "Satélite de la Tierra"),
            // new System.Tuple<string, string>("PROGRAMACION", "Arte de escribir código."),
            // new System.Tuple<string, string>("ALGORITMO", "Secuencia de pasos para resolver un problema."),
            // new System.Tuple<string, string>("COMPILADOR", "Traduce código fuente a código máquina."),
            // new System.Tuple<string, string>("VARIABLES", "Espacios de memoria para almacenar datos."),
            // new System.Tuple<string, string>("FUNCION", "Bloque de código reutilizable."),
            new System.Tuple<string, string>("CLASE", "Plantilla para crear objetos."),
            new System.Tuple<string, string>("OBJETO", "Instancia de una clase."),
            new System.Tuple<string, string>("HERENCIA", "Mecanismo para reutilizar código entre clases."),
            // new System.Tuple<string, string>("POLIMORFISMO", "Capacidad de un objeto de tomar muchas formas."),
            new System.Tuple<string, string>("DEPURA", "Proceso de encontrar y corregir errores."),
            new System.Tuple<string, string>("BUCLE", "Estructura de control para repetir código."),
            new System.Tuple<string, string>("ARREGLO", "Colección de elementos del mismo tipo."),
            new System.Tuple<string, string>("PUNTERO", "Variable que almacena una dirección de memoria."),
            // new System.Tuple<string, string>("BIBLIOTECA", "Conjunto de funciones y clases predefinidas."),
            // new System.Tuple<string, string>("RECURSION", "Función que se llama a sí misma.")
        };
        wordPlacements = generator.GenerateCrossword(wordsAndClues, crosswordGrid);
        
        Debug.Log($"Palabras colocadas por el generador: {wordPlacements.Count}");
        if (wordPlacements.Count == 0)
        {
            Debug.LogWarning("El generador no pudo colocar ninguna palabra. Revisa el tamaño de la grilla y las palabras.");
        }

        GenerateGridVisual();
    }

    void GenerateGridVisual()
    {
        for (int r = 0; r < rows; r++)
        {
            for (int c = 0; c < cols; c++)
            {
                GameObject cell = Instantiate(cellPrefab, gridParent);
                var cellView = cell.GetComponent<CellView>();

                char letter = crosswordGrid.GetChar(r, c);
                
                if (letter != crosswordGrid.GetEmptyChar())
                {
                    cellView.SetLetter(letter);
                }
                else
                {
                    // Llama al nuevo método para celdas vacías
                    cellView.SetEmpty();
                }
            }
        }
    }
} 