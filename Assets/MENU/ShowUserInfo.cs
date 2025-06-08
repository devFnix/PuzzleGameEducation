using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections;
using System.IO;

public class ShowUserInfo : MonoBehaviour
{
    [Header("Referencias UI")]
    [SerializeField] private Image userImage;
    [SerializeField] private TextMeshProUGUI userNameText;

    void Start()
    {
         StartCoroutine(ShowUserWhenReady());
    }

    private IEnumerator ShowUserWhenReady()
    {
        // Espera hasta que el singleton y el usuario estén listos
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
                Debug.LogWarning($"No se encontró la imagen: Resources/images/{usuario.Foto}");
            }
        }
    }
}
