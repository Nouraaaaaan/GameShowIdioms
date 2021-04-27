using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CursorManager : MonoBehaviour
{
    public int CurrentFieldIndex = 0;

    public void CheckForFieldUpdate()
    {
        if (IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].InputField.text.Length == IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].InputField.characterLimit)
        {
            //Debug.Log("Done !");

            //Update CurrentFieldIndex.
            CurrentFieldIndex++;

            //Select CurrentFieldIndex.
            if(CurrentFieldIndex < IdiomsGameManager.Instance.CurrentIdiom.Words.Count)
               IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].InputField.Select();
        }
    }
}
