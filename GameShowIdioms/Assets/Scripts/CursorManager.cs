using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CursorManager : MonoBehaviour
{
    public int CurrentFieldIndex = 0;
    public int EnteredTextLength;

    public bool CanEditText = true;
    

    public void CheckForFieldUpdate()
    {
        if (!CanEditText)
            return;

        //1.SFX.
        SFXManager.Instance.PlaySoundEffect(0);

        //2.Get Entered Text Length.
        EnteredTextLength = IdiomsGameManager.Instance.InputField.text.Length;

        if (EnteredTextLength <= CurrentFieldIndex)
        {
            //Debug.Log("BackSpace");

            if(CurrentFieldIndex < IdiomsGameManager.Instance.CurrentIdiom.Words.Count)
              IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.SetActive(false);

            CurrentFieldIndex--;

            if (CurrentFieldIndex >= 0)
            {
                IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.SetActive(true);
                IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Text.text = "";
            }
        } //backspace.
        else
        {
            if (!(IdiomsGameManager.Instance.InputField.text[EnteredTextLength - 1].ToString() == " ") && (CurrentFieldIndex < IdiomsGameManager.Instance.CurrentIdiom.Words.Count))
            {
                //Debug.Log("Character was entered !");
                IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Text.text = IdiomsGameManager.Instance.InputField.text[EnteredTextLength - 1].ToString();
                IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.SetActive(false);
                CurrentFieldIndex++;

                if(CurrentFieldIndex < IdiomsGameManager.Instance.CurrentIdiom.Words.Count)
                   IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.SetActive(true);
            }           
        }       
    }

    public void Reset()
    {
        CurrentFieldIndex = 0;
        IdiomsGameManager.Instance.InputField.text = "";
    }

}
