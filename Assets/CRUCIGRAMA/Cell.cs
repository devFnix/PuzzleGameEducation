using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Cell : MonoBehaviour, IPointerClickHandler
{
    public int fila;
    public int columna;
    public CrucigramaManager crucigramaManager;
    public Text textoCelda;
    public string letraInicial;
    public string letraIngresada;
    public bool EsInicial { get; set; }

    void Awake()
    {
        textoCelda = GetComponentInChildren<Text>();
        letraIngresada = "";
        EsInicial = false;
        if (textoCelda == null)
        {
            Debug.LogError("El prefab de la celda debe tener un componente Text como hijo.");
        }
    }

    public void SetLetraInicial(string letra)
    {
        letraInicial = letra.ToUpper();
        textoCelda.text = letraInicial;
        letraIngresada = letraInicial;
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if (!EsInicial && crucigramaManager != null)
        {
            // Aquí puedes abrir un teclado en pantalla o permitir la entrada desde el teclado físico
            // Por simplicidad, vamos a simular la entrada de una letra aquí
            string nuevaLetra = GetRandomLetter(); // Reemplaza esto con la lógica de entrada real del jugador
            ActualizarLetra(nuevaLetra);
            crucigramaManager.CeldaCompletada(this, letraIngresada);
        }
    }

    public void ActualizarLetra(string letra)
    {
        if (!EsInicial)
        {
            letraIngresada = letra.ToUpper();
            textoCelda.text = letraIngresada;
        }
    }

    // Función de ejemplo para obtener una letra aleatoria (reemplazar con la entrada del jugador)
    string GetRandomLetter()
    {
        char[] alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ".ToCharArray();
        return alphabet[Random.Range(0, alphabet.Length)].ToString();
    }
}