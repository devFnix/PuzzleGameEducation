using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PasswordToggle : MonoBehaviour
{
    [Header("Referencias")]
    public TMP_InputField passwordInputField;
    public Button toggleButton;
    public Image toggleIcon;

    [Header("Iconos (Opcional)")]
    public Sprite showPasswordIcon;  // Icono de ojo abierto
    public Sprite hidePasswordIcon;  // Icono de ojo cerrado

    private bool isPasswordVisible = false;

    void Start()
    {
        // Configurar el input field como password por defecto
        SetPasswordMode(false);

        // Asignar evento al botón
        if (toggleButton != null)
        {
            toggleButton.onClick.AddListener(TogglePasswordVisibility);
        }

        // Si no se asignó el InputField, intentar encontrarlo en el mismo GameObject
        if (passwordInputField == null)
        {
            passwordInputField = GetComponent<TMP_InputField>();
        }

        // Actualizar el icono inicial
        UpdateToggleIcon();
    }

    public void TogglePasswordVisibility()
    {
        isPasswordVisible = !isPasswordVisible;
        SetPasswordMode(isPasswordVisible);
        UpdateToggleIcon();
    }

    void SetPasswordMode(bool showPassword)
    {
        if (passwordInputField != null)
        {
            if (showPassword)
            {
                // Mostrar texto normal
                passwordInputField.contentType = TMP_InputField.ContentType.Standard;
            }
            else
            {
                // Mostrar como password
                passwordInputField.contentType = TMP_InputField.ContentType.Password;
            }

            // Forzar actualización del InputField
            passwordInputField.ForceLabelUpdate();
        }
    }

    void UpdateToggleIcon()
    {
        if (toggleIcon != null)
        {
            if (isPasswordVisible && showPasswordIcon != null)
            {
                toggleIcon.sprite = showPasswordIcon;
            }
            else if (!isPasswordVisible && hidePasswordIcon != null)
            {
                toggleIcon.sprite = hidePasswordIcon;
            }
        }

        // Opcional: Cambiar el texto del botón si no tienes iconos
        if (toggleButton != null && toggleIcon == null)
        {
            var buttonText = toggleButton.GetComponentInChildren<TextMeshProUGUI>();
            if (buttonText != null)
            {
                buttonText.text = isPasswordVisible ? "Ocultar" : "Mostrar";
            }
        }
    }

    // Método público para obtener el estado actual
    public bool IsPasswordVisible()
    {
        return isPasswordVisible;
    }

    // Método público para establecer el estado programáticamente
    public void SetPasswordVisible(bool visible)
    {
        isPasswordVisible = visible;
        SetPasswordMode(isPasswordVisible);
        UpdateToggleIcon();
    }

    // Método para alternar desde código
    public void Toggle()
    {
        TogglePasswordVisibility();
    }
}
