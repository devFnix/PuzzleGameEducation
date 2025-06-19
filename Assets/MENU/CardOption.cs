using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CardOption : MonoBehaviour
{
    public Image optionImage;
    public  TextMeshProUGUI optionTitle;
    [SerializeField] private Sprite mySprite;
    [SerializeField] private string title;

    private void Start()
    {
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

    public void Play()
    {
        Debug.Log("Play");
        optionImage.sprite = mySprite;
        optionTitle.text = title;
    }
    public void SelectedGame()
    {
        PlayerController.instance.SetGameName(title.ToLower());
    }
}
