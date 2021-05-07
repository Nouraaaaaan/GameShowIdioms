using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO;

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

    [Header("SaveManager Attributes")]
    public SaveTest SaveManager;


    //--------------------------------------------------------------------------------------------------------------------------------//
    //Methods.

    #region CallBacks Region
    private void Awake()
    {
        //check for file existance.
        string dir = Path.Combine(Application.persistentDataPath, "SaveData");
        if (!Directory.Exists(dir))
        {
            SaveManager.Save();
        }

        //load saved values.
        SaveManager.Load();
    }

    private void Start()
    {
        CurrentCharacterIndex = 0;
    }
    #endregion

    #region Arrow Buttons Region
    public void OnclickRightArrowButton()
    {
        SFXManager.Instance.PlaySoundEffect(0);

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
        SFXManager.Instance.PlaySoundEffect(0);

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
    public void SavePlayerName()
    {
        if (EnteredNameText.text != "")
        {
            EnteredName = EnteredNameText.text;
        }
        else
        {
            EnteredName = "player";
        }

        SaveManager.SaveObject.PlayerName = EnteredName;
        SaveManager.Save();
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
        //1.
        SavePlayerName();
        SaveChoosenCharacterType();

        //2.Load GamePlayScene
        SceneManager.LoadScene(1);
    }

    public void SaveChoosenCharacterType()
    {
        SaveManager.SaveObject.CharacterTypeIndex = (int)Characters[GetChoosenCharacterIndex()].characterType;
        SaveManager.Save();

    }
}
