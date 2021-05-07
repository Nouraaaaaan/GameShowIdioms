using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyBoardManager : MonoBehaviour
{
    public int CurrentFieldIndex = 0;                 //pointer the last entered letter.

    public void OnclickKeyboardButton(string letter)
    {
        //Debug.Log(letter + " was clicked !");

        //1.SFX
        SFXManager.Instance.PlaySoundEffect(0);

        //2.Add Letter
        AddNewLetter(letter);
    }

    public void OnclickBackSpace()
    {
        //Debug.Log("Backspace was clicked !");

        //1.SFX
        SFXManager.Instance.PlaySoundEffect(0);

        //2.
        AddBackSpace();
    }

    public void AddNewLetter(string letter)
    {
        if (CurrentFieldIndex < IdiomsGameManager.Instance.CurrentIdiom.Words.Count)
        {
            IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Text.text = letter;

            DisableCaret();

            CurrentFieldIndex++;

            if (CurrentFieldIndex < IdiomsGameManager.Instance.CurrentIdiom.Words.Count)
            {
                EnableCaret();
            }
            else
            {
                //Submit Answer.
                IdiomsGameManager.Instance.onClickSubmitButton();

                //Reset CurrentFieldIndex.
                CurrentFieldIndex = 0;
            }

        }
    }

    public void AddBackSpace()
    {
        if (CurrentFieldIndex > 0)
        {
            if (CurrentFieldIndex < IdiomsGameManager.Instance.CurrentIdiom.Words.Count)
            {
                DisableCaret();
            }

            CurrentFieldIndex--;

            if (CurrentFieldIndex >= 0)
            {
                EnableCaret();
                IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Text.text = "";
            }
        }
    }

    public void EnableCaret()
    {
        IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.SetActive(true);
        LeanTween.alpha(IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.GetComponent<RectTransform>(), 0f, 0.4f).setLoopPingPong();
    }

    public void DisableCaret()
    {
        IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret.SetActive(false);
        LeanTween.cancel(IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Caret);
    }
}
