using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ShowResultados : MonoBehaviour
{
    public TMP_Text scoreText;
    public TMP_Text timeText;
    public TMP_Text nameText;
    public Button Button;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(LoadData());
        StartCoroutine(LoadDataUser());
        Button.onClick.AddListener(() =>
        {
            PlayerController.instance.ResetLevel();
            PlayerController.instance.isInitialized = false;
            SceneLoader.Instance.LoadSceneWithFade("Scenes/4.SceneNiveles");
        });
    }
    private IEnumerator LoadDataUser()
    {
        while (UsuarioManager.Instance == null || UsuarioManager.Instance.usuarioActual == null)
        {
            yield return null;
        }

        Usuario usuario = UsuarioManager.Instance.usuarioActual;

        nameText.text = $"Kusikuyki ruraykita!\n{usuario.Nombre}";


    }
    private IEnumerator LoadData()
    {
        while (ScoreGame.Instance == null)
        {
            yield return null;
        }
        if (ScoreGame.Instance != null)
        {
            Debug.Log("Score Total: " + ScoreGame.Instance.scoreTotal);
            scoreText.text = ScoreGame.Instance.scoreTotal.ToString();
            timeText.text = getTime(ScoreGame.Instance);
        }
    }
    private string getTime(ScoreGame scoreGame)
    {
        float totalTime = scoreGame.endTime - scoreGame.startTime;
        int minutes = Mathf.FloorToInt(totalTime / 60f);
        int seconds = Mathf.FloorToInt(totalTime % 60f);
        return string.Format("{0:00}:{1:00}", minutes, seconds);
    }
    // Update is called once per frame
    void Update()
    {

    }
}
