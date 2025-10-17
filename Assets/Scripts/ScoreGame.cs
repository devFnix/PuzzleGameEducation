using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using TMPro;

public class ScoreGame : MonoBehaviour
{
    public static ScoreGame Instance { get; private set; }

    [Header("Scenes Configuration")]
    public List<string> allowedScenes = new List<string>()
    {
        "memoria",
        "pupiletras",
        "formando palabras",
        "crucigrama",
        "resultado"
    };

    [Header("Game Variables")]
    public int scoreTotal = 0;
    public int currentScore = 0;
    public float startTime = 0f;
    public float endTime = 0f;
    public string playerName = "Jugador";

    [Header("UI References")]
    public TMP_Text timerText;
    public TMP_Text scoreText;
    public GameObject timerPanel;

    private bool isTimerRunning = false;
    public string currentSceneName;

    void Awake()
    {
        DontDestroy();
    }
    void DontDestroy()
    {
        // Implementar patrón Singleton
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
            return;
        }

        // Suscribirse a eventos de cambio de escena
        SceneManager.sceneLoaded += OnSceneLoaded;
    }
    public void ChangeScoreTotal(int _scoreTotal)
    {
        this.scoreTotal = _scoreTotal;
        SetupUI();
    }
    void OnDestroy()
    {
        // Desuscribirse de eventos
        SceneManager.sceneLoaded -= OnSceneLoaded;
    }

    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        currentSceneName = scene.name;
        if (!IsSceneAllowed(currentSceneName) || currentSceneName == "resultado") this.timerPanel.SetActive(false);
        SetupScene();
    }

    void SetupScene()
    {
        // Verificar si la escena actual está en la lista permitida
        if (!IsSceneAllowed(currentSceneName))
        {
            Debug.LogWarning($"Escena '{currentSceneName}' no está en la lista permitida.");
            return;
        }

        // Reiniciar variables para escenas de juego (no resultado)
        if (currentSceneName != "resultado")
        {
            ResetGameVariables();
            StartTimer();
            SetupUI();
        }
        else
        {
            StopTimer();
            ShowResults();
        }
    }

    bool IsSceneAllowed(string sceneName)
    {
        foreach (string allowedScene in allowedScenes)
        {
            if (sceneName.ToLower().Contains(allowedScene.ToLower()))
            {
                return true;
            }
        }
        return false;
    }

    void ResetGameVariables()
    {
        scoreTotal = 0;
        currentScore = 0;
        startTime = 0f;
        endTime = 0f;
    }

    void StartTimer()
    {
        startTime = Time.time;
        isTimerRunning = true;

        // Buscar UI elements en la escena
        FindUIElements();

        if (timerPanel != null)
            timerPanel.SetActive(true);
    }

    void StopTimer()
    {
        if (isTimerRunning)
        {
            endTime = Time.time;
            isTimerRunning = false;

            if (timerPanel != null)
                timerPanel.SetActive(false);
        }
    }

    void FindUIElements()
    {
        // Buscar elementos UI en la escena
        if (timerText == null)
        {
            GameObject timerObj = GameObject.Find("TimerText");
            if (timerObj != null) timerText = timerObj.GetComponent<TextMeshPro>();
        }

        if (scoreText == null)
        {
            GameObject scoreObj = GameObject.Find("ScoreText");
            if (scoreObj != null) scoreText = scoreObj.GetComponent<TextMeshPro>();
        }

        if (timerPanel == null)
        {
            timerPanel = GameObject.Find("TimerPanel");
        }
    }

    void SetupUI()
    {
        if (timerText != null)
        {
            timerText.text = "00:00";
        }

        if (scoreText != null)
        {
            scoreText.text = $"{currentScore}/{scoreTotal}";
        }
    }

    void Update()
    {
        if (isTimerRunning)
        {
            UpdateTimerUI();
            CheckGameCompletion();
        }
    }

    void UpdateTimerUI()
    {
        if (timerText != null)
        {
            float currentTime = Time.time - startTime;
            string minutes = Mathf.Floor(currentTime / 60).ToString("00");
            string seconds = (currentTime % 60).ToString("00");
            timerText.text = $"{minutes}:{seconds}";
        }
    }

    void CheckGameCompletion()
    {
        if (currentScore >= scoreTotal && scoreTotal > 0)
        {
            StopTimer();
            //LoadResultScene();
            Invoke(nameof(LoadResultScene), 3f); // Llama a MiFuncion después de 3 segundos
        }
    }

    public void AddScore(int points)
    {
        currentScore += points;

        if (scoreText != null)
        {
            scoreText.text = $"{currentScore}/{scoreTotal}";
        }
    }

    public void SetPlayerName(string name)
    {
        playerName = name;
    }

    public void LoadScene(string sceneName)
    {
        if (IsSceneAllowed(sceneName))
        {
            SceneManager.LoadScene(sceneName);
        }
        else
        {
            Debug.LogError($"No se puede cargar la escena '{sceneName}'. No está en la lista permitida.");
        }
    }

    void LoadResultScene()
    {
        SceneManager.LoadScene("resultado");
    }

    void ShowResults()
    {
        // Aquí puedes implementar la lógica para mostrar los resultados
        // en la escena de resultado
        float timeInPreviousScene = endTime - startTime;

        Debug.Log($"Resultados - Jugador: {playerName}");
        Debug.Log($"{currentScore}");
        Debug.Log($"{timeInPreviousScene:F2} segundos");

        // Puedes buscar objetos en la escena de resultado para mostrar esta información
        GameObject resultsObj = GameObject.Find("ResultsText");
        if (resultsObj != null)
        {
            Text resultsText = resultsObj.GetComponent<Text>();
            if (resultsText != null)
            {
                string minutes = Mathf.Floor(timeInPreviousScene / 60).ToString("00");
                string seconds = (timeInPreviousScene % 60).ToString("00");

                resultsText.text = $"Jugador: {playerName}\n" +
                                 $"{currentScore}\n" +
                                 $"{minutes}:{seconds}";
            }
        }
    }

    // Métodos públicos para control desde otros scripts
    public void CompleteGame()
    {
        currentScore = scoreTotal;
        CheckGameCompletion();
    }

    public float GetCurrentTime()
    {
        return Time.time - startTime;
    }

    public bool IsGameCompleted()
    {
        return currentScore >= scoreTotal;
    }
}