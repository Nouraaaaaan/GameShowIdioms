using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HintsManager : MonoBehaviour
{
    //-----------------Fields--------------------------//
    public Text HintsText;

    [SerializeField]
    private int currentHintsNumber;

    //------------------Methods-----------------------//

    #region Load Region
    private void Start()
    {
        LoadSavedHintsValue();
    }

    public void LoadSavedHintsValue()
    {
        //Load saved object from file.
        IdiomsGameManager.Instance.SaveManager.Load();

        //Update CurrentCash Variable.
        currentHintsNumber = IdiomsGameManager.Instance.SaveManager.SaveObject.HintsNumber;

        //Update Cash Text.
        UpdateCashText(currentHintsNumber);
    }

    public void UpdateCashText(int hintsValue)
    {
        HintsText.text = hintsValue.ToString();
    }

    #endregion

    #region Save Region

    public void SaveHintsValue(int value)
    {
        currentHintsNumber += value;
        IdiomsGameManager.Instance.SaveManager.SaveObject.HintsNumber = value;
        IdiomsGameManager.Instance.SaveManager.Save();
    }

    #endregion

}
