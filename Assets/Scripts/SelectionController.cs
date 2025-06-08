using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectionController : MonoBehaviour
{
    // Start is called before the first frame update
    PlayerController playerController;
    [SerializeField] private string sceneCategory = "";
    [SerializeField] private string sceneLevel = "";
    void Start()
    {
        playerController = GameObject.FindObjectOfType<PlayerController>();   
    }
    public void SelectedGame(string name) { 
        playerController.SetGameName(name.ToLower());
    }
    public void SelectedCategory(string name)
    {
        playerController.SetCategory(name.ToLower());
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
