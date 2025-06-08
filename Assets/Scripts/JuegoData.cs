using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// Root myDeserializedClass = JsonConvert.DeserializeObject<List<Root>>(myJsonResponse);
public class Nivele
{
    public string nivel { get; set; }
    public List<Opcione> opciones { get; set; }
}

public class Opcione
{
    public string opcion_qh { get; set; }
    public string opcion_es { get; set; }
    public string descripcion_qh { get; set; }
    public string descripcion_es { get; set; }
}

public class JuegoData
{
    public string categoria { get; set; }
    public List<Nivele> niveles { get; set; }
}