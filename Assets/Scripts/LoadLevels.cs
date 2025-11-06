using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadLevels : MonoBehaviour
{
    //public PlayerController playerController;
    public List<GameObject> Levels;
    // Start is called before the first frame update
    void Start()
    {
        DisabledAll();
        //playerController = GameObject.FindObjectOfType<PlayerController>();
        LoadLevesEnabled();
    }
    void DisabledAll()
    {
        foreach (GameObject level in Levels)
        {
            level.SetActive(false);
        }
    }
    void EnabledRange(int num)
    {
        for (int i = 0; i < num; i++)
        {
            if (i < Levels.Count)
            {
                Levels[i].SetActive(true);
            }
        }
    }
    public void LoadLevesEnabled()
    {
        //if (playerController != null)
        if(PlayerController.instance !=null)
        {
            //int level = playerController.GetLevel();
            int level = PlayerController.instance.GetLevel();
            EnabledRange(level);
        }
    }
    // Update is called once per frame
    void Update()
    {
        //if (playerController == null)
        if(PlayerController.instance == null)
        {
            //playerController = GameObject.FindObjectOfType<PlayerController>();
            LoadLevesEnabled();
        }
    }
}
