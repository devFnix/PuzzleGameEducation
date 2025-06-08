using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Letter : MonoBehaviour
{
    public int position = -1;
    Text text;
    public string texto = "";
    // Start is called before the first frame update
    void Start()
    {
        text = gameObject.GetComponentInChildren<Text>();
    }
    public void Setear(int pos, string tex)
    {
        position = pos;
        texto = tex;

    }
    // Update is called once per frame
    void Update()
    {
        text.text = texto;
    }
}
