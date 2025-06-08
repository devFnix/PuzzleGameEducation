using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CategoryItem : MonoBehaviour
{
    public string categoryName;
    public ShowCategories showCategories;
    public TextMeshProUGUI textName;
    // Llama esto desde ShowCategories para asignar el texto
    public void SetCategory(string name)
    {
        categoryName = name;
        // Si usas TextMesh
        textName.text = name;
        showCategories = GameObject.FindObjectOfType<ShowCategories>();
    }

    public void selectedCategory()
    {
        Debug.Log("Categoría clickeada: " + categoryName);
        showCategories.playerController.SetCategory(categoryName);
    }
}
