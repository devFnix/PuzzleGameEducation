using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Categoria
{
    public string categoria { get; set; }
    public string categoria_name { get; set; }
    public string imagen { get; set; }
    public List<Niveles> niveles { get; set; }
}

public class Niveles
{
    public string nivel { get; set; }
    public List<Opciones> opciones { get; set; }
}

public class Opciones
{
    public string opciones { get; set; }
    public string opciones_es { get; set; }
    public string descripcion_quechua { get; set; }
    public string descripcion_es { get; set; }
    public string imagen { get; set; }
    public string sonido { get; set; }
    public string verificacion { get; set; }
}

public class DataGame
{
    public string juego { get; set; }
    public List<Categoria> categorias { get; set; }
}
