using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CruciAristas : MonoBehaviour
{
    public Image linePrefab; // Prefab de la l�nea
    private List<Image> lines = new List<Image>(); // Lista de las l�neas dibujadas
    [SerializeField]
    public RectTransform panelAristas; // Panel donde se dibujar�n las l�neas
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
        // Determinar color seg�n el equipo
        Color lineColor = isTeam1 ? new Color32(0xFF, 0x43, 0x99, 0xFF) : new Color32(0x22, 0xD5, 0xFF, 0xFF);

        // Llamar directamente al m�todo para dibujar la l�nea
        DrawLineBetweenButtons(startPos, endPos, lineColor);
    }

    // M�todo para dibujar la l�nea entre dos botones
    void DrawLineBetweenButtons(Vector2 startPos, Vector2 endPos, Color lineColor)
    {
        if (linePrefab == null || panelAristas == null)
        {
            Debug.LogError("[Non-Networked] linePrefab or panelAristas is not set correctly!");
            return;
        }

        // Instanciar la l�nea
        Image newLine = Instantiate(linePrefab, panelAristas);
        // Aplicar el color de la l�nea basado en el equipo
        newLine.color = lineColor;
        // Calcular el punto medio entre los botones para colocar la l�nea
        Vector2 middlePoint = (startPos + endPos) / 2;
        newLine.rectTransform.anchoredPosition = middlePoint;

        // Calcular la distancia entre los botones para ajustar la longitud de la l�nea
        float distance = Vector2.Distance(startPos, endPos);
        newLine.rectTransform.sizeDelta = new Vector2(distance, newLine.rectTransform.sizeDelta.y);

        // Calcular el �ngulo de rotaci�n de la l�nea para que se alinee correctamente
        Vector2 direction = endPos - startPos;
        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
        newLine.rectTransform.rotation = Quaternion.Euler(0, 0, angle);

        // Guardar la l�nea en la lista de l�neas
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
}