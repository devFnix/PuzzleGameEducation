using UnityEngine;

public class UsuarioManager : MonoBehaviour
{
    public static UsuarioManager Instance { get; private set; }
    public Usuario usuarioActual;
    public bool inicializado = false;
    void Awake()
    {
        // Singleton: solo una instancia y persiste entre escenas
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);
    }
    private void Start()
    {
        if (inicializado)
            Initialzatar();
    }

    private void Initialzatar()
    {
        if (usuarioActual == null)
        {
            usuarioActual = new Usuario(); // Asegúrate de que Usuario tenga un constructor por defecto
            usuarioActual.Id = 6;
            usuarioActual.Nombre = "camila";
            usuarioActual.Apellido = "Gutierrez";
            usuarioActual.Username = "camila";
            usuarioActual.Password = "12345678";
            usuarioActual.Foto = "girl-2";
            usuarioActual.Genero = "f";
        }
        ShowUsuario(); // Mostrar el usuario actual al iniciar
    }
    // Puedes agregar métodos para manipular usuarioActual si lo necesitas
    public void SetUsuario(Usuario usuario)
    {
        usuarioActual = usuario;
        //ShowUsuario();
    }
    public void ShowUsuario()
    {
        if (usuarioActual != null)
        {
            Debug.Log($"Usuario Actual: {usuarioActual.Nombre} {usuarioActual.Apellido}, Username: {usuarioActual.Username}");
        }
        else
        {
            Debug.Log("No hay usuario actual.");
        }
    }
    public Usuario GetUsuario()
    {
        return usuarioActual;
    }
}
