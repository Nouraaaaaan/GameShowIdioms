using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CashManager : MonoBehaviour
{
    //-----------------Fields------------------------//
    public int CurrentCash;
    public int EarnedCash;

    public Text CashText;

    public Text EarnCashEnoughtButtonText;
    public Text EarnCashButtonText;

    [Header("VFX Attribute")]
    public ParticleSystem CashVFX;
    //------------------Methods-----------------------//
    //Cash.
    public void LoadSavedCashValue()
    {
        //Load saved object from file.
        IdiomsGameManager.Instance.SaveManager.Load();

        //Update CurrentCash Variable.
        CurrentCash = IdiomsGameManager.Instance.SaveManager.SaveObject.PlayerCash;

        //Update Cash Text.
        UpdateCashText(CurrentCash);
    }

    public void UpdateCashText(int cashValue)
    {
        CashText.text = cashValue.ToString();
    }

    public void UpdateCashValue(int cashValue)
    {
        CurrentCash = cashValue;
    }

    //Earned Cash.
    public void UpdateEarnCashValue(int cashValue)
    {
        this.EarnedCash = cashValue;
    }

    public void UpdateEarnCashButtonText(int cashValue)
    {
        EarnCashButtonText.text = cashValue.ToString();
    }

    public void UpdateEarnCashEnoughtButtonText(int cashValue)
    {
        EarnCashEnoughtButtonText.text = cashValue.ToString() + " is enough";
    }
    //Save.
    public void SaveCashValue()
    {
        //Load saved object from file.
        IdiomsGameManager.Instance.SaveManager.SaveObject.PlayerCash = CurrentCash;

        //Save to file.
        IdiomsGameManager.Instance.SaveManager.Save();
    }

}
