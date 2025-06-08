using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SpritePair
{
    public Sprite frontSprite; // Dibujo
    public Sprite backSprite;  // Imagen real
    public string matchId;     // ID para identificar pares relacionados
}

public class CardsController : MonoBehaviour
{
    [SerializeField] Card cardPrefab;
    [SerializeField] Transform gridTransform;
    [SerializeField] SpritePair[] spritePairs;
    Niveles niveles = new Niveles();
    private List<CardData> cardDataList;
    int matchCounts = 0;
    Card firstSelected;
    Card secondSelected;
    int option = 0;
    private void Start()
    {
        StartCoroutine(WaitPlayerController());
    }
    private IEnumerator WaitPlayerController()
    {
        // Espera hasta que PlayerController.instance y levelSelected y opciones estén disponibles
        while (PlayerController.instance == null ||
               PlayerController.instance.levelSelected == null ||
               PlayerController.instance.levelSelected.opciones == null ||
               PlayerController.instance.levelSelected.opciones.Count == 0)
        {
            yield return null;
        }
        Play();
    }
    public void Play()
    {
        niveles = PlayerController.instance.levelSelected;
        List<SpritePair> pairs = new List<SpritePair>();
        int matchId = 0;

        foreach (Opciones item in niveles.opciones)
        {
            // Carga el sprite desde Resources/images/(nombreImagen)
            string procesar = item.imagen.Replace(".png", "");
            string rutaA = "images/" + procesar + "_a";  // Nota: Resources.Load no necesita extensión

            //string rutaA = "images/empty_memoria";
            string rutaB = "images/" + procesar + "_b";

            Sprite loadedSprite = Resources.Load<Sprite>(rutaA);
            Sprite loadedSprite_ = Resources.Load<Sprite>(rutaB);

            if (loadedSprite == null)
            {
                Debug.LogWarning("No se encontró la imagen: " + "images/" + procesar + "_a.png");
                continue;
            }
            if (loadedSprite_ == null)
            {
                Debug.LogWarning("No se encontró la imagen: " + "images/" + procesar + "_b.png");
                continue;
            }
            else
            {
                Debug.Log("Imagen cargada: " + loadedSprite.name);
                Debug.Log("Imagen cargada: " + loadedSprite_.name);
            }
            // Crea el SpritePair (puedes usar el mismo sprite para front y back, o modificar según tu lógica)
            SpritePair pair = new SpritePair
            {
                frontSprite = loadedSprite,
                backSprite = loadedSprite_, // O pon otro sprite si tienes uno diferente
                matchId = matchId.ToString()
            };

            pairs.Add(pair);
            matchId++;
        }
        spritePairs = pairs.ToArray();
        PrepareCards();
        CreateCards();
    }
   
    private void PrepareCards()
    {
        cardDataList = new List<CardData>();

        // Para cada par de sprites
        for (int i = 0; i < spritePairs.Length; i++)
        {
            // Crear datos para la carta con el dibujo
            cardDataList.Add(new CardData()
            {
                sprite = spritePairs[i].frontSprite,
                matchId = spritePairs[i].matchId
            });

            // Crear datos para la carta con la imagen real
            cardDataList.Add(new CardData()
            {
                sprite = spritePairs[i].backSprite,
                matchId = spritePairs[i].matchId
            });
        }

        // Mezclar las cartas
        ShuffleCards(cardDataList);
    }

    void ShuffleCards(List<CardData> cardList)
    {
        for (int i = cardList.Count - 1; i > 0; i--)
        {
            int randomIndex = UnityEngine.Random.Range(0, i + 1);
            // Intercambiar los elementos en i y randomIndex
            CardData temp = cardList[i];
            cardList[i] = cardList[randomIndex];
            cardList[randomIndex] = temp;
        }
    }

    private void CreateCards()
    {
        for (int i = 0; i < cardDataList.Count; i++)
        {
            Card card = Instantiate(cardPrefab, gridTransform);
            card.SetIconSprite(cardDataList[i].sprite);
            card.matchId = cardDataList[i].matchId;  // Asignar el ID de coincidencia
            card.cardsController = this;
        }
    }

    public void SetSelected(Card card)
    {
        if (card.isSelected == false)
        {
            card.Show();
            PlayerController.instance.SetCurrentOption(Int32.Parse(card.matchId));
            if (firstSelected == null)
            {
                firstSelected = card;
                return;
            }
            if (secondSelected != card)
            {
                secondSelected = card;
                StartCoroutine(CheckMatching(firstSelected, secondSelected));
                firstSelected = null;
                secondSelected = null;
            }
        }
    }

    IEnumerator CheckMatching(Card a, Card b)
    {
        yield return new WaitForSeconds(0.3f);

        // Ahora comparamos los matchId en lugar de los sprites
        if (a.matchId == b.matchId && a != b)
        {
            // Coinciden
            matchCounts++;
            if (matchCounts >= spritePairs.Length)
            {
                // Nivel completado
                PrimeTween.Sequence.Create()
                .Chain(PrimeTween.Tween.Scale(gridTransform, Vector3.one * 1.2f, 0.2f, ease: PrimeTween.Ease.OutBack))
                .Chain(PrimeTween.Tween.Scale(gridTransform, Vector3.one, 0.1f));
            }
        }
        else
        {
            // No coinciden

            a.Hide();
            b.Hide();

        }
    }
}

// Clase auxiliar para almacenar los datos de cada carta
public class CardData
{
    public Sprite sprite;
    public string matchId;
}