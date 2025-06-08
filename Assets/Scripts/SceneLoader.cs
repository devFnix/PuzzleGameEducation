using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using PrimeTween;
using System.Collections;

public class SceneLoader : MonoBehaviour
{
    public static SceneLoader Instance { get; private set; }

    private Image fadeImage;
    private Canvas fadeCanvas;

    void Awake()
    {
        // Singleton pattern
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);
        SetupFadeOverlay();
    }

    private void SetupFadeOverlay()
    {
        // Create a Canvas for fade if not exists
        if (fadeCanvas == null)
        {
            GameObject canvasObj = new GameObject("FadeCanvas");
            fadeCanvas = canvasObj.AddComponent<Canvas>();
            fadeCanvas.renderMode = RenderMode.ScreenSpaceOverlay;
            fadeCanvas.sortingOrder = 1000;
            DontDestroyOnLoad(canvasObj);

            GameObject imageObj = new GameObject("FadeImage");
            imageObj.transform.SetParent(fadeCanvas.transform, false);
            fadeImage = imageObj.AddComponent<Image>();
            fadeImage.color = new Color(0, 0, 0, 0); // Transparent black
            RectTransform rt = fadeImage.rectTransform;
            rt.anchorMin = Vector2.zero;
            rt.anchorMax = Vector2.one;
            rt.offsetMin = Vector2.zero;
            rt.offsetMax = Vector2.zero;
        }
    }

    public void LoadSceneWithFade(string sceneName)
    {
        StartCoroutine(FadeAndLoad(sceneName));
    }

    private IEnumerator FadeAndLoad(string sceneName)
    {
        // Fade in (to black)
        Tween.Color(fadeImage, new Color(0, 0, 0, 1), 0.5f, Ease.InQuad);
        yield return new WaitForSeconds(0.5f);

        // Wait additional time
        yield return new WaitForSeconds(1.0f);

        // Load scene
        SceneManager.LoadScene(sceneName);

        // Wait one frame to ensure scene is loaded
        yield return null;

        // Fade out (to transparent)
        Tween.Color(fadeImage, new Color(0, 0, 0, 0), 0.5f, Ease.OutQuad);
        yield return new WaitForSeconds(0.5f);
    }
    public void LoadScene(string NameScene) { StartCoroutine(SceneCoroutine(NameScene)); }

    private IEnumerator SceneCoroutine(string scene)
    {
        yield return new WaitForSeconds(1.5f);
        SceneManager.LoadScene(scene);
    }
}