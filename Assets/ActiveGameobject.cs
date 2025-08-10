using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ActiveGameobject : MonoBehaviour
{
    public GameObject GameObject;
    // Start is called before the first frame update
    void Start()
    {
        gameObject.SetActive(true);
    }

    public void CloseGameObject()
    {
        if (GameObject != null)
        {
            GameObject.SetActive(false);
        }
        else
        {
            Debug.LogWarning("GameObject no asignado en ActiveGameobject.");
        }
    }
    public void OpenGameObject()
    {
        if (GameObject != null)
        {
            GameObject.SetActive(true);
        }
        else
        {
            Debug.LogWarning("GameObject no asignado en ActiveGameobject.");
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
