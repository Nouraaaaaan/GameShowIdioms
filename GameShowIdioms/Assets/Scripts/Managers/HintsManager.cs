using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HintsManager : MonoBehaviour
{
    //-----------------Fields--------------------------//
    public Text HintsText;
    public int currentHintsNumber;

    //------------------Methods-----------------------//

    #region Load Region
    private void Start()
    {
        LoadSavedHintsValue();

        if (currentHintsNumber <= 0)
        {
            IdiomsGameManager.Instance.HintsNumberBackGroundImage.color = Color.red;
            IdiomsGameManager.Instance.HintsButton.interactable = false;
        }
    }

    public void LoadSavedHintsValue()
    {
        //Load saved object from file.
        IdiomsGameManager.Instance.SaveManager.Load();

        //Update CurrentCash Variable.
        currentHintsNumber = IdiomsGameManager.Instance.SaveManager.SaveObject.HintsNumber;
    }

    

    #endregion

    #region Save Region

    public void SaveHintsValue()
    {
        IdiomsGameManager.Instance.SaveManager.SaveObject.HintsNumber = currentHintsNumber;
        IdiomsGameManager.Instance.SaveManager.Save();
    }

    #endregion

}
