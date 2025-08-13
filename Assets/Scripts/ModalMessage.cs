using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections;

public class ModalMessage : MonoBehaviour
{
    public static ModalMessage Instance;

    [Header("UI References")]
    public Image background;
    public TextMeshProUGUI messageText;

    [Header("Bootstrap Colors")]
    public Color successColor = new Color32(209, 231, 221, 255); // #d1e7dd
    public Color errorColor = new Color32(248, 215, 218, 255); // #f8d7da
    public Color warningColor = new Color32(255, 243, 205, 255); // #fff3cd

    public Color successTextColor = new Color32(15, 81, 50, 255); // #0f5132
    public Color errorTextColor = new Color32(132, 32, 41, 255); // #842029
    public Color warningTextColor = new Color32(102, 77, 3, 255); // #664d03

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);
        gameObject.SetActive(false);
    }

    public void Show(string message, string type)
    {
        messageText.text = message;

        switch (type.ToLower())
        {
            case "success":
                background.color = successColor;
                messageText.color = successTextColor;
                break;
            case "error":
            case "danger":
                background.color = errorColor;
                messageText.color = errorTextColor;
                break;
            case "warning":
                background.color = warningColor;
                messageText.color = warningTextColor;
                break;
            default:
                background.color = Color.white;
                messageText.color = Color.black;
                break;
        }

        gameObject.SetActive(true);
        StopAllCoroutines();
        StartCoroutine(HideAfterSeconds(3f));
    }

    private IEnumerator HideAfterSeconds(float seconds)
    {
        yield return new WaitForSeconds(seconds);
        gameObject.SetActive(false);
    }
}
