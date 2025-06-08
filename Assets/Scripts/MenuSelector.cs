using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine.SceneManagement;
using Newtonsoft.Json; // Asegúrate de tener Newtonsoft.Json instalado (a través de Package Manager)

public class MenuSelector : MonoBehaviour
{
    public Dropdown juegoDropdown;
    public Dropdown categoriaDropdown;
    public Dropdown nivelDropdown;
    public Button iniciarButton;

    private Dictionary<string, string> archivosJson = new Dictionary<string, string>()
    {
        {"Memoria", "JSONFiles/memoria_convertidos"}, // Omitimos la extensión .json
        {"Conectar", "JSONFiles/conectar_convertidos"},
        {"Pupiletras", "JSONFiles/pupiletras_convertidos"},
        {"Crucigrama", "JSONFiles/crucigrama_convertidos"}
    };

    private List<JuegoData> datosJson; // Usaremos una lista de objetos dinámicos para la estructura JSON

    void Start()
    {
        // Limpiar y agregar las opciones del juego al Dropdown
        juegoDropdown.ClearOptions();
        juegoDropdown.AddOptions(archivosJson.Keys.ToList());
        juegoDropdown.onValueChanged.AddListener(OnJuegoSeleccionado);

        // Inicializar los otros Dropdowns y el botón
        categoriaDropdown.ClearOptions();
        nivelDropdown.ClearOptions();
        iniciarButton.onClick.AddListener(IniciarJuego);
        iniciarButton.interactable = false; // Desactivar el botón al inicio
    }

    void OnJuegoSeleccionado(int indiceJuego)
    {
        string nombreJuego = juegoDropdown.options[indiceJuego].text;
        string rutaArchivoResources = archivosJson[nombreJuego]; // Ahora contiene la ruta relativa a Resources
        CargarDatosJson(rutaArchivoResources);
        LlenarCategoriasDropdown();
        nivelDropdown.ClearOptions();
        JuegoSeleccionado.archivoSeleccionado = archivosJson[nombreJuego] + ".json"; // Guardamos el nombre completo con extensión
        JuegoSeleccionado.categoriaSeleccionada = null;
        JuegoSeleccionado.nivelSeleccionado = null;
        iniciarButton.interactable = false;
    }

    void CargarDatosJson(string rutaArchivoResources)
    {
        TextAsset jsonAsset = Resources.Load<TextAsset>(rutaArchivoResources);

        if (jsonAsset != null)
        {
            string jsonString = jsonAsset.text;
            datosJson = JsonConvert.DeserializeObject<List<JuegoData>>(jsonString);
            // Debug.Log("Contenido de datosJson: " + JsonConvert.SerializeObject(datosJson, Formatting.Indented));
        }
        else
        {
            Debug.LogError("No se encontró el archivo JSON en Resources: " + rutaArchivoResources);
            datosJson = null;
        }
    }

    void LlenarCategoriasDropdown()
    {
        categoriaDropdown.ClearOptions();
        if (datosJson != null)
        {
            List<string> categorias = datosJson.Select(item => item.categoria).ToList();
            categoriaDropdown.AddOptions(categorias);
            categoriaDropdown.onValueChanged.AddListener(OnCategoriaSeleccionada);
        }
    }

    void OnCategoriaSeleccionada(int indiceCategoria)
    {
        if (datosJson != null && indiceCategoria < datosJson.Count)
        {
            string categoriaSeleccionadaTexto = categoriaDropdown.options[indiceCategoria].text;
            JuegoSeleccionado.categoriaSeleccionada = categoriaSeleccionadaTexto;
            LlenarNivelesDropdown(categoriaSeleccionadaTexto);
        }
        JuegoSeleccionado.nivelSeleccionado = null; // Resetear nivel al cambiar categoría
        iniciarButton.interactable = false; // Desactivar botón al cambiar categoría
    }

    void LlenarNivelesDropdown(string categoria)
    {
        nivelDropdown.ClearOptions();
        if (datosJson != null)
        {
            var categoriaSeleccionada = datosJson.FirstOrDefault(item => item.categoria == categoria);

            if (categoriaSeleccionada != null && categoriaSeleccionada.niveles != null)
            {
                List<string> nombresNiveles = categoriaSeleccionada.niveles.Select(nivel => nivel.nivel).ToList();
                nivelDropdown.AddOptions(nombresNiveles);
                nivelDropdown.onValueChanged.AddListener(OnNivelSeleccionado);
            }
        }
    }

    void OnNivelSeleccionado(int indiceNivel)
    {
        if (nivelDropdown.options.Count > 0)
        {
            JuegoSeleccionado.nivelSeleccionado = nivelDropdown.options[indiceNivel].text;
            iniciarButton.interactable = true; // Activar el botón cuando se selecciona un nivel
        }
        else
        {
            JuegoSeleccionado.nivelSeleccionado = null;
            iniciarButton.interactable = false;
        }
    }

    void IniciarJuego()
    {
        if (!string.IsNullOrEmpty(JuegoSeleccionado.archivoSeleccionado) &&
            !string.IsNullOrEmpty(JuegoSeleccionado.categoriaSeleccionada) &&
            !string.IsNullOrEmpty(JuegoSeleccionado.nivelSeleccionado))
        {
            // Aquí puedes cargar la siguiente escena del juego
            Debug.Log($"Iniciando juego: {JuegoSeleccionado.archivoSeleccionado}, Categoría: {JuegoSeleccionado.categoriaSeleccionada}, Nivel: {JuegoSeleccionado.nivelSeleccionado}");
            // SceneManager.LoadScene("NombreDeTuEscenaDeJuego");
        }
        else
        {
            Debug.LogWarning("Por favor, selecciona un juego, categoría y nivel.");
        }
    }
}