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

        List<Categoria> categorias = playerController.GetListaCategories();
        foreach (Categoria cat in categorias)
        {
            GameObject go = Instantiate(categoryPrefab, container);
            CategoryItem item = go.GetComponent<CategoryItem>();
            string procesar = cat.imagen.Replace(".png", "");
            //string rutaA = "images/empty_memoria";
            string ruta = "images/" + procesar;
            Sprite loadedSprite = Resources.Load<Sprite>(ruta);
            item.SetCategory(cat.categoria,cat.categoria_name, loadedSprite);
        }
    }
  
    // Update is called once per frame
    void Update()
    {
        
    }
}
