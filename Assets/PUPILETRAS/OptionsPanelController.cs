using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Collections;
using System.Linq;

public class OptionsPanelController : MonoBehaviour
{
    [SerializeField] private OptionItemPrefab optionItemPrefab;
    [SerializeField] private Transform contentParent;
    [SerializeField] private ScrollRect scrollRect;

    private List<OptionItemPrefab> optionItems = new List<OptionItemPrefab>();
    private string selectedOptionId;
    [SerializeField] private HelpMenuPupiletras helpMenuPupiletras;
    [SerializeField] private WordSearchGame wordSearchGame;
    List<string> listWordsFound = new List<string>();
    private void Start()
    {
        if (wordSearchGame == null)
        {
            wordSearchGame = FindObjectOfType<WordSearchGame>();
            Debug.LogError("WordSearchGame not found");
        }
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
        Play();
    }
    void Play()
    {
        if (PlayerController.instance != null)
        {
            helpMenuPupiletras.CloseHelpPanel();
            CardsController cardsController = FindObjectOfType<CardsController>();

            Niveles niveles = PlayerController.instance.levelSelected;
            int id = 0;
            foreach (Opciones opcion in niveles.opciones)
            {
                Debug.Log($"opcion {id}: {opcion.imagen}");
                // Cargar la imagen
                string procesar = opcion.imagen.Replace(".png", "");
                string rutaB = "images/" + procesar;
                Sprite loadedSprite = Resources.Load<Sprite>(rutaB);
                if (loadedSprite != null)
                {
                    // Crear el item
                    string name = opcion.opciones.ToUpper();
                    OptionItemPrefab item = Instantiate(optionItemPrefab, contentParent);
                    item.Setup(name, loadedSprite, (id + 1).ToString(), id, this);
                    optionItems.Add(item);
                }
                id++;
            }

        }
        else
        {
            Debug.Log("PlayerController.instance is null");
        }
    }

    public void OnOptionSelected(string optionId)
    {
        selectedOptionId = optionId;
        Debug.Log($"Opción seleccionada: {optionId}");

        // Desactivar otros radio buttons
        foreach (OptionItemPrefab item in optionItems)
        {
            if (item != null && item.gameObject != null)
            {
                Toggle radioButton = item.GetComponentInChildren<Toggle>();
                if (radioButton != null && radioButton.isOn && item.gameObject.name != optionId)
                {
                    radioButton.isOn = false;
                }
            }
        }
    }
    public void onActiveHelpMenuPupiletras(int optionId)
    {
        helpMenuPupiletras.OpenHelpPanel();
        // helpMenuPupiletras.Setup(optionId);
    }
    void DebugItems()
    {
        Debug.Log("=== Estado actual de los items ===");
        Debug.Log($"Items en la lista: {optionItems.Count}");
        Debug.Log($"Hijos en contentParent: {contentParent.childCount}");

        foreach (OptionItemPrefab item in optionItems)
        {
            if (item != null)
            {
                Debug.Log($"Item en lista: {item.nameItem}");
            }
        }

        for (int i = 0; i < contentParent.childCount; i++)
        {
            Transform child = contentParent.GetChild(i);
            OptionItemPrefab item = child.GetComponent<OptionItemPrefab>();
            if (item != null)
            {
                Debug.Log($"Hijo en contentParent: {item.nameItem}");
            }
        }
    }
    void Update()
    {
        if (wordSearchGame != null)
        {
            if (wordSearchGame.listWordsFound.Count != listWordsFound.Count)
            {
                listWordsFound = wordSearchGame.listWordsFound;
            
                string word = wordSearchGame.listWordsFound[wordSearchGame.listWordsFound.Count - 1];
                List<OptionItemPrefab> itemsToRemove = new List<OptionItemPrefab>();
                
                foreach (OptionItemPrefab item in optionItems)
                {
                    if (item.nameItem == word)
                    {
                        Destroy(item.gameObject);
                        itemsToRemove.Add(item);
                    }
                }

                foreach (OptionItemPrefab item in itemsToRemove)
                {
                    optionItems.Remove(item);
                }
            }
        }
    }
}