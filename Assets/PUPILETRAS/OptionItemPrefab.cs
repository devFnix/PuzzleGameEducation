using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class OptionItemPrefab : MonoBehaviour
{
    [SerializeField] private Image optionImage;
    [SerializeField] private Button buttonInfo;
    [SerializeField] private TextMeshProUGUI optionText;
    public string nameItem = "";
    private int optionId;
    private OptionsPanelController panelController;

    private void Awake()
    {
        buttonInfo.onClick.AddListener(()=>onActiveHelpMenuPupiletras());
    }

    public void Setup(string name, Sprite image, string text, int id, OptionsPanelController controller)
    {
        optionImage.sprite = image;
        optionText.text = text;
        optionId = id;
        panelController = controller;
        this.nameItem = name;
    }

    private void onActiveHelpMenuPupiletras()
    {
        PlayerController.instance.SetCurrentOption(optionId);
        panelController.onActiveHelpMenuPupiletras(optionId);
    }
}