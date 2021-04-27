using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CharacterChoosingManager : MonoBehaviour
{
    //--------------------------------------------------------------------------------------------------------------------------------//
    //Fields.
    [Header("Characters Attributes")]
    public Character[] Characters;
    private int CurrentCharacterIndex;
    
    [Header("Player Name Attributes")]
    public string EnteredName;
    public Text EnteredNameText;


    //--------------------------------------------------------------------------------------------------------------------------------//
    //Methods.

    #region CallBacks Region
    private void Start()
    {
        CurrentCharacterIndex = 0;
    }
    #endregion

    #region Arrow Buttons Region
    public void OnclickRightArrowButton()
    {
        Characters[CurrentCharacterIndex].gameObject.SetActive(false);

        CurrentCharacterIndex++;

        if (CurrentCharacterIndex < Characters.Length)
        {
            Characters[CurrentCharacterIndex].gameObject.SetActive(true);
        }
        else
        {
            CurrentCharacterIndex = 0;
            Characters[CurrentCharacterIndex].gameObject.SetActive(true);
        }
    }

    public void OnclickLeftArrowButton()
    {
        Characters[CurrentCharacterIndex].gameObject.SetActive(false);

        CurrentCharacterIndex--;

        if (CurrentCharacterIndex >= 0)
        {
            Characters[CurrentCharacterIndex].gameObject.SetActive(true);
        }
        else
        {
            CurrentCharacterIndex = Characters.Length - 1;
            Characters[CurrentCharacterIndex].gameObject.SetActive(true);
        }
    }
    #endregion

    #region Player Name Region
    public void SetPlayerName()
    {
        if (EnteredNameText.text != "")
        {
            EnteredName = EnteredNameText.text;
        }
        else
        {
            EnteredName = "player";
        }
    }
    #endregion

    #region Characters Region

    public int GetChoosenCharacterIndex()
    {
        return CurrentCharacterIndex;
    }

    #endregion

    public void OnClickStartButton()
    {
        //Debug.Log("ChoosenCharacterIndex : " + GetChoosenCharacterIndex());     
        //Debug.Log("EnteredPlayerName : " + EnteredName);
        SetPlayerName();
        IdiomsGameManager.Instance.SetChoosenCharacterType(Characters[GetChoosenCharacterIndex()].characterType);
        IdiomsGameManager.Instance.SetCharactersPostions();
        IdiomsGameManager.Instance.SetCharactersNames();
        IdiomsGameManager.Instance.GameSceneManager.GameplaySceneTransition();
    }
}
