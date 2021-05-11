using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class UIManager : MonoBehaviour
{
    //--------------------------------------------------------------------------------------------------------------------------------//
    //Fields.
    [Header("Custom Keyboard Canvas")]
    public GameObject CustomKeyBoardCanvas;

    [Header("Start Button Canvas")]
    public GameObject StartButtonCanvas;

    [Header("InputField  Canvas")]
    public InputField NameInputField;
    public GameObject InputFieldCanvas;

    [Header("NoAds Canvas")]
    public GameObject NoAdsCanvas;

    [Header("AvatarImage Canvas")]
    public GameObject AvatarImageCanvas;

    [Header("Coins Canvas")]
    public GameObject CoinsCanvas;

    [Header("Settings Canvas")]
    public GameObject SettingsCanvas;

    [Header("Round Number Text")]
    public Text RoundNumber;
    
    [Header("Presenter SpeechBubble Image")]
    public Image PresenterSpeechBubble;
    public Text PresenterSpeechBubbleText;

    [Header("Submit Button Canvas")]
    public GameObject SubmitButtonCanvas;

    [Header("Hint Button Canvas")]
    public GameObject HintButtonCanvas;

    [Header("Fadeout Canvas")]
    public CanvasGroup FadeoutCanvas;

    [Header("Choose PrizeImagesCanvas Canvas")]
    public GameObject PrizeImagesCanvas;

    [Header("Choose Characters Canvas")]
    public GameObject ChooseCharactersCanvas;

    [Header("Choose Round End Canvas")]
    public CanvasGroup RoundEndCanvas;

    [Header("Gift Canvas")]
    public GameObject GiftCanvas;
    public GameObject ClaimGiftCanvas;

    [Header("Hint Buttons Canvas")]
    public HintButton[] HintButtons;

    [Header("Idiom Image Canvas")]
    public GameObject IdiomImageCanvas;

    [Header("Round Progress Bar Attributes")]
    public Slider RoundProgressBar;
    public Sprite FadeOutStarImage;
    public Image[] StarImages;
    private int starIndex = 3;

    [Header("Projector Screen Attributes")]
    public GameObject ScreenCanvas;
    public Text ScreenRoundNumberText;
    
    [Header("LeaderBoard Attributes")]
    public Text[] LeaderBoardNames;

    [Header("Avatars' Images Attributes")]
    public Image[] AvatarsImages;

    [Header("Avatars' Score Text Attributes")]
    public Text[] AvatarsScoreText;

    //--------------------------------------------------------------------------------------------------------------------------------//
    //Methods.
    public void OnclickStartButton()
    {
        //Translate Camera.
        IdiomsGameManager.Instance.StartRound();

        //Disable StartButton Canvas.
        StartButtonCanvas.SetActive(false);
        //Disable InputField Canvas.
        InputFieldCanvas.SetActive(false);
        //Disable NoAds Canvas.
        NoAdsCanvas.SetActive(false);
        //Disable AvatarImage Canvas.
        AvatarImageCanvas.SetActive(false);
        //Disable Settings Canvas
        SettingsCanvas.SetActive(false);

        //Disable Coins Canvas.
        CoinsCanvas.SetActive(false);

        //Save Player's Name.
        if (IdiomsGameManager.Instance.SaveManager.SaveObject.ShowNameInputField)//is it the first round.
        {
            if(NameInputField.text == "")//the player didn't enter his name.
            {
                IdiomsGameManager.Instance.SaveManager.SaveObject.PlayerName = "You";
                IdiomsGameManager.Instance.SaveManager.Save();
            }
            else//the player entered his name.
            {
                Debug.Log("Save My Name !!!");
                IdiomsGameManager.Instance.SaveManager.SaveObject.PlayerName = NameInputField.text;
                IdiomsGameManager.Instance.SaveManager.Save();
            }

            IdiomsGameManager.Instance.SaveManager.SaveObject.ShowNameInputField = false;//don't show input field next time.
            IdiomsGameManager.Instance.SaveManager.Save();
        }
    }

    public void OnclickKeyboardButton()
    {
        SFXManager.Instance.PlaySoundEffect(0);
    }

    #region Round Number Region
    public void SetRoundNumber()
    {
        RoundNumber.text = "ROUND " + IdiomsGameManager.Instance.SaveManager.SaveObject.RoundNumber;
    }

    public void SetScreenRoundNumber()
    {
        ScreenRoundNumberText.text = "ROUND " + IdiomsGameManager.Instance.SaveManager.SaveObject.RoundNumber;
    }

    public void PopupRoundNumber()
    {
        LeanTween.scale(RoundNumber.gameObject, new Vector3(1f, 1f, 1f), 0.3f);
    }

    public void PlayRoundNumberAnimation()
    {
        LeanTween.rotateAround(RoundNumber.gameObject, RoundNumber.gameObject.transform.forward, 360, 0.5f);
        LeanTween.scale(RoundNumber.gameObject, new Vector3(0f, 0f, 0f), 0.5f);
    }

    public void UpdateRoundNumber()
    {
        IdiomsGameManager.Instance.SaveManager.SaveObject.RoundNumber ++;
        IdiomsGameManager.Instance.SaveManager.Save();
    }

    #endregion

    #region Presenter Speech Bubble Region
    public void PopupPresenterSpeechBubble()
    {
        LeanTween.scale(PresenterSpeechBubble.gameObject, new Vector3(2f ,2f ,2f), 0.3f);
    }

    public void FadeAwayPresenterSpeechBubble()
    {
        LeanTween.scale(PresenterSpeechBubble.gameObject, new Vector3(0f, 0f, 0f), 0.3f);
    }
    #endregion

    #region Submit Button Region

    public void OnClickSubmitButton()
    {
        IdiomsGameManager.Instance.ShowResult();
    }

    #endregion

    #region Fadeout Canvas Region
    public void StartScreenFadeout(float speed)
    {
        StartCoroutine(ScreenFadeoutCorotinue(speed));
    }

    private IEnumerator ScreenFadeoutCorotinue(float speed)
    {
        yield return new WaitForSeconds(1f);

        while (FadeoutCanvas.alpha != 1)
        {
            FadeoutCanvas.alpha += speed;
            yield return new WaitForEndOfFrame();
        }
    }

    #endregion

    #region Round End
    public void OnclickNextButton()
    {
        IdiomsGameManager.Instance.ReloadScene();
    }

    public void StartRoundEndCanvasFadeout(float speed)
    {
        StartCoroutine(RoundEndCanvasFadeoutCorotinue(speed));
    }

    private IEnumerator RoundEndCanvasFadeoutCorotinue(float speed)
    {
        yield return new WaitForSeconds(1f);

        while (RoundEndCanvas.alpha != 1)
        {
            RoundEndCanvas.alpha += speed;
            yield return new WaitForEndOfFrame();
        }
    }
    #endregion

    #region Gift Region
    public void OnClickCollectGiftButton()
    {
        AdsManager.ins.ShowRewardedVideo(AdsManager.RewardType.CollectGift);
    }

    public void CollectGiftCallBack()
    {
        //1.
        IdiomsGameManager.Instance.hintsManager.currentHintsNumber += 1;
        IdiomsGameManager.Instance.hintsManager.SaveHintsValue();

        //2.disable claim gift ui & gift obj.
        ClaimGiftCanvas.SetActive(false);
        IdiomsGameManager.Instance.GiftManager.Gift.SetActive(false);

        //3.enable round end ui.
        RoundEndCanvas.gameObject.SetActive(true);
    }

    public void OnClickNoGiftButton()
    {
        //2.disable claim gift ui & gift obj.
        ClaimGiftCanvas.SetActive(false);
        IdiomsGameManager.Instance.GiftManager.Gift.SetActive(false);

        //3.enable round end ui.
        RoundEndCanvas.gameObject.SetActive(true);
    }
    #endregion

    #region Hint Buttons
    public void UpdateHintButtons(int currentCashValue)
    {
        foreach (var hintButton in HintButtons)
        {
            if (hintButton.MinCashValue > currentCashValue)
            {
                hintButton.DeactivateHindButton();
            }
        }
    }

    public void onClickAdsHintButton()
    {
        AdsManager.ins.ShowRewardedVideo(AdsManager.RewardType.ShowOneLetter);
    }

    public void OnClickShowOneHintLetter()
    {
        //1.Show Hint Letter.
        IdiomsGameManager.Instance.ShowOneHintLetter();

        //2.Decrease Current Cash.
        IdiomsGameManager.Instance.cashManager.CurrentCash -= 100;

        //3.Save Current Cash, Update cash text.
        IdiomsGameManager.Instance.cashManager.SaveCashValue();
        IdiomsGameManager.Instance.cashManager.UpdateCashText(IdiomsGameManager.Instance.cashManager.CurrentCash);


        //4.Update Hint Buttons.
        UpdateHintButtons(IdiomsGameManager.Instance.cashManager.CurrentCash);
    }

    public void OnClickShowAllHintLetters()
    {
        //1.Show Hint Letter.
        IdiomsGameManager.Instance.ShowAllHintLetters();

        //2.Decrease Current Cash.
        IdiomsGameManager.Instance.cashManager.CurrentCash -= 300;

        //3.Save Current Cash, Update cash text.
        IdiomsGameManager.Instance.cashManager.SaveCashValue();
        IdiomsGameManager.Instance.cashManager.UpdateCashText(IdiomsGameManager.Instance.cashManager.CurrentCash);

        //4.Update Hint Buttons.
        UpdateHintButtons(IdiomsGameManager.Instance.cashManager.CurrentCash);
    }

    public void OnClickShowOneWord()
    {
        //1.Show Hint Letter.
        IdiomsGameManager.Instance.ShowOneWord();

        //2.Decrease Current Cash.
        IdiomsGameManager.Instance.cashManager.CurrentCash -= 200;

        //3.Save Current Cash, Update cash text.
        IdiomsGameManager.Instance.cashManager.SaveCashValue();
        IdiomsGameManager.Instance.cashManager.UpdateCashText(IdiomsGameManager.Instance.cashManager.CurrentCash);

        //4.Update Hint Buttons.
        UpdateHintButtons(IdiomsGameManager.Instance.cashManager.CurrentCash);
    }
    #endregion

    #region Round Progress Bar Region
    public void UpdateRoundProgressBar(float value)
    {
        RoundProgressBar.value -= value;
    }

    public void LoseOneStar()
    {
        Debug.Log("Lose One Star");
        StarImages[starIndex].sprite = FadeOutStarImage;
        starIndex--;
    }

    #endregion

    #region Avatar Image&Text Region

    public void SetAvatarImage(Character[] characters)
    {
        for (int i = 0; i < AvatarsImages.Length; i++)
        {
            AvatarsImages[i].sprite = characters[i].CharacterSprite;
        }
    }

    public void SetAvatarScoreText(int[] scores)
    {
        for (int i = 0; i < AvatarsScoreText.Length; i++)
        {
            AvatarsScoreText[i].text = scores[i].ToString();
        }
    }

    #endregion

    #region LeaderBoard Region

    public void UpdateLeaderBoardNames()
    {
        
        for (int i = 0; i < IdiomsGameManager.Instance.Characters.Length; i++)
        {
            if (IdiomsGameManager.Instance.Characters[i].characterPrizeDegree.Equals(Character.CharacterPrizeDegree.First))
            {
                LeaderBoardNames[0].text = IdiomsGameManager.Instance.CharactersNamesText[i].text;
            }
            else if(IdiomsGameManager.Instance.Characters[i].characterPrizeDegree.Equals(Character.CharacterPrizeDegree.Second))
            {
                LeaderBoardNames[1].text = IdiomsGameManager.Instance.CharactersNamesText[i].text;
            }
            else
            {
                LeaderBoardNames[2].text = IdiomsGameManager.Instance.CharactersNamesText[i].text;
            }
        }
    }

    #endregion
}
