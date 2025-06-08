using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class GenerePhoto
{
    public string namePhoto { get; set; }
    public string genere { get; set; }
    public GenerePhoto(string namePhoto, string genere)
    {
        this.namePhoto = namePhoto;
        this.genere = genere;
    }
}
public class OptionPhoto : MonoBehaviour
{
    public string namePhoto;
    public string genere;
    public GenerePhoto generePhoto;

    private Toggle toggle;
    private Image image;
    private Auth auth;
    void Awake()
    {
        toggle = GetComponent<Toggle>();
        image = GetComponentInChildren<Image>();
        if (image != null)
        {
            // Añade el EventTrigger para detectar clics en la imagen
            EventTrigger trigger = image.gameObject.GetComponent<EventTrigger>();
            if (trigger == null)
                trigger = image.gameObject.AddComponent<EventTrigger>();

            EventTrigger.Entry entry = new EventTrigger.Entry();
            entry.eventID = EventTriggerType.PointerClick;
            entry.callback.AddListener((eventData) => { OnImageClick(); });
            trigger.triggers.Add(entry);
        }
    }

    void Start()
    {
        if (image != null && image.sprite != null)
            namePhoto = image.sprite.name;
        generePhoto = new GenerePhoto(namePhoto, genere);
        auth = FindAnyObjectByType<Auth>();
    }

    private void OnImageClick()
    {
        if (toggle != null) { 
            toggle.isOn = true;
            if (auth != null)
            {
                auth.SetSelectedGenerePhoto(generePhoto);
            }
        }
        else
        {
            Debug.LogWarning("Toggle no encontrado en el componente OptionPhoto.");
        }
    }
}