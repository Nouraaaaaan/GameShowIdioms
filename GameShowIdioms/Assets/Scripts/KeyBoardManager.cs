using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using MoreMountains.NiceVibrations;

public class KeyBoardManager : MonoBehaviour
{
    public int CurrentFieldIndex = 0;                 //pointer the last entered letter.
    public bool CanEditText = true;                   //controls text addition ability. 

    public void OnclickKeyboardButton(string letter)
    {
        //Debug.Log(letter + " was clicked !");

        //1.SFX
        SFXManager.Instance.PlaySoundEffect(0);

        //2.Add Letter
        AddNewLetter(letter);

        //Haptics.
        HapticManager.Instance.HapticPulse(HapticTypes.LightImpact);
    }

    public void OnclickBackSpace()
    {
        //Debug.Log("Backspace was clicked !");

        //1.SFX
        SFXManager.Instance.PlaySoundEffect(0);

        //2.
        AddBackSpace();

        //Haptics.
        HapticManager.Instance.HapticPulse(HapticTypes.LightImpact);
    }

    public void AddNewLetter(string letter)
    {
        if (!CanEditText)
            return;

        if (CurrentFieldIndex < IdiomsGameManager.Instance.CurrentIdiom.Words.Count)
        {
            IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Text.text = letter;

            DisableCaret(CurrentFieldIndex);

            CurrentFieldIndex++;
            
            if (CurrentFieldIndex < IdiomsGameManager.Instance.CurrentIdiom.Words.Count)
            {
                while ((IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Text.color == Color.green))
                {
                    CurrentFieldIndex++;
                }

                Debug.Log("Enable Caret");
                EnableCaret(CurrentFieldIndex);
            }
            else
            {
                //Submit Answer.
                Debug.Log("Submit Answer");
                CanEditText = false;
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
                DisableCaret(CurrentFieldIndex);
            }

            if (!CheckForlettersToErase())
            {
                Debug.Log("There's no letters to erase");
                EnableCaret(CurrentFieldIndex);
                return;
            }

            CurrentFieldIndex--;
            while (IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Text.color == Color.green)
            {
                CurrentFieldIndex--;
            } //move to first letter which is not a hint.
            
            
            if (CurrentFieldIndex >= 0)
            {
                EnableCaret(CurrentFieldIndex);
                IdiomsGameManager.Instance.CurrentIdiom.Words[CurrentFieldIndex].Text.text = "";
            }
        }
    }

    public void EnableCaret(int index)
    {
        IdiomsGameManager.Instance.CurrentIdiom.Words[index].Caret.SetActive(true);
        //LeanTween.alpha(IdiomsGameManager.Instance.CurrentIdiom.Words[index].Caret.GetComponent<RectTransform>(), 0f, 0.4f).setLoopPingPong();
    }

    public void DisableCaret(int index)
    {
        IdiomsGameManager.Instance.CurrentIdiom.Words[index].Caret.SetActive(false);
        //LeanTween.cancel(IdiomsGameManager.Instance.CurrentIdiom.Words[index].Caret);
        //IdiomsGameManager.Instance.CurrentIdiom.Words[index].Caret.gameObject.GetComponent<Image>().color = new Color(255f, 255f, 255f, 255f);
    }

    private int GetHintsNumber()
    {
        int hintsNumber = 0;

        for (int i = CurrentFieldIndex; i >= 0; i--)
        {
            if (IdiomsGameManager.Instance.CurrentIdiom.Words[i].Text.color == Color.green)
            {
                hintsNumber++;
            }
        }

        Debug.Log("hintsNumber : "+ hintsNumber);
        return hintsNumber;
    }

    private bool CheckForlettersToErase()
    {
        if (GetHintsNumber() == CurrentFieldIndex)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
