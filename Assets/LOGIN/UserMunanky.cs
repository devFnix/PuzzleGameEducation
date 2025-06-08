using Newtonsoft.Json;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

public class UserMunanky : MonoBehaviour
{
    public UserData UserData = null;
    public string team = "";
    public string selectionCategory = "";
    public string gender = "";
    public string name = "";
    // Start is called before the first frame update
    private static UserMunanky instance;
    string[] listaUsers = new string[]
{
    "{ \"id\":\"ade454ed-5908-4703-b8a9-8e972b15ac62\", \"displayName\":\"\", \"email\":\"jordan90@example.com\", \"gender\":\"male\", \"school\":\"Tokyo\", \"name\":\"Jordan 97\", \"age\":18, \"lastname\":\"Garcia\" }",
    "{ \"id\":\"01e94ab1-3be5-4a7f-a65a-97fddd9980b0\", \"displayName\":\"\", \"email\":\"morgan21@example.com\", \"gender\":\"male\", \"school\":\"Tokyo\", \"name\":\"Charlie 52\", \"age\":11, \"lastname\":\"Johnson\" }",
    "{ \"id\":\"4f83210a-0c8d-40ce-94f1-4cd32cd172ec\", \"displayName\":\"\", \"email\":\"test44@example.com\", \"gender\":\"male\", \"school\":\"Paris\", \"name\":\"Charlie 88\", \"age\":11, \"lastname\":\"Davis\" }",
    "{ \"id\":\"7587dc56-09db-42b7-9f45-35cc94263a59\", \"displayName\":\"\", \"email\":\"test76@example.com\", \"gender\":\"male\", \"school\":\"Berlin\", \"name\":\"Morgan 24\", \"age\":14, \"lastname\":\"Garcia\" }",
    "{ \"id\":\"96bc95e5-0c92-4f06-9273-1a2b0ac2a8f2\", \"displayName\":\"\", \"email\":\"morgan46@example.com\", \"gender\":\"male\", \"school\":\"New York\", \"name\":\"Taylor 37\", \"age\":18, \"lastname\":\"Brown\" }",
    "{ \"id\":\"71ad6f07-5939-4f1a-bb80-6366e1e7156a\", \"displayName\":\"\", \"email\":\"alex24@example.com\", \"gender\":\"female\", \"school\":\"London\", \"name\":\"Alex 24\", \"age\":15, \"lastname\":\"Smith\" }",
     "{ \"id\":\"1a9e590b-4cd2-406c-a242-60f59404d698\", \"displayName\":\"\", \"email\":\"charlie17@example.com\", \"gender\":\"female\", \"school\":\"New York\", \"name\":\"Charlie 56\", \"age\":16, \"lastname\":\"Brown\" }",
    "{ \"id\":\"afa327fb-3760-49c0-a039-e1066128079e\", \"displayName\":\"\", \"email\":\"charlie32@example.com\", \"gender\":\"female\", \"school\":\"New York\", \"name\":\"Test 93\", \"age\":13, \"lastname\":\"Johnson\" }",
    "{ \"id\":\"e5a03877-1aa8-40c1-a1c5-ee822e71f3eb\", \"displayName\":\"\", \"email\":\"charlie17@example.com\", \"gender\":\"female\", \"school\":\"New York\", \"name\":\"Morgan 32\", \"age\":12, \"lastname\":\"Johnson\" }",
    "{ \"id\":\"849a813b-d5b6-42a2-b8f1-46e22201bf06\", \"displayName\":\"\", \"email\":\"charlie39@example.com\", \"gender\":\"female\", \"school\":\"Sydney\", \"name\":\"Morgan 75\", \"age\":13, \"lastname\":\"Smith\" }",
    "{ \"id\":\"5771b69b-0809-4dc2-bb6f-8c8f63b1ff12\", \"displayName\":\"\", \"email\":\"charlie39@example.com\", \"gender\":\"female\", \"school\":\"London\", \"name\":\"Alex 30\", \"age\":18, \"lastname\":\"Garcia\" }"

};
    private void Awake()
    {
        // Si no existe una instancia, asignarla y hacerla persistente
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject); // No destruir este GameObject al cambiar de escena
        }
        else
        {
            // Si ya existe una instancia, destruir el duplicado
            Destroy(gameObject);
        }
    }
    private void Start()
    {
        GenerarAleatorio();
    }
    void GenerarAleatorio()
    {
        string jsonString = listaUsers[Random.Range(0, listaUsers.Length)]; ;
        SetUser(jsonString);

    }
    public void SetUser(string user)
    {
        Debug.Log(user);
        UserData = JsonConvert.DeserializeObject<UserData>(user);
        name = UserData.name;
        gender = UserData.gender;
    }
    public void Selecteam1() { team = "Team 1"; }
    public void Selecteam2() { team = "Team 2"; }
    public void SetTeam(string team_) { team = team_; }
    public string GetTeam() { return team; }
    public void SetSelectionCategory(string selectionCategory_) { selectionCategory = selectionCategory_; }
    public string GetSelectionCategory() { return selectionCategory; }
    public UserData GetUser() { return UserData; }
}
