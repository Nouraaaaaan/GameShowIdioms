using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    //--------------------------------------------------------------------------------------------------------------------------------//
    //Fields.
    [Header("Start Button Canvas")]
    public GameObject StartButtonCanvas;

    [Header("Start Button Canvas")]
    public GameObject KeyboardCanvas;
    //--------------------------------------------------------------------------------------------------------------------------------//
    //Regions.
    public void OnclickStartButton()
    {
        //Translate Camera.
        IdiomsGameManager.Instance.StartRound();

        //Disable Canvas.
        StartButtonCanvas.SetActive(false);
    }

    public void OnclickKeyboardButton()
    {
        SFXManager.Instance.PlaySoundEffect(0);
    }
}
