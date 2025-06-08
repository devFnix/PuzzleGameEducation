using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelItem : MonoBehaviour
{
    public string levelName = "";
    public void SelectedLevel()
    {
        StartCoroutine(WaitAndSelectLevel());
    }
    private IEnumerator WaitAndSelectLevel()
    {
        // Espera hasta que PlayerController.instance esté disponible
        while (PlayerController.instance == null)
        {
            yield return null;
        }

        PlayerController.instance.SelectionLevel(levelName);
    }
}
