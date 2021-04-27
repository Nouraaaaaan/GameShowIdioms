using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class IdiomsGameManager : MonoBehaviour
{
    //--------------------------------------------------------------------------------------------------------------------------------//
    //Fields.
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

    [Header("Current Idiom Attributes")]
    public Idiom CurrentIdiom;
    private int CurrenCharIndex;  //chars
    public bool Finished;

    [Header("Text Matching Attributes")]
    public string EnterText;

    [Header("Hints Atrributes")]
    public Text HintsNumberText;
    public int HintsNumber;
    public Image HintsNumberBackGroundImage;
    public Button HintsButton;

    [Header("Current Player")]
    public Animator CurrentPlayerAnimator;

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
        //Testing.
        SetRandomPrizeDegree();
        //SettingPrizesSprites();
    }
    #endregion

    #region Setting Characters Region
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
        //UIManager.KeyboardCanvas.SetActive(true);      //Open Keyboard.
        //keyboardManager.OpenKeyboard();               //Open Keyboard.
        //CurrentIdiom.EnteredText.SetActive(true);
        IdiomTextCanvas.SetActive(true);
        UIManager.SubmitButtonCanvas.SetActive(true);
        UIManager.HintButtonCanvas.SetActive(true);
    }
    #endregion

    #region Keyboard Callbacks Region
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
        SettingPrizesSprites();
        StartCoroutine(PopupPrizesSprites());

        //3.Translate Camera To Player.
        yield return new WaitForSeconds(3f);
        UIManager.PrizeImagesCanvas.SetActive(false);
        TranslateCamera(PlayerCameraTransform, 0.3f);

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
    public TextMeshProUGUI ColorableText;
    public TextMeshProUGUI InputFieldText;
    public TMP_InputField InputField;
    public GameObject IdiomTextCanvas;

    public void ColorAllTextTest()
    {
        //1.Copy Inputfieldtext to temptext.
        ColorableText.text = InputFieldText.text;
        while (ColorableText.text.Length < CurrentIdiom.CorrectPhrase.Length)
        {
            ColorableText.text += "  ";
        }

        //2.Disable inputfieldtext, Enable temptext.
        InputFieldText.gameObject.SetActive(false);
        ColorableText.gameObject.SetActive(true);

        //3.Loop over Char, Color them
        StartCoroutine(ColorCoroutine());
    }

    private IEnumerator ColorCoroutine()
    {
        int charIndex = 0;
        int correctCharIndex = 0;

        while (charIndex < ColorableText.text.Length)
        {
            if (ColorableText.text[charIndex] == ' ')
            {
                charIndex += 1;
            }
            else
            {
                if (ColorableText.text[charIndex] == CurrentIdiom.CorrectPhrase[correctCharIndex])
                    ColorableText.text = ColorableText.text.Remove(charIndex, 1).Insert(charIndex, "<color=#00ff00>" + ColorableText.text[charIndex].ToString() + "</color>");
                else
                    ColorableText.text = ColorableText.text.Remove(charIndex, 1).Insert(charIndex, "<color=#FF0000>" + ColorableText.text[charIndex].ToString() + "</color>");

                yield return new WaitForSeconds(0f);
                charIndex += 24;
            }

            correctCharIndex++;
        }

        Debug.Log("Finished");
        yield return new WaitForSeconds(0f);
    }
    #endregion

    #region HintsRegion

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
        int InputFieldTextLength = InputField.text.Length;
        if (CurrentIdiom.CorrectPhrase[InputFieldTextLength] != ' ')
        {
            InputField.text += CurrentIdiom.CorrectPhrase[InputFieldTextLength];
        }
        else
        {
            InputField.text += ' ';
            InputField.text += CurrentIdiom.CorrectPhrase[InputField.text.Length];
        }

    }

    #endregion

    #region Prizes Region
    //---------------------------------------------//
    //Setting RandomPrizeDegree.
    private void SetRandomPrizeDegree()
    {
        Character.CharacterPrizeDegree characterPrizeDegree;

        for (int i = 0; i < Characters.Length; i++)
        {
            characterPrizeDegree = (Character.CharacterPrizeDegree)Random.Range(0, 3);
            while (ChechForPrizeDegreeRepetition(i, characterPrizeDegree))
            {
                characterPrizeDegree = (Character.CharacterPrizeDegree)Random.Range(0, 2);
            }

            Characters[i].characterPrizeDegree = characterPrizeDegree;
        }
    }

    private bool ChechForPrizeDegreeRepetition(int index, Character.CharacterPrizeDegree characterPrizeDegree)
    {
        bool found = false;

        for (int i = 0; i < index; i++)
        {
            if (Characters[i].characterPrizeDegree == characterPrizeDegree)
            {
                return true;
            }
        }

        return found;
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
            LeanTween.scale(image.gameObject, new Vector3(0.0010383f, 0.0010383f, 0.0010383f), 0.5f);
            yield return new WaitForSeconds(1f);
        }
    }


    #endregion
}
