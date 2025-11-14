using UnityEngine;
using TMPro;
using SQLite;
using System.IO;
using UnityEngine.UI;
using System.Linq;

public class Auth : MonoBehaviour
{
    public string sceneAuth = "";
    [Header("Registro")]
    public TMP_InputField nombreInput;
    public TMP_InputField apellidoInput;
    //public TMP_InputField fotoInput;
    //public TMP_InputField dniInput;
    //public TMP_InputField generoInput;
    public TMP_InputField usernameInput;
    public TMP_InputField passwordInput;

    [Header("Login")]
    public TMP_InputField loginUsernameInput;
    public TMP_InputField loginPasswordInput;

    [Header("Foto y Género")]
    public GenerePhoto selectedGenerePhoto; // Variable para guardar la selección

    private SQLiteConnection db;

    public void SetSelectedGenerePhoto(GenerePhoto photo)
    {
        selectedGenerePhoto = photo;
        Debug.Log($"GenerePhoto seleccionado: {photo.namePhoto}, {photo.genere}");
    }
    void Awake()
    {
        // Ajusta la ruta de la base de datos según tu proyecto
        string dbPath = Path.Combine(Application.persistentDataPath, "usuarios.db");
        db = new SQLiteConnection(dbPath);
        db.CreateTable<Usuario>();
    }

    public void RegistrarUsuario()
    {
        if (string.IsNullOrEmpty(usernameInput.text) || string.IsNullOrEmpty(passwordInput.text))
        {
            Debug.LogWarning("Username y Password son obligatorios.");
            return;
        }
       /* // Obtener el Toggle seleccionado del grupo
        Toggle selectedToggle = photoToggleGroup.ActiveToggles().FirstOrDefault(t => t.isOn);
        GenerePhoto selectedGenerePhoto = null;
        if (selectedToggle != null)
        {
            OptionPhoto optionPhoto = selectedToggle.GetComponent<OptionPhoto>();
            if (optionPhoto != null)
            {
                selectedGenerePhoto = optionPhoto.generePhoto;
            }
            else {
                Debug.Log("No encontrado");
            }
        }
        else 
            Debug.LogWarning("No se ha seleccionado ninguna foto de género.");
       */
            Usuario nuevoUsuario = new Usuario
            {
                Nombre = nombreInput.text,
                Apellido = apellidoInput.text,
                Foto = selectedGenerePhoto != null ? selectedGenerePhoto.namePhoto : "",
                DNI = "",
                Genero = selectedGenerePhoto != null ? selectedGenerePhoto.genere : "",
                Username = usernameInput.text,
                Password = passwordInput.text
            };

        try
        {
            db.Insert(nuevoUsuario);
            ModalMessage.Instance.Show("Usuario registrado exitosamente.", "success");

            // Aquí puedes cargar la siguiente escena o mostrar un mensaje de éxito
            if (!string.IsNullOrEmpty(sceneAuth))
            {
                Debug.Log("Cargando scene");
                //SceneLoader.Instance.LoadSceneWithFade(sceneAuth);
            }
            else
            {
                Debug.LogWarning("El nombre de la escena no está asignado.");
            }
        }
        catch (SQLiteException ex)
        {
            ModalMessage.Instance.Show("Error al registrar el usuario", "error");
        }
    }
    public void mostrarData() { 
        Debug.Log("Mostrando datos de usuarios registrados:");
        var usuarios = db.Table<Usuario>().ToList();
        foreach (var usuario in usuarios)
        {
            Debug.Log($"ID: {usuario.Id}, Nombre: {usuario.Nombre}, Apellido: {usuario.Apellido}, Foto: {usuario.Foto}, DNI: {usuario.DNI}, Género: {usuario.Genero}, Username: {usuario.Username}");
        }
    }
    public void LoginUsuario()
    {
        string username = loginUsernameInput.text;
        string password = loginPasswordInput.text;
        var usuario = db.Table<Usuario>().FirstOrDefault(u => u.Username == username && u.Password == password);
        this.mostrarData();

        if (usuario != null)
        {
            UsuarioManager.Instance.SetUsuario(usuario);
            SceneLoader.Instance.LoadSceneWithFade(sceneAuth);
            // Aquí puedes cargar la siguiente escena o mostrar el panel correspondiente
        }
        else
        {
            ModalMessage.Instance.Show("Usuario o contraseña incorrectos.", "error");
        }
    }
}
