﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DentedPixel;
using UnityEngine.UI;

public class IdiomsGameManager : MonoBehaviour
{
    //--------------------------------------------------------------------------------------------------------------------------------//
    //Fields.
    [Header("Camera Attributes")]
    public GameObject Camera;
    public Transform PresenterCameraTransform;
    public Transform ScreenCameraTransform;
    public Transform PlayerCameraTransform;

    [Header("Managers Attributes")]
    public UIManager UIManager;

    [Header("Current Idiom Attributes")]
    public Idiom CurrentIdiom;
    private int CurrentWordIndex; //words
    private int CurrenCharIndex;  //chars
    private bool Finished;

    [Header("Text Matching Attributes")]
    public string EnterText;

    [Header("Current Player")]
    public Animator CurrentPlayerAnimator;

    [Header("VFX")]
    public ParticleSystem ConfettiShower;
    //--------------------------------------------------------------------------------------------------------------------------------//
    //Methods.

    #region Singelton Region
    public static IdiomsGameManager Instance;
    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }
    #endregion

    #region CallBacks Region
    private void Start()
    {
        
    }
    #endregion

    #region Camera Transition Region
    public void TranslateCamera(Transform cameraNewTransform, float speed)
    {
        LeanTween.move(Camera, cameraNewTransform, speed);
        LeanTween.rotate(Camera, cameraNewTransform.eulerAngles, speed);
    }
    #endregion

    #region Start Round Region
    public void StartRound()
    {
        StartCoroutine(StartRoundCorotinue());
    }

    private IEnumerator StartRoundCorotinue()
    {
        //Popup Round Number.     
        UIManager.PopupRoundNumber();

        //Play Round Number Animation.
        yield return new WaitForSeconds(1f);
        UIManager.PlayRoundNumberAnimation();

        //Translate Camera To Presenter.
        yield return new WaitForSeconds(0.8f);
        TranslateCamera(PresenterCameraTransform, 1f);

        //Presenter Talk.
        yield return new WaitForSeconds(1f);
        UIManager.PopupPresenterSpeechBubble();
        yield return new WaitForSeconds(2.5f);
        UIManager.FadeAwayPresenterSpeechBubble();

        //Translate Camera To Screen.
        yield return new WaitForSeconds(0.5f);
        TranslateCamera(ScreenCameraTransform, 0.5f);

        //Popup Keyboard.
        yield return new WaitForSeconds(1f);
        UIManager.KeyboardCanvas.SetActive(true);
        CurrentIdiom.EnteredText.SetActive(true);
        UIManager.SubmitButtonCanvas.SetActive(true);
    }
    #endregion

    public void AlphabetPressed(char enteredChar)
    {
        if (Finished)
            return;

        //Debug.Log("A new alphabet was pressed !");

        //Set Char.
        CurrentIdiom.Words[CurrentWordIndex].Char[CurrenCharIndex].text = enteredChar.ToString();
        EnterText += enteredChar.ToString();

        //Update Current Char Index.
        CurrenCharIndex++;

        //Check if we finished current word.
        if (CurrenCharIndex >= CurrentIdiom.Words[CurrentWordIndex].Char.Count)
        {
            CurrenCharIndex = 0;
            CurrentWordIndex++;
        }

        //Check if we finished all words.
        if (CurrentWordIndex >= CurrentIdiom.Words.Count)
        {
            Debug.Log("Finished !");
            Finished = true;
        }
    }

    public void BackSpacePressed()
    {
        //Update Current Char Index.
        CurrenCharIndex--;

        if (CurrenCharIndex < 0)
        {
            CurrentWordIndex--;
            CurrenCharIndex = CurrentIdiom.Words[CurrentWordIndex].Char.Count;

        }

        //Set Char.
        CurrentIdiom.Words[CurrentWordIndex].Char[CurrenCharIndex].text = "";
    }

    #region Text Matching Region

    public void CheckEnteredPhrase()
    {
        if (StringMatch(EnterText, CurrentIdiom.CorrectPhrase))
        {
            Debug.Log("Correct Phrase !");
        }
        else
        {
            Debug.Log("Wrong Phrase !");
        }

        TranslateCamera(PlayerCameraTransform, 1);
    }

    public bool StringMatch(string enteredString, string correctString)
    {
        return (string.Equals(enteredString, correctString));
    }

    #endregion

    #region Result Region
    public void ShowResult()
    {
        StartCoroutine(ShowResultCorotinue());
    }

    private IEnumerator ShowResultCorotinue()
    {
        //1.Color Text.
        ColorText();
        SFXManager.Instance.PlaySoundEffect(3);
        yield return new WaitForSeconds(1f);

        //2.Disable Unneeded UI.
        UIManager.KeyboardCanvas.SetActive(false);
        UIManager.SubmitButtonCanvas.SetActive(false);
        CurrentIdiom.EnteredText.SetActive(false);

        //3.Translate Camera To Presenter, Show Correct Answer.
        TranslateCamera(PresenterCameraTransform, 0.5f);
        UIManager.PresenterSpeechBubbleText.text = "The Answer is ....";
        UIManager.PopupPresenterSpeechBubble();

        //4.Translate Camera To Player.
        yield return new WaitForSeconds(2);
        TranslateCamera(PlayerCameraTransform, 0.5f);

        //5.Check Result
        yield return new WaitForSeconds(0.5f);
        if (StringMatch(EnterText, CurrentIdiom.CorrectPhrase))//Correct Phrase.
        {
            ConfettiShower.Play();
            CurrentPlayerAnimator.SetBool("dance", true);
            SFXManager.Instance.PlaySoundEffect(2);
        }
        else//Wrong Phrase.
        {
            CurrentPlayerAnimator.SetBool("sad", true);
            SFXManager.Instance.PlaySoundEffect(1);
        }
    }

    private void ColorText()
    {
        int currentCharIndex = 0;

       
        for (int i = 0; i < CurrentIdiom.Words.Count; i++)
        {
            for (int j = 0; j < CurrentIdiom.Words[i].Char.Count; j++)
            {
                if (string.Equals(EnterText[currentCharIndex].ToString(), CurrentIdiom.CorrectPhrase[currentCharIndex].ToString()))
                {
                    //Debug.Log("Match "+ EnterText[currentCharIndex].ToString()+"And "+ CurrentIdiom.Words[i].Char[j].text.ToString());
                    CurrentIdiom.Words[i].Char[j].color = Color.green;
                }
                else
                {
                    //Debug.Log("Miss");
                    CurrentIdiom.Words[i].Char[j].color = Color.red;
                }
                currentCharIndex++;
            }
        }
        
    }
    #endregion
}
