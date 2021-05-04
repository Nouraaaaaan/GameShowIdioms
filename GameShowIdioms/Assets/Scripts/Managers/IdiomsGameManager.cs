using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections.Generic;

public class IdiomsGameManager : MonoBehaviour
{
    //--------------------------------------------------------------------------------------------------------------------------------//
    //Fields.
    public InputField InputField;

    [Header("Camera Attributes")]
    public GameObject Camera;
    public Transform InitialCameraTransform;
    public Transform PresenterCameraTransform;
    public Transform ScreenCameraTransform;
    public Transform PlayerCameraTransform;
    
    [Header("Managers Attributes")]
    public UIManager UIManager;
    public KeyboardManager keyboardManager;
    public GameSceneManager GameSceneManager;
    public CharacterChoosingManager CharacterChoosingManager;
    public CursorManager CursorManager;

    [Header("Current Idiom Attributes")]
    public Idiom[] Idioms;
    public Idiom CurrentIdiom;
    public Image IdiomImage;
    public bool Finished;
    private int DisplayedIdiomNumber = 0;   //when DisplayedIdiomNumber = 4, finish current round.

    [Header("Text Matching Attributes")]
    public string EnterText;

    [Header("Hints Atrributes")]
    public Text HintsNumberText;
    public int HintsNumber;
    public Image HintsNumberBackGroundImage;
    public Button HintsButton;

    [Header("Current Player")]
    private Animator CurrentPlayerAnimator;

    [Header("Characters Atrributes")]
    public Character[] Characters;
    public Character.CharacterType ChoosenCharacterType;
    public Transform[] CharactersPositions;            //from right to left.
    public Text[] CharactersNamesText;                 //from right to left.
    public Image[] CharactersPrizeImages;

    [Header("VFX")]
    public ParticleSystem ConfettiShower;

    [Header("Prizes Stage Attributes")]
    public Sprite GoldenPrizeSprite;
    public Sprite SliverPrizeSprite;
    public Sprite BronzePrizeSprite;

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
        SetRandomIdiom();
        SetIdiomImage();
    }
    #endregion

    #region Setting Current Idiom Region
    private void SetRandomIdiom()
    {

        int randomIndex = Random.Range(0, Idioms.Length);
        CurrentIdiom = Idioms[randomIndex];
    }

    private void SetIdiomImage()
    {
        IdiomImage.sprite = CurrentIdiom.IdiomSprite;
    }
    #endregion

    #region Setting Avatars/Characters Region
    public void SetChoosenCharacterType(Character.CharacterType characterType)
    {
        ChoosenCharacterType = characterType;
    }
    public void SetCharactersPostions()
    {
        int otherCharactersIndex = 1;

        foreach (var character in Characters)
        {
            if (character.characterType == this.ChoosenCharacterType)
            {
                character.transform.position = CharactersPositions[0].transform.position;
                character.transform.eulerAngles = CharactersPositions[0].transform.eulerAngles;
                character.CharacterIndex = 0;
                CurrentPlayerAnimator = character.gameObject.GetComponent<Animator>();
            }
            else
            {
                character.transform.position = CharactersPositions[otherCharactersIndex].transform.position;
                character.transform.eulerAngles = CharactersPositions[otherCharactersIndex].transform.eulerAngles;
                character.CharacterIndex = otherCharactersIndex;
                otherCharactersIndex++;
            }
        }
    }
    public void SetCharactersNames()
    {
        int otherCharactersIndex = 1;

        foreach (var character in Characters)
        {
            if (character.characterType == this.ChoosenCharacterType)
            {
                CharactersNamesText[0].text = CharacterChoosingManager.EnteredName;
            }
            else
            {
                CharactersNamesText[otherCharactersIndex].text = "Player";
                otherCharactersIndex++;
            }
        }
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
        //IdiomTextCanvas.SetActive(true);
        CurrentIdiom.IdiomCanvas.SetActive(true);
        //CurrentIdiom.Words[0].InputField.Select();
        InputField.Select();
        CurrentIdiom.Words[0].Caret.SetActive(true);
        UIManager.SubmitButtonCanvas.SetActive(true);
        UIManager.HintButtonCanvas.SetActive(true);
    }
    #endregion

    #region Keyboard Callbacks Region
    public void AlphabetPressed(char enteredChar)
    {
        /*
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
        */
    }

    public void BackSpacePressed()
    {
        /*
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
        */
    }
    #endregion

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
    public void onClickSubmitButton()
    {
        DisplayedIdiomNumber++;

        if (DisplayedIdiomNumber >= 4)
        {
            ShowResult();
        }
        else
        {
            StartCoroutine(DisplayNextIdiomCorotinue());
        }
    }

   
    private IEnumerator DisplayNextIdiomCorotinue()
    {
        //1.Color Text.
        ColorAllTextTest();
        SFXManager.Instance.PlaySoundEffect(3);
        yield return new WaitForSeconds(1f);

        //2.Reset.
        CursorManager.CanEditText = false;
        CursorManager.CurrentFieldIndex = 0;
        InputField.text = "";
        for (int i = 0; i < CurrentIdiom.Words.Count; i++)
        {
            CurrentIdiom.Words[i].Text.text = "";
            CurrentIdiom.Words[i].Text.color = Color.black;
        }

        //3.Disable Previous Idiom.
        CurrentIdiom.IdiomCanvas.SetActive(false);
        LeanTween.scale(IdiomImage.gameObject, new Vector3(0f, 0f, 0f), 0.2f); //fade IdiomImage.

        //4.Generate new random Idiom.
        yield return new WaitForSeconds(0.2f);
        SetRandomIdiom();
        SetIdiomImage();

        //5.Enable new random Idiom.
        yield return new WaitForSeconds(0.5f);
        
        LeanTween.scale(IdiomImage.gameObject, new Vector3(1f, 1f, 1f), 0.2f); //pup-up IdiomImage.
        CurrentIdiom.IdiomCanvas.SetActive(true);
        CurrentIdiom.Words[0].Caret.SetActive(true);

        CursorManager.CanEditText = true;
        InputField.Select();
        
    }

    public void ShowResult()
    {
        StartCoroutine(ShowResultCorotinue());
    }

    private IEnumerator ShowResultCorotinue()
    {
        //1.Color Text.
        ColorAllTextTest();
        SFXManager.Instance.PlaySoundEffect(3);
        yield return new WaitForSeconds(1f);

        //2.Disable Unneeded UI.
        UIManager.SubmitButtonCanvas.SetActive(false);
        UIManager.HintButtonCanvas.SetActive(false);
        IdiomTextCanvas.SetActive(false);

        //3.Translate Camera To Competitors.
        TranslateCamera(InitialCameraTransform, 0.3f);

        //4.Popup Prize Images.
        yield return new WaitForSeconds(0.5f);
        UIManager.PrizeImagesCanvas.SetActive(true);
        SetRandomPrizeDegree();
        //SettingPrizesSprites();
        StartCoroutine(PopupPrizesSprites());

        //3.Translate Camera To Player.
        yield return new WaitForSeconds(2f);
        //UIManager.PrizeImagesCanvas.SetActive(false);
        TranslateCamera(PlayerCameraTransform, 0.3f);

        //4.
        ConfettiShower.Play();
        CurrentPlayerAnimator.SetBool("dance", true);
        SFXManager.Instance.PlaySoundEffect(2);

        //5.Fadeout & Reload.    
        yield return new WaitForSeconds(2f);
        UIManager.StartScreenFadeout(0.05f);
        yield return new WaitForSeconds(3f);
        SceneManager.LoadScene(0);

        #region Archive
        /*
        //3.Translate Camera To Player.
        TranslateCamera(PlayerCameraTransform, 0.3f);

        //4.Check Result
        yield return new WaitForSeconds(0.3f);
        if (StringMatch(InputField.text, CurrentIdiom.CorrectPhrase))//Correct Phrase.
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

        //5.Fadeout & Reload.    
        yield return new WaitForSeconds(2f);
        UIManager.StartScreenFadeout(0.05f);
        yield return new WaitForSeconds(3f);
        SceneManager.LoadScene(0);
        */
        #endregion
    }
    #endregion

    #region Testing Region
    [Header("Testing")]
    public GameObject IdiomTextCanvas;

    public void ColorAllTextTest()
    {
        //Loop over Chars, Color them.
        StartCoroutine(ColorCoroutine());
    }

    private IEnumerator ColorCoroutine()
    {
        for (int i = 0; i < CurrentIdiom.Words.Count; i++)
        {
            int charIndex = 0;
            int correctCharIndex = 0;

            while ((charIndex < CurrentIdiom.Words[i].Text.text.Length) && (correctCharIndex < CurrentIdiom.Words[i].WordCorrectPhrase.Length))
            {
                if (CurrentIdiom.Words[i].Text.text[charIndex].ToString().ToLower() == CurrentIdiom.Words[i].WordCorrectPhrase[correctCharIndex].ToString())
                {
                    CurrentIdiom.Words[i].Text.color = Color.green;
                }
                else
                {
                    CurrentIdiom.Words[i].Text.color = Color.red;
                }
                charIndex ++;
                correctCharIndex++;
            }

            //Debug.Log("Finished");
            yield return new WaitForSeconds(0f);
        }
        
    }
    #endregion

    #region Hints Region
    public void OnclickHintsButton()
    {
        //1.Decrease hints number, update hints text.
        HintsNumber--;
        HintsNumberText.text = HintsNumber.ToString();

        //2.check if hints == 0, change sprite color to red, disable hints button.
        if (HintsNumber == 0)
        {
            HintsNumberBackGroundImage.color = Color.red;
            HintsButton.interactable = false;
        }

        //3.Show hints char.
        int randomWordIndex = Random.Range(0, CurrentIdiom.Words.Count);
        CurrentIdiom.Words[randomWordIndex].Text.text = CurrentIdiom.Words[randomWordIndex].WordCorrectPhrase;
        SFXManager.Instance.PlaySoundEffect(3);
    }

    #endregion

    #region Prizes Region
    //---------------------------------------------//
    //Setting RandomPrizeDegree.
    private void SetRandomPrizeDegree()
    {
        int randomIndex = Random.Range(0, 2);
        Characters[0].characterPrizeDegree = (Character.CharacterPrizeDegree)randomIndex;

        switch (Characters[0].characterPrizeDegree)
        {
            case Character.CharacterPrizeDegree.First:
                Characters[1].characterPrizeDegree = Character.CharacterPrizeDegree.Third;
                Characters[2].characterPrizeDegree = Character.CharacterPrizeDegree.Second;
                break;
            case Character.CharacterPrizeDegree.Second:
                Characters[1].characterPrizeDegree = Character.CharacterPrizeDegree.Third;
                Characters[2].characterPrizeDegree = Character.CharacterPrizeDegree.First;
                break;
            case Character.CharacterPrizeDegree.Third:
                Characters[1].characterPrizeDegree = Character.CharacterPrizeDegree.First;
                Characters[2].characterPrizeDegree = Character.CharacterPrizeDegree.Second;
                break;
        }
        SettingPrizesSprites();
    }



    //---------------------------------------------//
    //Setting Prizes Sprites.
    private void SettingPrizesSprites()
    {     
        foreach (var character in Characters)
        {
            switch (character.characterPrizeDegree)
            {
                case Character.CharacterPrizeDegree.First:
                    CharactersPrizeImages[character.CharacterIndex].sprite = GoldenPrizeSprite;
                    break;
                case Character.CharacterPrizeDegree.Second:
                    CharactersPrizeImages[character.CharacterIndex].sprite = SliverPrizeSprite;
                    break;
                case Character.CharacterPrizeDegree.Third:
                    CharactersPrizeImages[character.CharacterIndex].sprite = BronzePrizeSprite;
                    break;
            }
        }
        
    }

    private IEnumerator PopupPrizesSprites()
    {
        foreach (var image in CharactersPrizeImages)
        {
            LeanTween.scale(image.gameObject, new Vector3(0.003298893f, 0.003298893f, 0.003298893f), 0.3f);
            SFXManager.Instance.PlaySoundEffect(4);
            yield return new WaitForSeconds(0.4f);
        }
    }


    #endregion
}
