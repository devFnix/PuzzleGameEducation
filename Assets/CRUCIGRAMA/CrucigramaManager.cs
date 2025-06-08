using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using Newtonsoft.Json;
using System.IO;
using System.Linq;

[System.Serializable]
public class PalabraCrucigrama
{
    public string palabra;
    public int filaInicio;
    public int columnaInicio;
    public string orientacion; // "horizontal" o "vertical"
    public string pista; // Nombre del archivo de imagen de la pista (sin extensión)
}

[System.Serializable]
public class DatosCrucigrama
{
    public List<PalabraCrucigrama> palabras;
    public int filas;
    public int columnas;
}

public class CrucigramaManager : MonoBehaviour
{
    public GameObject cellPrefab;
    public RectTransform gridPanel;
    public RectTransform cluesPanel;
    public float cellSize = 50f;
    public float cellSpacing = 5f;
    public string jsonArchivoCrucigrama = "crucigrama_data.json"; // Nombre del archivo JSON con los datos del crucigrama
    public Dictionary<Vector2Int, Cell> gridCells = new Dictionary<Vector2Int, Cell>();
    public List<string> palabrasResueltas = new List<string>();

    private DatosCrucigrama datosCrucigrama;

    void Start()
    {
        CargarDatosCrucigrama();
        GenerarGrilla();
        MostrarPistas();
    }

    void CargarDatosCrucigrama()
    {
        string rutaArchivo = Path.Combine(Application.streamingAssetsPath, jsonArchivoCrucigrama);

        if (File.Exists(rutaArchivo))
        {
            string jsonString = File.ReadAllText(rutaArchivo);
            datosCrucigrama = JsonConvert.DeserializeObject<DatosCrucigrama>(jsonString);
        }
        else
        {
            Debug.LogError("No se encontró el archivo JSON del crucigrama: " + rutaArchivo);
            // Puedes cargar datos de ejemplo aquí si no se encuentra el archivo
            datosCrucigrama = new DatosCrucigrama
            {
                filas = 7,
                columnas = 7,
                palabras = new List<PalabraCrucigrama>()
                {
                    new PalabraCrucigrama { palabra = "TRONCO", filaInicio = 0, columnaInicio = 0, orientacion = "horizontal", pista = "troncos" },
                    new PalabraCrucigrama { palabra = "BELLOTA", filaInicio = 0, columnaInicio = 2, orientacion = "vertical", pista = "bellota" },
                    new PalabraCrucigrama { palabra = "PATO", filaInicio = 2, columnaInicio = 4, orientacion = "horizontal", pista = "pato" },
                    // ... Agrega más palabras y pistas según tu crucigrama
                }
            };
        }
    }

    void GenerarGrilla()
    {
        if (datosCrucigrama == null) return;

        float panelWidth = (cellSize + cellSpacing) * datosCrucigrama.columnas - cellSpacing;
        float panelHeight = (cellSize + cellSpacing) * datosCrucigrama.filas - cellSpacing;
        gridPanel.sizeDelta = new Vector2(panelWidth, panelHeight);

        for (int fila = 0; fila < datosCrucigrama.filas; fila++)
        {
            for (int columna = 0; columna < datosCrucigrama.columnas; columna++)
            {
                GameObject newCellObj = Instantiate(cellPrefab, gridPanel);
                Cell cell = newCellObj.GetComponent<Cell>();
                RectTransform cellRect = newCellObj.GetComponent<RectTransform>();

                float xPos = columna * (cellSize + cellSpacing);
                float yPos = -fila * (cellSize + cellSpacing);
                cellRect.anchoredPosition = new Vector2(xPos, yPos);
                cellRect.sizeDelta = new Vector2(cellSize, cellSize);

                cell.fila = fila;
                cell.columna = columna;
                cell.crucigramaManager = this;
                gridCells[new Vector2Int(columna, fila)] = cell;

                // Inicializar las letras predefinidas (según tu imagen)
                // Ejemplo: Si en la fila 2, columna 0 hay una 'R'
                /*if (fila == 2 && columna == 0)
                {
                    cell.SetLetraInicial("R");
                    cell.EsInicial = true;
                }*/
            }
        }

        // Colocar las letras iniciales de las palabras
        foreach (var palabra in datosCrucigrama.palabras)
        {
            for (int i = 0; i < palabra.palabra.Length; i++)
            {
                int col = palabra.columnaInicio + (palabra.orientacion == "horizontal" ? i : 0);
                int fil = palabra.filaInicio + (palabra.orientacion == "vertical" ? i : 0);
                if (gridCells.ContainsKey(new Vector2Int(col, fil)))
                {
                    gridCells[new Vector2Int(col, fil)].SetLetraInicial(palabra.palabra[i].ToString());
                    gridCells[new Vector2Int(col, fil)].EsInicial = true;
                }
            }
        }
    }

    void MostrarPistas()
    {
        if (datosCrucigrama == null || cluesPanel == null) return;

        // Limpiar pistas anteriores
        foreach (Transform child in cluesPanel)
        {
            Destroy(child.gameObject);
        }

        // Instanciar imágenes de las pistas
        foreach (var palabra in datosCrucigrama.palabras)
        {
            GameObject pistaObj = new GameObject("Pista_" + palabra.pista);
            pistaObj.transform.SetParent(cluesPanel, false);
            Image pistaImage = pistaObj.AddComponent<Image>();
            Sprite pistaSprite = Resources.Load<Sprite>("PistasCrucigrama/" + palabra.pista); // Asegúrate de tener las imágenes en una carpeta "Resources/PistasCrucigrama"
            if (pistaSprite != null)
            {
                pistaImage.sprite = pistaSprite;
                // Puedes ajustar el tamaño y la disposición de las pistas aquí según sea necesario
            }
            else
            {
                Debug.LogError("No se encontró la imagen de la pista: " + "PistasCrucigrama/" + palabra.pista);
                Text textoPista = pistaObj.AddComponent<Text>();
                textoPista.text = palabra.pista; // Mostrar el nombre del archivo si la imagen no se encuentra
                
            }
        }

        // Puedes usar un Layout Group en el cluesPanel para organizar las pistas automáticamente
    }

    public void CeldaCompletada(Cell cell, string letra)
    {
        // Verificar si la letra es correcta para la palabra en la que se encuentra la celda
        foreach (var palabra in datosCrucigrama.palabras)
        {
            if (EsParteDePalabra(cell.fila, cell.columna, palabra))
            {
                int indice = ObtenerIndiceEnPalabra(cell.fila, cell.columna, palabra);
                // Aquí puedes implementar la lógica para verificar si la letra coincide
                // y si la palabra completa es correcta.
                if (palabra.palabra[indice].ToString().ToUpper() == letra.ToUpper())
                {
                    // La letra es correcta
                    bool palabraCompleta = true;
                    for (int i = 0; i < palabra.palabra.Length; i++)
                    {
                        int col = palabra.columnaInicio + (palabra.orientacion == "horizontal" ? i : 0);
                        int fil = palabra.filaInicio + (palabra.orientacion == "vertical" ? i : 0);
                        if (gridCells.ContainsKey(new Vector2Int(col, fil)) &&
                            string.IsNullOrEmpty(gridCells[new Vector2Int(col, fil)].letraIngresada))
                        {
                            palabraCompleta = false;
                            break;
                        }
                    }

                    if (palabraCompleta && !palabrasResueltas.Contains(palabra.palabra))
                    {
                        palabrasResueltas.Add(palabra.palabra);
                        Debug.Log("¡Palabra completada: " + palabra.palabra + "!");
                        // Puedes activar alguna retroalimentación visual o sonora aquí
                        if (palabrasResueltas.Count == datosCrucigrama.palabras.Count)
                        {
                            Debug.Log("¡Crucigrama completado!");
                            // Lógica para cuando se completa todo el crucigrama
                        }
                    }
                }
                else
                {
                    // La letra es incorrecta (opcionalmente puedes dar alguna indicación)
                }
            }
        }
    }

    bool EsParteDePalabra(int fila, int columna, PalabraCrucigrama palabra)
    {
        if (palabra.orientacion == "horizontal")
        {
            return fila == palabra.filaInicio && columna >= palabra.columnaInicio && columna < palabra.columnaInicio + palabra.palabra.Length;
        }
        else // vertical
        {
            return columna == palabra.columnaInicio && fila >= palabra.filaInicio && fila < palabra.filaInicio + palabra.palabra.Length;
        }
    }

    int ObtenerIndiceEnPalabra(int fila, int columna, PalabraCrucigrama palabra)
    {
        if (palabra.orientacion == "horizontal")
        {
            return columna - palabra.columnaInicio;
        }
        else // vertical
        {
            return fila - palabra.filaInicio;
        }
    }
}