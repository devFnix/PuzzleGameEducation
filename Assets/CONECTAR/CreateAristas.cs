using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CreateAristas : MonoBehaviour
{
    public Image linePrefab; // Prefab de la línea
    private List<Image> lines = new List<Image>(); // Lista de las líneas dibujadas
    [SerializeField]
    public RectTransform panelAristas; // Panel donde se dibujarán las líneas
    public bool isTeam1 = true;

    public void Start()
    {
        if (linePrefab != null)
        {
            linePrefab.color = new Color32(0xFF, 0x43, 0x99, 0xFF); // FF4399
        }
    }

    public void DibujarLine(Vector2 startPos, Vector2 endPos)
    {
        // Determinar color según el equipo
        Color lineColor = isTeam1 ? new Color32(0xFF, 0x43, 0x99, 0xFF) : new Color32(0x22, 0xD5, 0xFF, 0xFF);

        // Llamar directamente al método para dibujar la línea
        DrawLineBetweenButtons(startPos, endPos, lineColor);
    }

    // Método para dibujar la línea entre dos botones
    void DrawLineBetweenButtons(Vector2 startPos, Vector2 endPos, Color lineColor)
    {
        if (linePrefab == null || panelAristas == null)
        {
            Debug.LogError("[Non-Networked] linePrefab or panelAristas is not set correctly!");
            return;
        }

        // Instanciar la línea
        Image newLine = Instantiate(linePrefab, panelAristas);
        // Aplicar el color de la línea basado en el equipo
        newLine.color = lineColor;
        // Calcular el punto medio entre los botones para colocar la línea
        Vector2 middlePoint = (startPos + endPos) / 2;
        newLine.rectTransform.anchoredPosition = middlePoint;

        // Calcular la distancia entre los botones para ajustar la longitud de la línea
        float distance = Vector2.Distance(startPos, endPos);
        newLine.rectTransform.sizeDelta = new Vector2(distance, newLine.rectTransform.sizeDelta.y);

        // Calcular el ángulo de rotación de la línea para que se alinee correctamente
        Vector2 direction = endPos - startPos;
        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
        newLine.rectTransform.rotation = Quaternion.Euler(0, 0, angle);

        // Guardar la línea en la lista de líneas
        lines.Add(newLine);
    }

    public void ClearLines()
    {
        foreach (Image line in lines)
        {
            if (line != null && line.gameObject != null)
            {
                Destroy(line.gameObject);
            }
        }
        lines.Clear();
    }

    /*private void Update()
    {
        if (isTeam1)
            linePrefab.color = new Color32(0xFF, 0x43, 0x99, 0xFF); // FF4399
        else linePrefab.color = new Color32(0x22, 0xD5, 0xFF, 0xFF); // 22D5FF
    }*/
}