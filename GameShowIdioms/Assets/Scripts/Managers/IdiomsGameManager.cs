using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DentedPixel;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

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
    public KeyboardManager keyboardManager;

    [Header("Current Idiom Attributes")]
    public Idiom CurrentIdiom;
    private int CurrenCharIndex;  //chars
    public bool Finished;

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
        TranslateCamera(PresenterCameraTransform, 0.5f);

        //Presenter Talk.
        yield return new WaitForSeconds(0.5f);
        UIManager.PopupPresenterSpeechBubble();
        yield return new WaitForSeconds(2.5f);
        UIManager.FadeAwayPresenterSpeechBubble();

        //Translate Camera To Screen.
        yield return new WaitForSeconds(0.5f);
        TranslateCamera(ScreenCameraTransform, 0.5f);

        //Popup Keyboard & UI.
        yield return new WaitForSeconds(1f);
        UIManager.KeyboardCanvas.SetActive(true);     //Open Keyboard.
        //keyboardManager.OpenKeyboard();             //Open Keyboard.
        CurrentIdiom.EnteredText.SetActive(true);
        //UIManager.SubmitButtonCanvas.SetActive(true);
        UIManager.HintButtonCanvas.SetActive(true);
    }
    #endregion

    public void AlphabetPressed(char enteredChar)
    {
        if (Finished)
            return;

        //Move to first unfilled letter.
        while (CurrentIdiom.Char[CurrenCharIndex].text != "")
        {
            EnterText += CurrentIdiom.Char[CurrenCharIndex].text.ToString();
            CurrenCharIndex++;
        }

        //Set Char.
        CurrentIdiom.Char[CurrenCharIndex].text = enteredChar.ToString();
        EnterText += enteredChar.ToString();

        //Update Current Char Index.
        CurrenCharIndex++;

        //Check if we finished current word.
        if (CurrenCharIndex >= CurrentIdiom.Char.Count)
        {
            CurrenCharIndex = 0;
            Debug.Log("Finished !");
            Finished = true;
            ShowResult();
        }
    }

    public void BackSpacePressed()
    {     
        if (EnterText.Length <= 0)
            return;

        //Update Current Char Index.
        CurrenCharIndex--;

        
        //Set Char.
        CurrentIdiom.Char[CurrenCharIndex].text = "";

        Debug.Log(EnterText.Length);
        if (EnterText.Length > 0)
        {
            EnterText = EnterText.Remove(EnterText.Length - 1);
        }
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

    #region Hint Region
    public void OnclickHintButton()
    {
        //Get random letter & it must be not previously filled.
        int randomLetterIndex = Random.Range(0, CurrentIdiom.Char.Count);
        while (CurrentIdiom.Char[randomLetterIndex].text != "")
        {
            randomLetterIndex = Random.Range(0, CurrentIdiom.Char.Count);
        }

        
        //Set Letter.
        CurrentIdiom.Char[randomLetterIndex].text = CurrentIdiom.CorrectPhrase[randomLetterIndex].ToString();
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
        UIManager.HintButtonCanvas.SetActive(false);
        CurrentIdiom.EnteredText.SetActive(false);

        //3.Translate Camera To Presenter, Show Correct Answer.
        //TranslateCamera(PresenterCameraTransform, 0.5f);
        //UIManager.PresenterSpeechBubbleText.text = "The Answer is ....";
        //UIManager.PopupPresenterSpeechBubble();

        //4.Translate Camera To Player.
        TranslateCamera(PlayerCameraTransform, 0.3f);

        //5.Check Result
        yield return new WaitForSeconds(0.3f);
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

        //6.Fadeout & Reload.
        yield return new WaitForSeconds(2f);
        UIManager.StartScreenFadeout(0.05f);
        yield return new WaitForSeconds(3f);
        SceneManager.LoadScene(0);

    }

    private void ColorText()
    {       
        for (int j = 0; j < CurrentIdiom.Char.Count; j++)
        {
            if (string.Equals(EnterText[j].ToString(), CurrentIdiom.CorrectPhrase[j].ToString()))
            {
                 CurrentIdiom.Char[j].color = Color.green; //Mtach.
            }
            else
            {
                 CurrentIdiom.Char[j].color = Color.red;  //MissMatch.
            }
        }
    }
    #endregion
}
