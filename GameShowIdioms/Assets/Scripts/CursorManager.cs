using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CursorManager : MonoBehaviour
{
    public int CurrentFieldIndex = 0;
    public int EnteredTextLength;
    public int LastEnteredTextLength;

    public bool CanEditText = true;

    public bool HintChar = false;
    

    public void CheckForFieldUpdate()
    {
        //Debug.Log("input field value has changed !");

        if (!CanEditText)
            return;

        //1.SFX.
        SFXManager.Instance.PlaySoundEffect(0);

        //2.Get Entered Text Length.
        EnteredTextLength = IdiomsGameManager.Instance.InputField.text.Length;

        if ((LastEnteredTextLength > IdiomsGameManager.Instance.InputField.text.Length) && (CurrentFieldIndex > 0))
        {
            Debug.Log("BackSpace");

            if (CurrentFieldIndex < IdiomsGameManager.Instance.CurrentIdiom.Words.Count)
            {
                IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.SetActive(false);
            }
              
            CurrentFieldIndex--;

            if (CurrentFieldIndex >= 0)
            {
                IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.SetActive(true);
                IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Text.text = "";
            }

            if(IdiomsGameManager.Instance.InputField.text[IdiomsGameManager.Instance.InputField.text.Length -1].ToString() == " ")
            {
                //Debug.Log("Extra !");
                IdiomsGameManager.Instance.InputField.text = IdiomsGameManager.Instance.InputField.text.Substring(0, IdiomsGameManager.Instance.InputField.text.Length - 2);
                
            }
        } //backspace.
        else
        {
            if (!(IdiomsGameManager.Instance.InputField.text[EnteredTextLength - 1].ToString() == " ") && (CurrentFieldIndex < IdiomsGameManager.Instance.CurrentIdiom.Words.Count))
            {
                //Debug.Log("Character was entered !");
                IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Text.text = IdiomsGameManager.Instance.InputField.text[EnteredTextLength - 1].ToString();
                
                //if(!HintChar)
                //   IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Text.color = Color.black;

                IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.SetActive(false);
                CurrentFieldIndex++;

                if (CurrentFieldIndex < IdiomsGameManager.Instance.CurrentIdiom.Words.Count)
                {
                    IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.SetActive(true);
                    LeanTween.alpha(IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.GetComponent<RectTransform>(), 0f, 0.4f).setLoopPingPong();
                }
                else
                {
                    Debug.Log("Finished !!!");
                    IdiomsGameManager.Instance.onClickSubmitButton();
                }
                   
            }           
        }

        LastEnteredTextLength = IdiomsGameManager.Instance.InputField.text.Length; 
    }

    
    public void Reset()
    {
        CurrentFieldIndex = 0;
        IdiomsGameManager.Instance.InputField.text = "";
    }

}
