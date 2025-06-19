using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections;
using System.IO;
using UnityEngine.SceneManagement;

public class ShowUserInfo : MonoBehaviour
{
    [Header("Referencias UI")]
    [SerializeField] private Image userImage;
    [SerializeField] private TextMeshProUGUI userNameText;
    [SerializeField] private Button buttonHome;
    [SerializeField] private Button buttonLogin;

    void Start()
    {
        StartCoroutine(ShowUserWhenReady());
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
        if (PlayerController.instance != null)
        {

            buttonHome.onClick.AddListener(() => GoToHome());
            buttonLogin.onClick.AddListener(() => GoToLogin());
        }
    }
    void GoToHome()
    {
        Debug.Log("GoToHome");
        PlayerController.instance.ManualReset();
        PlayerController.instance.loadDataGame();   
        SceneLoader.Instance.LoadSceneWithFade("Scenes/2.SceneJuego");
    }
    void GoToLogin()
    {
        PlayerController.instance.ManualReset();
        PlayerController.instance.loadDataGame();
        SceneLoader.Instance.LoadSceneWithFade("Scenes/Welcome");
    }
    private IEnumerator ShowUserWhenReady()
    {
        // Espera hasta que el singleton y el usuario est�n listos
        while (UsuarioManager.Instance == null || UsuarioManager.Instance.usuarioActual == null)
        {
            yield return null;
        }

        Usuario usuario = UsuarioManager.Instance.usuarioActual;

        if (userNameText != null)
        {
            userNameText.text = usuario.Nombre;
        }

        if (userImage != null && !string.IsNullOrEmpty(usuario.Foto))
        {
            Sprite fotoSprite = Resources.Load<Sprite>("images/" + usuario.Foto);
            if (fotoSprite != null)
            {
                userImage.sprite = fotoSprite;
            }
            else
            {
                Debug.LogWarning($"No se encontr� la imagen: Resources/images/{usuario.Foto}");
            }
        }
    }
}
