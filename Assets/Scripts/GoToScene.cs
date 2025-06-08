using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoToScene : MonoBehaviour
{
    public string NameScene;

    public void LoadSceneByName(string sceneName)
    {
        StartCoroutine(SceneCoroutine(sceneName));
    }
    public void GoScene() { StartCoroutine(SceneCoroutine(NameScene)); }

    private IEnumerator SceneCoroutine(string scene)
    {
        yield return new WaitForSeconds(1.5f);
        SceneManager.LoadScene(scene);
    }
}
