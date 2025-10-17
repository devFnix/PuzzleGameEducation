using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using PrimeTween;
using TMPro;

public class Card : MonoBehaviour
{
    [SerializeField] private Image iconImage;
    public string texto= "";
    public TextMeshProUGUI textMeshProUGUI;
    public Sprite hiddenIconSprite;
    public Sprite iconSprite;
    public string matchId;  // Nuevo: ID para identificar pares relacionados


    public bool isSelected;
    public CardsController cardsController;

    public void OnCardClick()
    {
        cardsController.SetSelected(this);
    }

    public void SetIconSprite(Sprite sp)
    {
        iconSprite = sp;
        Vector3 currentScale = transform.localScale;
        transform.localScale = new Vector3(-currentScale.x, currentScale.y, currentScale.z);

    }

    public void Show()
    {
        Tween.Rotation(transform, // the target
        new Vector3(0f, 180f, 0f), // 180 degree in y axis
        0.2f); // in 2 seconds

        Tween.Delay(0.1f, () => iconImage.sprite = iconSprite);
        isSelected = true;
        textMeshProUGUI.text = texto;
    }

    public void Hide()
    {
        //Tween.Rotation(transform, new Vector3(0f, 0f, 0f), 0.2f);
        Tween.Rotation(transform, new Vector3(0f, 0f, 0f), 2f);
        Tween.Delay(0.1f, () =>
        {
            iconImage.sprite = hiddenIconSprite;
            isSelected = false;
        });
        textMeshProUGUI.text = "";
    }
}