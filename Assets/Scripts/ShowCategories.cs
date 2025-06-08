using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowCategories : MonoBehaviour
{
    public PlayerController playerController;
    public List<GameObject> Categorias;
    public GameObject categoryPrefab; // Asigna tu prefab en el Inspector
    public Transform container;       // Asigna el contenedor en el Inspector

    void Start()
    {
        playerController = GameObject.FindObjectOfType<PlayerController>();
        MostrarCategorias();
    }
    public void MostrarCategorias()
    {
        // Limpia el contenedor si ya hay hijos
        foreach (Transform child in container)
        {
            Destroy(child.gameObject);
        }

        List<string> categorias = playerController.GetListaCategories();
        foreach (string cat in categorias)
        {
            GameObject go = Instantiate(categoryPrefab, container);
            CategoryItem item = go.GetComponent<CategoryItem>();
            item.SetCategory(cat);
        }
    }
  
    // Update is called once per frame
    void Update()
    {
        
    }
}
