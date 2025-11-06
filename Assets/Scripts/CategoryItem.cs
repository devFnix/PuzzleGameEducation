using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class CategoryItem : MonoBehaviour
{
    public string categoryName;
    public ShowCategories showCategories;
    public TextMeshProUGUI textName;
    public Image ImagenSprite;
    // Llama esto desde ShowCategories para asignar el texto
    public void SetCategory(string name_scene,string name, Sprite sprite)
    {
        categoryName = name_scene;
        // Si usas TextMesh
        textName.text = name;
        ImagenSprite.sprite = sprite;
        showCategories = GameObject.FindObjectOfType<ShowCategories>();
    }

    public void selectedCategory()
    {
        Debug.Log("Categoría clickeada: " + categoryName);
        //showCategories.playerController.SetCategory(categoryName);
        PlayerController.instance.SetCategory(categoryName.ToLower());
    }
}
