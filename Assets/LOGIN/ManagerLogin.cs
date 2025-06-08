using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ManagerLogin : MonoBehaviour
{
    public int currtentStep = 0; // 0: Step1, 1: Step2, 2: Step3
    [SerializeField] GameObject Login;
    [SerializeField] GameObject Info;
    [SerializeField] List<GameObject> Steps;
    [SerializeField] GameObject NextButton;
    [SerializeField] GameObject PreviousButton;
    [SerializeField] GameObject AceptarButton;
    [SerializeField] Button AddUserButton;
    [SerializeField] Button InfoButton;
    public int index = 0;
    void Start()
    {
        ShowLogin();
        AddUserButton.onClick.AddListener(() =>
        {
            //this.currtentStep = 0;
            ShowStep(this.currtentStep);
            NextButton.SetActive(true);
            PreviousButton.SetActive(true);

        });
        InfoButton.onClick.AddListener(() =>
        {
            ShowInfo();
        });
        NextButton.GetComponent<Button>().onClick.AddListener(() =>NextClic());
        PreviousButton.GetComponent<Button>().onClick.AddListener(() =>PreviousClic());
        AceptarButton.GetComponent<Button>().onClick.AddListener(() =>
        {
            ShowLogin();
        });
    }
    void PreviousClic()
    {
        this.currtentStep--;
        if (this.currtentStep < 0)
            ShowLogin();
        else
        {
            this.currtentStep = 0;
            ShowStep(this.currtentStep);
        }
    }
    void NextClic()
    {
        this.currtentStep++;
       Debug.Log("Current Step: " + this.currtentStep + " Steps Count: " + Steps.Count);
        if (this.currtentStep >= Steps.Count)
        {
            this.currtentStep = Steps.Count - 1;
        }
        ShowStep(this.currtentStep);
        if (this.currtentStep == (Steps.Count-1))
        {
            NextButton.SetActive(false);
            AceptarButton.SetActive(true);
        }
    }
    public void ShowLogin()
    {
        Login.SetActive(true);
        Info.SetActive(false);
        this.currtentStep = 0;
        NextButton.SetActive(false);
        PreviousButton.SetActive(false);
        AceptarButton.SetActive(false);
        foreach (GameObject step in Steps)
        {
            step.SetActive(false);
        }

    }
    public void ShowInfo()
    {
        Login.SetActive(false);
        Info.SetActive(true);
        this.currtentStep = 0;
        NextButton.SetActive(false);
        PreviousButton.SetActive(false);
        AceptarButton.SetActive(false);
        foreach (GameObject step in Steps)
        {
            step.SetActive(false);
        }
    }
    private void ShowStep(int state)
    {
        Login.SetActive(false);
        Info.SetActive(false);
        //this.currtentStep = 0;
        NextButton.SetActive(true);
        PreviousButton.SetActive(true);
        foreach (GameObject step in Steps)
        {
            step.SetActive(false);
        }
        if (state < Steps.Count && state >= 0)
        {
            Steps[state].SetActive(true);
        }
    }
    // Update is called once per frame
    void Update()
    {
        /*
        if (index != currtentStep) {
            index = currtentStep;
                ShowStep(index);
        }*/
    }
}
