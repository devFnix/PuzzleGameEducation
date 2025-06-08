using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using TMPro;


// La clase Letter ahora implementa interfaces para manejar eventos de arrastre
public class LetraP : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IDragHandler
{
    [SerializeField] private TextMeshProUGUI letterText;
    [SerializeField] private Image backgroundImage;

    private char letter;
    private int x, y;
    private WordSearchGame gameManager;
    private bool isFound = false;

    // Para mantener un registro de a qué palabras pertenece esta letra
    private Dictionary<string, WordDirection> wordsContained = new Dictionary<string, WordDirection>();

    // Referencia a la cámara principal para el raycast (necesario para eventos de arrastre)
    private Camera mainCamera;

    private void Awake()
    {
        mainCamera = Camera.main;
    }

    public void Initialize(int gridX, int gridY, char initialLetter, WordSearchGame manager)
    {
        x = gridX;
        y = gridY;
        gameManager = manager;
        SetLetter(initialLetter);

        // Resetear estado visual
        ClearHighlight();
    }

    public void SetLetter(char newLetter)
    {
        letter = char.ToUpper(newLetter);
        letterText.text = letter.ToString();
    }

    public char GetLetter()
    {
        return letter;
    }

    public int GetX()
    {
        return x;
    }

    public int GetY()
    {
        return y;
    }

    public void SetHighlight(Color color)
    {
        backgroundImage.color = color;
    }

    public void ClearHighlight()
    {
        backgroundImage.color = Color.white;
    }

    public void SetFound(bool found)
    {
        isFound = found;
    }

    public bool IsFound()
    {
        return isFound;
    }

    public void AddToWord(string word, WordDirection direction)
    {
        wordsContained[word] = direction;
    }

    // Implementación de IPointerDownHandler
    public void OnPointerDown(PointerEventData eventData)
    {
        gameManager.StartSelection(this);
    }

    // Implementación de IDragHandler
    public void OnDrag(PointerEventData eventData)
    {
        // Raycast para detectar sobre qué letra estamos
        RaycastHit2D hit = Physics2D.Raycast(mainCamera.ScreenToWorldPoint(eventData.position), Vector2.zero);

        if (hit.collider != null)
        {
            LetraP hoveredLetter = hit.collider.GetComponent<LetraP>();
            if (hoveredLetter != null)
            {
                gameManager.ContinueSelection(hoveredLetter);
            }
        }
        else
        {
            // Alternativa para UI: usar raycasting de UI
            List<RaycastResult> results = new List<RaycastResult>();
            EventSystem.current.RaycastAll(eventData, results);

            foreach (RaycastResult result in results)
            {
                LetraP hoveredLetter = result.gameObject.GetComponent<LetraP>();
                if (hoveredLetter != null)
                {
                    gameManager.ContinueSelection(hoveredLetter);
                    break;
                }
            }
        }
    }

    // Implementación de IPointerUpHandler
    public void OnPointerUp(PointerEventData eventData)
    {
        gameManager.EndSelection();
    }
}