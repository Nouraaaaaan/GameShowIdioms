using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameSceneManager : MonoBehaviour
{
    //--------------------------------------------------------------------------------------------------------------------------------//
    //Fields.
    [Header("Scenes Attributes")]
    public GameObject Home;
    public GameObject GameplayScene;

    //--------------------------------------------------------------------------------------------------------------------------------//
    //Methods.
    public void GameplaySceneTransition()
    {
        Home.SetActive(false);
        GameplayScene.SetActive(true);
        IdiomsGameManager.Instance.UIManager.ChooseCharactersCanvas.SetActive(false);
        IdiomsGameManager.Instance.UIManager.StartButtonCanvas.SetActive(true);
    }

}
