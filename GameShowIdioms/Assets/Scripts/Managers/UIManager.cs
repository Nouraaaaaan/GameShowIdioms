using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class UIManager : MonoBehaviour
{
    //--------------------------------------------------------------------------------------------------------------------------------//
    //Fields.
    [Header("Start Button Canvas")]
    public GameObject StartButtonCanvas;

    [Header("Start Button Canvas")]
    public GameObject KeyboardCanvas;

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

    [Header("Choose Characters Canvas")]
    public GameObject PrizeImagesCanvas;

    [Header("Choose Characters Canvas")]
    public GameObject ChooseCharactersCanvas;
    //--------------------------------------------------------------------------------------------------------------------------------//
    //Methods.
    public void OnclickStartButton()
    {
        //Translate Camera.
        IdiomsGameManager.Instance.StartRound();

        //Disable Canvas.
        StartButtonCanvas.SetActive(false);
    }

    public void OnclickKeyboardButton()
    {
        SFXManager.Instance.PlaySoundEffect(0);
    }

    #region Round Number Region
    public void PopupRoundNumber()
    {
        LeanTween.scale(RoundNumber.gameObject, new Vector3(1f, 1f, 1f), 0.3f);
    }

    public void PlayRoundNumberAnimation()
    {
        LeanTween.rotateAround(RoundNumber.gameObject, RoundNumber.gameObject.transform.forward, 360, 0.5f);
        LeanTween.scale(RoundNumber.gameObject, new Vector3(0f, 0f, 0f), 0.5f);
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
}
