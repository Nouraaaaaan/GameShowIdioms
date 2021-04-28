using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CursorManager : MonoBehaviour
{
    public int CurrentFieldIndex = 0;
    public int EnteredTextLength;
    private bool BackSpace = false;

    public void CheckForFieldUpdate()
    {
        SFXManager.Instance.PlaySoundEffect(0);

        EnteredTextLength = IdiomsGameManager.Instance.InputField.text.Length;

        if (EnteredTextLength <= CurrentFieldIndex)
        {
            Debug.Log("BackSpace");
            IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.SetActive(false);
            CurrentFieldIndex--;
            IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.SetActive(true);
            IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Text.text = "";
        }
        else
        {
            if (!(IdiomsGameManager.Instance.InputField.text[EnteredTextLength - 1].ToString() == " "))
            {
                IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Text.text = IdiomsGameManager.Instance.InputField.text[EnteredTextLength - 1].ToString();
                IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.SetActive(false);
                CurrentFieldIndex++;
                IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.SetActive(true);
            }           
        }       
    }

}
