[System.Serializable]
public class UserData
{
    public string id { get; set; }
    public string displayName { get; set; }
    public string email { get; set; }
    public string gender { get; set; }
    public string school { get; set; }
    public string name { get; set; }
    public int age { get; set; }
    public string lastname { get; set; }
}
[System.Serializable]
public class SessionData
{
    public string message { get; set; }
    public string token { get; set; }
    public UserData data { get; set; }
}
