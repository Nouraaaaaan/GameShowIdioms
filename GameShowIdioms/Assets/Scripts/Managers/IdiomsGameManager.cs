using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using System.IO;
using TMPro;

public class IdiomsGameManager : MonoBehaviour
{
    //--------------------------------------------------------------------------------------------------------------------------------//
    //Fields.
    //public InputField InputField;
    public TMP_InputField InputField;

    [Header("Camera Attributes")]
    public GameObject Camera;
    public Transform InitialCameraTransform;
    public Transform PresenterCameraTransform;
    public Transform ScreenCameraTransform;
    public Transform PlayerCameraTransform;
    
    [Header("Managers Attributes")]
    public UIManager UIManager;
    public KeyBoardManager KeyBoardManager;
    public GameSceneManager GameSceneManager;
    public CharacterChoosingManager CharacterChoosingManager;
    public CursorManager CursorManager;
    public SaveTest SaveManager;
    public GiftManager GiftManager;
    public HintsManager hintsManager;
    public CashManager cashManager;

    [Header("Current Idiom Attributes")]
    public Idiom[] Idioms;
    public Idiom CurrentIdiom;
    public Image IdiomImage;
    public bool Finished;
    private int DisplayedIdiomNumber = 0;   //when DisplayedIdiomNumber = 4, finish current round.
    private List<int> randomList;           //use this list to pick 4 random idioms foreach round.
    //private bool rightAnswer = true;      //Is current answer is correct ?
    private int NumberOfCorrectAnswers = 0; //number of correct answers per round.

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
    private int choosenCharacterIndex;
    public Transform[] CharactersPositions;            //from right to left.
    public Text[] CharactersNamesText;                 //from right to left.
    public Image[] CharactersPrizeImages;
    public Text[] CharactersScoresText;

    [Header("VFX")]
    public ParticleSystem ConfettiShower;

    [Header("Prizes Stage Attributes")]
    public Sprite GoldenPrizeSprite;
    public Sprite SliverPrizeSprite;
    public Sprite BronzePrizeSprite;

    [Header("Counter Attributes")]
    private bool count = true;
    private int counterValue = 0;
    private bool timeBouns = false;
    private int timeBounsThreshold = 40;

    [Header("Earned Value Attributes")]
    private int earnedValue = 100;
    private int earnedValueDecreaseAmount = 25;

    [Header("CrownImages")]
    public Image[] Crowns;

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

        //check for file existance.
        string dir = Path.Combine(Application.persistentDataPath, "SaveData");
        if (!Directory.Exists(dir))
        {
            SaveManager.Save();
        }
    }
    #endregion

    #region CallBacks Region
    private void Start()
    {
        //Generate 4 random indeces.
        randomList = new List<int>();
        GenerateRandomDistincitIdioms();

        //Set Current Idiom.
        CurrentIdiom = Idioms[randomList[0]];
        SetIdiomImage();

        //Set Characters.
        SetChoosenCharacterType((Character.CharacterType)SaveManager.SaveObject.CharacterTypeIndex);
        SwapChoosenCharacter(SetChoosenCharacterIndex((Character.CharacterType)SaveManager.SaveObject.CharacterTypeIndex));
        SetCharactersPostions();
        SetCharactersNames(SaveManager.SaveObject.PlayerName);     
        UIManager.SetAvatarImage(Characters);
        UIManager.SetAvatarScoreText(SaveManager.SaveObject.PlayersScore);
        SetFirstPlayerCrown(UIManager.AvatarsScoreText);

        //Set Cash.
        cashManager.LoadSavedCashValue();
        //UIManager.UpdateHintButtons(cashManager.CurrentCash);

        //Set Round Number.
        UIManager.SetRoundNumber();
        UIManager.SetScreenRoundNumber();

        //Show/Disable InputField.
        if (SaveManager.SaveObject.ShowNameInputField)
        {
            UIManager.InputFieldCanvas.SetActive(true);
        }
        else
        {
            UIManager.InputFieldCanvas.SetActive(false);
        }
    }
    #endregion

    #region Setting Current Idiom Region

    private void SetIdiomImage()
    {
        IdiomImage.sprite = CurrentIdiom.IdiomSprite;
    }

    private void GenerateRandomDistincitIdioms()
    {
        for (int i = 0; i < 4; i++)
        {
            int numToAdd = Random.Range(0, Idioms.Length);

            while (randomList.Contains(numToAdd))
            {
                numToAdd = Random.Range(0, Idioms.Length);
            }

            //Debug.Log("numToAdd : " + numToAdd);
            randomList.Add(numToAdd);
        }

        //Debug.Log("Done !");
    }
    #endregion

    #region Setting Avatars/Characters Region
    public void SetChoosenCharacterType(Character.CharacterType characterType)
    {
        ChoosenCharacterType = characterType;
    }

    private int SetChoosenCharacterIndex(Character.CharacterType characterType)
    {
        switch (characterType)
        {
            case Character.CharacterType.NerdGirl:
                choosenCharacterIndex = 0;
                break;
            case Character.CharacterType.FakeGirl:
                choosenCharacterIndex = 1;
                break;
            case Character.CharacterType.BladMan:
                choosenCharacterIndex = 2;
                break;
            default:
                break;
        }

        return choosenCharacterIndex;
    }

    private void SwapChoosenCharacter(int choosenCharacterIndex)
    {
        Character temp = Characters[0];
        Characters[0] = Characters[choosenCharacterIndex];
        Characters[choosenCharacterIndex] = temp;
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

    public void SetCharactersNames(string playerName)
    {
        int otherCharactersIndex = 1;

        foreach (var character in Characters)
        {
            if (character.characterType == this.ChoosenCharacterType)
            {
                if(playerName != "")
                   CharactersNamesText[0].text = playerName;
                else
                    CharactersNamesText[0].text = "You";
            }
            else
            {
                CharactersNamesText[otherCharactersIndex].text = character.DefaultNames[Random.Range(0, character.DefaultNames.Length)];
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
        SFXManager.Instance.FadeOutMusic(0.05f);
        SFXManager.Instance.FadeOutExtraMusic(0.05f);

        //Translate Camera To Screen.
        yield return new WaitForSeconds(1f);
        TranslateCamera(ScreenCameraTransform, 0.5f);
        SFXManager.Instance.PlayMusic(7, false, 0);

        //Popup Keyboard & UI.
        yield return new WaitForSeconds(1f);
        CurrentIdiom.IdiomCanvas.SetActive(true);
        UIManager.CustomKeyBoardCanvas.SetActive(true);  //open Custom KeyBoard.
        CurrentIdiom.Words[0].Caret.SetActive(true);
        UIManager.HintButtonCanvas.SetActive(true);
        UIManager.IdiomImageCanvas.SetActive(true);
        UIManager.ScreenCanvas.SetActive(true);
        UIManager.SettingsCanvas.SetActive(true);
        UIManager.CoinsCanvas.SetActive(true);

        StartCoroutine(CounterCorotinue());       
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
        if (CheckAnswer())
        {
            SFXManager.Instance.PlaySoundEffect(8);
        }
        else
        {
            //lose one star.
            earnedValue -= earnedValueDecreaseAmount;
            Debug.Log("earnedValue : "+ earnedValue);
            UIManager.LoseOneStar();
            //play sfx.
            SFXManager.Instance.PlaySoundEffect(9);
        }
        UpdateCorrectAnswersNumber();
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
        CurrentIdiom = Idioms[randomList[DisplayedIdiomNumber]];
        SetIdiomImage();

        //5.Enable new random Idiom.
        yield return new WaitForSeconds(0.5f);
        
        LeanTween.scale(IdiomImage.gameObject, new Vector3(0.85f, 0.85f, 0.85f), 0.2f); //pup-up IdiomImage.
        CurrentIdiom.IdiomCanvas.SetActive(true);
        CurrentIdiom.Words[0].Caret.SetActive(true);

        KeyBoardManager.CanEditText = true;
        InputField.Select();        
    }

    public void ShowResult()
    {
        StartCoroutine(ShowResultCorotinue());
    }

    private IEnumerator ShowResultCorotinue()
    {
        count = false;                        //stop counter.

        //1.Color Text.
        ColorAllTextTest();
        if (CheckAnswer())
        {
            SFXManager.Instance.PlaySoundEffect(8);
        }
        else
        {
            //lose one star.
            earnedValue -= earnedValueDecreaseAmount;
            Debug.Log("earnedValue : " + earnedValue);
            UIManager.LoseOneStar();
            //play sfx.
            SFXManager.Instance.PlaySoundEffect(9);
        }
        UpdateCorrectAnswersNumber();
        yield return new WaitForSeconds(1f);

        //2.Disable Unneeded UI.
        UIManager.SubmitButtonCanvas.SetActive(false);
        UIManager.HintButtonCanvas.SetActive(false);
        IdiomTextCanvas.SetActive(false);
        InputField.DeactivateInputField();
        UIManager.CustomKeyBoardCanvas.SetActive(false);
        UIManager.IdiomImageCanvas.SetActive(false);
        UIManager.ScreenCanvas.SetActive(false);

        //SFX.
        SFXManager.Instance.FadeOutMusic(0.7f);
        yield return new WaitForSeconds(0.1f);
        SFXManager.Instance.PlayMusic(5, true, 6);

        //3.Translate Camera To Competitors.
        TranslateCamera(InitialCameraTransform, 0.3f);

        //4.Popup Prize Images.
        yield return new WaitForSeconds(0.5f);
        UIManager.PrizeImagesCanvas.SetActive(true);
        SetRandomPrizeDegree();
        StartCoroutine(PopupPrizesSprites());

        //3.Translate Camera To Player.
        yield return new WaitForSeconds(2f);
        TranslateCamera(PlayerCameraTransform, 0.3f);

        //4.
        if (Characters[0].characterPrizeDegree == Character.CharacterPrizeDegree.First)
        {
            ConfettiShower.Play();
            CurrentPlayerAnimator.SetBool("dance", true);
            SFXManager.Instance.PlaySoundEffect(2);
            yield return new WaitForSeconds(3f);
        }
        
        //5.show Round End ui.
        UIManager.RoundEndCanvas.gameObject.SetActive(true);
        UIManager.StartRoundEndCanvasFadeout(0.08f);
        GiftManager.UpdateCurrentImageValue();
        GiftManager.IncreaseImageValue();


        cashManager.UpdateEarnCashButtonText(int.Parse(CharactersScoresText[0].text));            //update ui with earned coins.
        cashManager.UpdateTripleEarnCashButtonText(int.Parse(CharactersScoresText[0].text));
        cashManager.UpdateCashText(cashManager.CurrentCash);
        UIManager.UpdateLeaderBoardNames();

        UIManager.UpdateRoundNumber(); //update round number
    }

    private void UpdateCorrectAnswersNumber()
    {
        if (CheckAnswer())
        {
            NumberOfCorrectAnswers++;
        }
    }

    private Character.CharacterPrizeDegree AnswersResult()
    {
        Character.CharacterPrizeDegree characterPrizeDegree = Character.CharacterPrizeDegree.Third;

        switch (NumberOfCorrectAnswers)
        {
            case 0 :
                {
                    Debug.Log(NumberOfCorrectAnswers + "Correct Answer");
                    characterPrizeDegree = Character.CharacterPrizeDegree.Third;
                    break;
                }
            case 1:
                {
                     Debug.Log(NumberOfCorrectAnswers + "Correct Answer");
                    characterPrizeDegree = Character.CharacterPrizeDegree.Third;
                    break;
                }
            case 2:
                {
                     Debug.Log(NumberOfCorrectAnswers + "Correct Answer");
                    characterPrizeDegree = Character.CharacterPrizeDegree.Second;
                    break;
                }
            case 3:
                {
                     Debug.Log(NumberOfCorrectAnswers + "Correct Answer");
                    //characterPrizeDegree = Character.CharacterPrizeDegree.Second;
                    characterPrizeDegree = (CheckForTimeBouns()) ? Character.CharacterPrizeDegree.First : Character.CharacterPrizeDegree.Second;
                    break;
                }
            case 4:
                {
                     Debug.Log(NumberOfCorrectAnswers + "Correct Answer");
                    characterPrizeDegree = Character.CharacterPrizeDegree.First;
                    break;
                }
        }

        return characterPrizeDegree;
    }
    #endregion

    #region Coloring Region
    [Header("Coloring Region")]
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
            yield return new WaitForSeconds(0f);
        }
    }
    #endregion

    #region Hints Region
    public void OnclickHintsButton()
    {
        //1.Decrease hints number, update hints text.
        hintsManager.currentHintsNumber--;
        hintsManager.HintsText.text = hintsManager.currentHintsNumber.ToString();

        //2.check if hints == 0, change sprite color to red, disable hints button.
        if (hintsManager.currentHintsNumber <= 0)
        {
            HintsNumberBackGroundImage.color = Color.red;
            HintsButton.interactable = false;
        }

        //3.Show hints char at letter we're currently standing at.
        //CurrentIdiom.Words[CursorManager.CurrentFieldIndex].Text.text = CurrentIdiom.Words[CursorManager.CurrentFieldIndex].WordCorrectPhrase;  //show correct char.
        KeyBoardManager.AddNewLetter(CurrentIdiom.Words[CursorManager.CurrentFieldIndex].WordCorrectPhrase); //show correct char.
        CurrentIdiom.Words[CursorManager.CurrentFieldIndex].Text.color = Color.green;                //set char color to green.
        GameObject TextObj = CurrentIdiom.Words[CursorManager.CurrentFieldIndex].Text.gameObject;    //play popup animation.
        PlayPopupAnimation(TextObj);
        //InputField.text += CurrentIdiom.Words[CursorManager.CurrentFieldIndex].WordCorrectPhrase;   //update inputfield text.

        //Debug.Log("CursorManager.CurrentFieldIndex" + CursorManager.CurrentFieldIndex);
        if (CursorManager.CurrentFieldIndex < CurrentIdiom.Words.Count)
        {
            //CurrentIdiom.Words[CursorManager.CurrentFieldIndex].Text.text = CurrentIdiom.Words[CursorManager.CurrentFieldIndex].WordCorrectPhrase;  //show correct char.
            KeyBoardManager.AddNewLetter(CurrentIdiom.Words[CursorManager.CurrentFieldIndex].WordCorrectPhrase); //show correct char.
            CurrentIdiom.Words[CursorManager.CurrentFieldIndex].Text.color = Color.green;                //set char color to green.
            GameObject TextObj2 = CurrentIdiom.Words[CursorManager.CurrentFieldIndex].Text.gameObject;    //play popup animation.
            PlayPopupAnimation(TextObj2);
            //InputField.text += CurrentIdiom.Words[CursorManager.CurrentFieldIndex].WordCorrectPhrase;   //update inputfield text.
        }
        

        SFXManager.Instance.StopSoundEffect();                                                      //play SFX.
        SFXManager.Instance.PlaySoundEffect(3);


        //4.Save Hints Value.
        hintsManager.SaveHintsValue();

        
    }

    public void ShowOneHintLetter()
    {
        //Show hints char at letter we're currently standing at.
        CurrentIdiom.Words[KeyBoardManager.CurrentFieldIndex].Text.text = CurrentIdiom.Words[KeyBoardManager.CurrentFieldIndex].WordCorrectPhrase.ToUpper();  //show correct char.
        CurrentIdiom.Words[KeyBoardManager.CurrentFieldIndex].Text.color = Color.green;                //set char color to green.
        GameObject TextObj = CurrentIdiom.Words[KeyBoardManager.CurrentFieldIndex].Text.gameObject;    //play popup animation.
        PlayPopupAnimation(TextObj);
        //InputField.text += CurrentIdiom.Words[CursorManager.CurrentFieldIndex].WordCorrectPhrase;   //update inputfield text.

        SFXManager.Instance.StopSoundEffect();                                                      //play SFX.
        SFXManager.Instance.PlaySoundEffect(3);

        KeyBoardManager.DisableCaret(KeyBoardManager.CurrentFieldIndex);
        KeyBoardManager.CurrentFieldIndex++; //update CurrentFieldIndex.

        if (KeyBoardManager.CurrentFieldIndex < CurrentIdiom.Words.Count)
        {
            KeyBoardManager.EnableCaret(KeyBoardManager.CurrentFieldIndex); //show caret.
        }
        else
        {
            //submit.
            onClickSubmitButton();
            //reset.
            KeyBoardManager.CurrentFieldIndex = 0;
            KeyBoardManager.DisableCaret(KeyBoardManager.CurrentFieldIndex);
        }
    }

    public void ShowAllHintLetters()
    {
        //1.disable caret.
        KeyBoardManager.DisableCaret(KeyBoardManager.CurrentFieldIndex);

        //2.Erase all entered text.
        //3.loop over all char, set correct char.
        //4.Set color to green.
        foreach (var letter in CurrentIdiom.Words)
        {
            letter.Text.text = letter.WordCorrectPhrase.ToUpper();
            letter.Text.color = Color.green;
        }

        //5.Call submit function.
        onClickSubmitButton();
    }

    public void ShowOneWord()
    {
        //1.reset pointer.
        KeyBoardManager.DisableCaret(KeyBoardManager.CurrentFieldIndex);
        KeyBoardManager.CurrentFieldIndex = 0;
        //1.erase all.
        foreach (var letter in CurrentIdiom.Words)
        {
            letter.Text.text = "";
        }
        //3.loop over correct phrase until find a space, update pointer, change color to green.
        for (int i = 0; i < CurrentIdiom.CorrectPhrase.Length; i++)
        {
            if (CurrentIdiom.CorrectPhrase[i] == ' ')
            {
                break;
            }
            else
            {
                CurrentIdiom.Words[i].Text.text = CurrentIdiom.Words[i].WordCorrectPhrase.ToUpper();
                CurrentIdiom.Words[i].Text.color = Color.green;
                KeyBoardManager.CurrentFieldIndex++;
            }
        }
        //4.SFX
        SFXManager.Instance.PlaySoundEffect(3);
        //5.enable caret.
        KeyBoardManager.EnableCaret(KeyBoardManager.CurrentFieldIndex);
    }

    private void PlayPopupAnimation(GameObject obj)
    {
        obj.transform.localScale = Vector3.zero;
        LeanTween.scale(obj, new Vector3(1.4f, 1.4f, 1.4f), 0.5f);
        LeanTween.scale(obj, new Vector3(1f, 1f, 1f), 0.5f).setDelay(0.5f);
    }

    #endregion

    #region Prizes Region
    //---------------------------------------------//
    //Setting RandomPrizeDegree.
    private void SetRandomPrizeDegree()
    {
        Characters[0].characterPrizeDegree = AnswersResult();

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
        SettingPrizesScores();
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
            LeanTween.scale(image.gameObject, new Vector3(0.001403027f, 0.001403027f, 0.001403027f), 0.3f);
            SFXManager.Instance.PlaySoundEffect(4);
            yield return new WaitForSeconds(0.4f);
        }
    }

    //---------------------------------------------//
    //Setting Prizes Scores.
    private void SettingPrizesScores()
    {
        if (earnedValue == 0)
        {
            CharactersScoresText[0].text = "25";
        }
        else
        {
            CharactersScoresText[0].text = earnedValue.ToString();
        }
        

        for (int i = 1; i < Characters.Length; i++)
        {
            switch (Characters[i].characterPrizeDegree)
            {
                case Character.CharacterPrizeDegree.First:
                    CharactersScoresText[i].text = "100";
                    break;
                case Character.CharacterPrizeDegree.Second:
                    CharactersScoresText[i].text = "50";
                    break;
                case Character.CharacterPrizeDegree.Third:
                    CharactersScoresText[i].text = "25";
                    break;
            }
        }
    }

    #endregion

    #region Scene Managment Region
    public void ReloadScene()
    {
        StartCoroutine(ReloadSceneCorotinue());
    }

    private IEnumerator ReloadSceneCorotinue()
    {
        UIManager.StartScreenFadeout(0.1f);
        yield return new WaitForSeconds(3f);
        SceneManager.LoadScene(1);
    }
    #endregion

    #region Counter Region
    IEnumerator CounterCorotinue()
    {
        yield return new WaitForSeconds(2f);

        while (count)
        {
            UIManager.UpdateRoundProgressBar(0.0002f);
            yield return null;
        }
    }

    private bool CheckForTimeBouns()
    {
        return (UIManager.RoundProgressBar.value > 0); 
    }

    #endregion

    #region Cash Region
    public void OnclickEnoughButton()
    {
        int newCashValue = cashManager.CurrentCash + int.Parse(CharactersScoresText[0].text);
        cashManager.UpdateCashValue(newCashValue);
        cashManager.SaveCashValue();
        SavePlayersScore();
        ReloadScene();
    }

    public void OnClickTripleButton()
    {
        AdsManager.ins.ShowRewardedVideo(AdsManager.RewardType.TripleCoins);
    }

    public void TripleCoinsCallBack()
    {
        int newCashValue = cashManager.CurrentCash + (int.Parse(CharactersScoresText[0].text) * 3);
        cashManager.UpdateCashValue(newCashValue);
        cashManager.SaveCashValue();
        SavePlayersScore();
        ReloadScene();
    }
    #endregion

    private bool CheckAnswer()
    {
        for (int i = 0; i < CurrentIdiom.Words.Count; i++)
        {
            if (!CurrentIdiom.Words[i].Text.text.ToLower().Equals(CurrentIdiom.Words[i].WordCorrectPhrase))
            {
                return false;
            }
        }

        return true;
    }

    #region Save Players Score Region
    private void SavePlayersScore()
    {
        for (int i = 0; i < CharactersScoresText.Length; i++)
        {
            SaveManager.SaveObject.PlayersScore[i] += int.Parse(CharactersScoresText[i].text);
        }

        SaveManager.Save();
    }
    #endregion

    #region Crown Region
    private int GetFirstPlayer(Text[] playersScoreText)
    {
        if (playersScoreText[0].text == "0")          //initially do not set any crowns.
            return -1;

        int firstPlayerIndex = 0;

        for (int i = 1; i < playersScoreText.Length; i++)
        {
            if (int.Parse(playersScoreText[i].text) > int.Parse(playersScoreText[firstPlayerIndex].text))
            {
                firstPlayerIndex = i;
            }
        }

        Debug.Log("firstPlayerIndex : "+ firstPlayerIndex);
        return firstPlayerIndex;
    }

    private void SetFirstPlayerCrown(Text[] playersScoreText)
    {
        if (GetFirstPlayer(playersScoreText) == -1)
        {
            return;
        }
        else
        {
            GameObject crown = Characters[GetFirstPlayer(playersScoreText)].Crown;
            crown.SetActive(true);
            LeanTween.rotateAround(crown, crown.transform.up, 360, 10f).setLoopClamp();
            //UIManager.AvatarsImages[GetFirstPlayer(playersScoreText)].gameObject.transform.GetChild(2).gameObject.SetActive(true);
        }
    }

    public void DisableCrowns()
    {
        for (int i = 0; i < Characters.Length; i++)
        {
            Characters[i].Crown.SetActive(false);
        }
    }
    #endregion
}
