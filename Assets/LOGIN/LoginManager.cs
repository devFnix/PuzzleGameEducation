using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.Collections;
using TMPro;
using System.Text;
using Newtonsoft.Json;


public class LoginManager : MonoBehaviour
{
    [SerializeField]
    public TMP_InputField emailInput;
    [SerializeField]
    public TMP_InputField passwordInput;
    [SerializeField]
    public Button loginButton;
    [SerializeField]
    public GameObject panelLogin;
    // URL de tu API de inicio de sesión
    private string loginUrl = "https://firebase-nodejs-chi.vercel.app/api/auth/login";
    private Login login = new Login();
    [SerializeField]
    UserMunanky User = null;
    [SerializeField]
    GoToScene gotoscene = null;

    void Start()
    {
        while (User == null)
            User = FindObjectOfType<UserMunanky>();
        StartCoroutine(HideAndShowObject());
        loginButton.onClick.AddListener(OnLoginButtonClicked);
    }

    private IEnumerator HideAndShowObject()
    {
        // Ocultamos el objeto
        panelLogin.SetActive(false);

        // Esperamos 3 segundos
        yield return new WaitForSeconds(3);

        // Mostramos el objeto nuevamente
        panelLogin.SetActive(true);
    }

    private void OnLoginButtonClicked()
    {
        string email = emailInput.text;
        string password = passwordInput.text;
        login.email = email;
        login.password = password;
        // Iniciar la corrutina para hacer la solicitud a la API
        StartCoroutine(LoginCoroutine());
    }

    private IEnumerator LoginCoroutine()
    {

        // Convertir el objeto de autenticación a JSON
        string jsonData = JsonConvert.SerializeObject(login);
        byte[] jsonToSend = Encoding.UTF8.GetBytes(jsonData);

        // Configurar la solicitud POST
        using (UnityWebRequest request = new UnityWebRequest(loginUrl, "POST"))
        {
            request.uploadHandler = new UploadHandlerRaw(jsonToSend);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");

            // Enviar la solicitud y esperar la respuesta
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                string jsonResponse = request.downloadHandler.text;
                SessionData sessionData = JsonConvert.DeserializeObject<SessionData>(jsonResponse);
                if (sessionData != null)
                {
                    User.SetUser(JsonConvert.SerializeObject(sessionData?.data));
                    if (User.UserData != null)
                        gotoscene.GoScene();
                }
                else
                {
                    Debug.LogError("Error al deserializar JSON.");
                }
            }
            else
            {
                Debug.LogError("Error en el inicio de sesión: " + request.error);
            }
        }
    }

    private void HandleSessionData(SessionData sessionData)
    {
        // Aquí puedes almacenar los datos del usuario o pasarlos a otro script
        //Debug.Log("Usuario: " + userData.email + " ha iniciado sesión correctamente.");
        // Lógica para pasar los datos al PlayerNetwork o cualquier otro manejo necesario
    }
}
