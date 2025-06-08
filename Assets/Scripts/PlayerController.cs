using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.SceneManagement;

public enum GameMenuOption
{
    Ninguno,
    Pupiletras,
    Conectar,
    Crucigrama,
    Memoria
}
public class PlayerController : MonoBehaviour
{
    public static PlayerController instance;
    DataGame gameSelected = new();
    Categoria categorySelected = new();
    public Niveles levelSelected = new();
    [SerializeField] int currentOption = 0;
    [Header("Escenas")]
    [SerializeField] private string sceneCategory = "";
    [SerializeField] private string sceneLevel = "";
    [SerializeField] private string sceneGame = "";
    [SerializeField] private string sceneJuegoSeleccionado = "";

    [Header("PlayerController")]
    [SerializeField] private string gameName = "";
    [SerializeField] private string categoryName = "";
    [SerializeField] private string levelName = "";
    [SerializeField] private int level = 0;
    [SerializeField] private string urlJSON = "JSONFiles/dataFinal";
    List<DataGame> dataGame;
    [Header("Menú de Juegos")]
    [SerializeField] private GameMenuOption gameMenuOption = GameMenuOption.Ninguno;
    private GameMenuOption lastGameMenuOption = GameMenuOption.Ninguno;

    public bool isInitialized = false;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }
    void Start()
    {
        CargarDatosJson(urlJSON);
        //SetPupiletras();
        //SetConectar();
        //SetCrucigrama();
        //SetMemoria();


        /*SetGameName(gameName);
        SelectionGame(gameName);
        if (gameSelected != null)
            Debug.Log("Category: " + gameSelected.juego);
        else
            Debug.LogWarning("No se seleccionó ninguna categoría.");
    */
    }
    public void SetCurrentOption(int op) { 
        this.currentOption = op;
    }
    public int GetCurrentOption()
    {
        return this.currentOption;
    }
    public Opciones GetPositionOption()
    {
        if (levelSelected == null || levelSelected.opciones == null || this.currentOption < 0 || this.currentOption >= levelSelected.opciones.Count)
        {
            Debug.LogError("Nivel o opciones no están inicializados o posición fuera de rango.");
            Debug.LogError($"Nivel: {levelSelected?.nivel}, Opciones: {levelSelected?.opciones?.Count}, CurrentOption: {this.currentOption}");
            return null;
        }
        return levelSelected.opciones[this.currentOption];
    }
    public Opciones GetOption(string nameOption)
    {
        return levelSelected.opciones.Find(x => x.opciones == nameOption);
    }
    public void SetLevel(int level)
    {
        this.level = level;
    }
    public void SelectionLevel(string level)
    {
        if (categorySelected == null)
        {
            Debug.LogError("categoria no está inicializado.");
            gameSelected = null;
            return;
        }

        levelSelected = categorySelected.niveles.Find(x => x.nivel == level);

        if (levelSelected == null)
        {
            Debug.LogWarning($"No se encontró el juego '{gameName}' en dataGame.");
        }
        else
        {
            this.levelName = levelSelected.nivel;
            CargarEscenaConDelay(gameName);
        }
    }
    public void SetGameName(string gameNombre)
    {
        this.gameName = GetNameReal(gameNombre);
        SelectionGame(this.gameName);
        CargarEscenaConDelay(sceneCategory);
    }
    public void SetCategory(string catName_)
    {
        if (gameSelected == null)
        {
            Debug.LogError("gameSelected no está inicializado.");
            categorySelected = null;
            return;
        }

        categorySelected = gameSelected?.categorias.Find(x => x.categoria == catName_);

        if (gameSelected == null)
        {
            Debug.LogWarning($"No se encontró la categoría '{catName_}' en dataGame.");
        }
        else
        {
            this.categoryName = catName_;
            this.level = categorySelected.niveles.Count;
            if (this.level == 1) SelectionLevel("1");
            CargarEscenaConDelay(sceneLevel);
        }
    }
    void CargarDatosJson(string rutaArchivoResources)
    {
        TextAsset jsonAsset = Resources.Load<TextAsset>(rutaArchivoResources);

        if (jsonAsset != null)
        {
            string jsonString = jsonAsset.text;
            dataGame = JsonConvert.DeserializeObject<List<DataGame>>(jsonString);
        }
        else
        {
            Debug.LogError("No se encontró el archivo JSON en Resources: " + rutaArchivoResources);
            dataGame = null;
        }
    }
    public void SelectionGame(string gameName)
    {
        if (dataGame == null)
        {
            Debug.LogError("dataGame no está inicializado.");
            gameSelected = null;
            return;
        }

        gameSelected = dataGame.Find(x => x.juego == gameName);

        if (gameSelected == null)
        {
            Debug.LogWarning($"No se encontró el juego '{gameName}' en dataGame.");
        }
        else
        {
            this.gameName = gameSelected.juego;
        }
    }


    public void CargarEscenaConDelay(string nombreEscena)
    {
        if (!isInitialized)
            SceneLoader.Instance.LoadSceneWithFade(nombreEscena);
    }
    public int GetLevel()
    {
        return level;
    }
    public List<string> GetListaCategories()
    {
        List<string> categories = new List<string>();
        if (gameSelected != null)
        {
            foreach (var category in gameSelected.categorias)
            {
                categories.Add(category.categoria);
            }
        }
        /*
        categories.Add("Regresar 1");
        categories.Add("Regresar 2");
        categories.Add("Regresar 3");
        categories.Add("Regresar 4");
        */
        return categories;
    }

    public string GetNameReal(string name)
    {
        switch (name)
        {
            case "conectar":
                return "formando palabras";
            default:
                return name.ToLower();
        }
    }

    public void SetPupiletras()
    {
        SetGameName("pupiletras");
        SetCategory("oficios");
        SelectionLevel("1");

    }
    public void SetConectar()
    {
        SetGameName("formando palabras");
        SetCategory("cosas de la cocina");
        SelectionLevel("1");

    }
    public void SetCrucigrama()
    {
        SetGameName("crucigrama");
        SetCategory("adjetivos");
        SelectionLevel("1");

    }
    public void SetMemoria()
    {
        SetGameName("memoria");
        SetCategory("números");
        SelectionLevel("2");

    }
    void Update()
    {
        if (gameMenuOption != lastGameMenuOption)
        {
            OnGameMenuOptionChanged(gameMenuOption);
            lastGameMenuOption = gameMenuOption;
        }
    }
    private void OnGameMenuOptionChanged(GameMenuOption option)
    {
        switch (option)
        {
            case GameMenuOption.Ninguno:
                isInitialized = false;
                break;
            case GameMenuOption.Pupiletras:
                isInitialized = true;
                SetPupiletras();
                break;
            case GameMenuOption.Conectar:
                isInitialized = true;
                SetConectar();
                break;
            case GameMenuOption.Crucigrama:
                isInitialized = true;
                SetCrucigrama();
                break;
            case GameMenuOption.Memoria:
                isInitialized = true;
                SetMemoria();
                break;
        }
    }
}
