using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DentedPixel;

public class GiftManager : MonoBehaviour
{
    //-----------------Fields------------------------//

    [Header("Gift Attributes")]
    public GameObject Gift;

    [Header("Slider Attributes")]
    public Slider WheelSlider;
    [SerializeField]
    private float currentWheelSliderValue;
    public float SliderAnimatoinSpeed;

    [Header("Slider Attributes")]
    public Image FillGiftImage;
    [SerializeField]
    private float currentImageValue;
    public float ImageAnimatoinSpeed;

    [Header("Percentage Attributes")]
    public Text PercentageText;

    [Header("UI Attributes")]
    public Image RaysImage;
    public Image GiftImage;
    //------------------Methods-----------------------//

    #region Load Region
    //--Load.
    private void Start()
    {
        //LoadSavedWheelSliderValue();
        LoadSavedImageValue();
    }

    public void LoadSavedWheelSliderValue()
    {
        //Load saved object from file.
        IdiomsGameManager.Instance.SaveManager.Load();

        //Update WheelSlider value.
        WheelSlider.value = IdiomsGameManager.Instance.SaveManager.SaveObject.WheelValue;
        currentWheelSliderValue = WheelSlider.value;
        //Update Image value.
        FillGiftImage.fillAmount = IdiomsGameManager.Instance.SaveManager.SaveObject.FillImageValue;
    }

    public void LoadSavedImageValue()
    {
        //Load saved object from file.
        IdiomsGameManager.Instance.SaveManager.Load();

        //Update WheelSlider value.
        FillGiftImage.fillAmount = IdiomsGameManager.Instance.SaveManager.SaveObject.FillImageValue;
        currentImageValue = FillGiftImage.fillAmount;
        //Update Image value.
        FillGiftImage.fillAmount = IdiomsGameManager.Instance.SaveManager.SaveObject.FillImageValue;
    }

    #endregion

    #region Save Region
    //--Save.
    public void UpdateCurrentSliderValue()
    {
        currentWheelSliderValue += 1 / 3f;   //update.

        IdiomsGameManager.Instance.SaveManager.SaveObject.WheelValue = currentWheelSliderValue;  //save.
        IdiomsGameManager.Instance.SaveManager.Save();
    }

    public void UpdateCurrentImageValue()
    {
        currentImageValue += 1 / 4f;   //update.

        PercentageText.text = (Mathf.Floor(currentImageValue) * 100).ToString()+"%";

        IdiomsGameManager.Instance.SaveManager.SaveObject.FillImageValue = currentImageValue;  //save.
        IdiomsGameManager.Instance.SaveManager.Save();
    }

    #endregion

    #region Slider Animation Region
    //--Slider Animation.
    public void IncreaseWheelSliderValue()
    {
        StartCoroutine(IncreaseWheelSliderValueCorotinue());
    }

    private IEnumerator IncreaseWheelSliderValueCorotinue()
    {
        yield return new WaitForSeconds(0f);

        //float newValue = WheelSlider.value + 1 / 3f;

        while (WheelSlider.value < currentWheelSliderValue)
        {
            WheelSlider.value += SliderAnimatoinSpeed;
            yield return null;
        }

        //Debug.Log("WheelSlider.value : " + WheelSlider.value);
        CheckSliderCompleleted();
    }

    public void IncreaseImageValue()
    {
        StartCoroutine(IncreaseImageCorotinue());
    }

    private IEnumerator IncreaseImageCorotinue()
    {
        yield return new WaitForSeconds(0f);

        //float newValue = WheelSlider.value + 1 / 3f;

        while (FillGiftImage.fillAmount < currentImageValue)
        {
            FillGiftImage.fillAmount += SliderAnimatoinSpeed;
            PercentageText.text = (Mathf.Floor(FillGiftImage.fillAmount * 100)).ToString() + "%";
            yield return null;
        }

        //Debug.Log("WheelSlider.value : " + WheelSlider.value);
        CheckImageCompleleted();
    }
    #endregion

    #region Reset Slider Region
    //--Reset Slider.
    private void RestSlider()
    {
        currentWheelSliderValue = 0;  //reset.

        IdiomsGameManager.Instance.SaveManager.SaveObject.WheelValue = currentWheelSliderValue;  //save.
        IdiomsGameManager.Instance.SaveManager.Save();
    }

    private void RestImage()
    {
        currentImageValue = 0;  //reset.

        IdiomsGameManager.Instance.SaveManager.SaveObject.FillImageValue = currentImageValue;  //save.
        IdiomsGameManager.Instance.SaveManager.Save();
    }

    private void CheckSliderCompleleted()
    {
        //Debug.Log("WheelSlider.value : " + WheelSlider.value);

        if (WheelSlider.value >= 1f)
        {
            //Debug.Log("You Earned a gift !!!");
            IdiomsGameManager.Instance.UIManager.RoundEndCanvas.gameObject.SetActive(false);
            IdiomsGameManager.Instance.UIManager.GiftCanvas.SetActive(true);
            IdiomsGameManager.Instance.UIManager.ClaimGiftCanvas.SetActive(true);
            PopupGift();
            RestImage();
        }
    }

    private void CheckImageCompleleted()
    {
        //Debug.Log("WheelSlider.value : " + WheelSlider.value);

        if (FillGiftImage.fillAmount >= 1f)
        {
            //Debug.Log("You Earned a gift !!!");
            IdiomsGameManager.Instance.UIManager.RoundEndCanvas.gameObject.SetActive(false);
            IdiomsGameManager.Instance.UIManager.ClaimGiftCanvas.SetActive(true);
            LeanTween.rotateAround(RaysImage.gameObject, RaysImage.gameObject.transform.forward, 360, 10f).setLoopClamp();
            PopupGift();
            RestImage();
        }
    }

    #endregion

    #region Gift Region
    public void PopupGift()
    {
        //Gift.SetActive(true);
        LeanTween.scale(GiftImage.gameObject, new Vector3(1f, 1f, 1f), 1f);
        LeanTween.scale(GiftImage.gameObject, new Vector3(1.2f, 1.2f, 1.2f), 0.5f).setLoopPingPong().setDelay(1f);
    }

    public void OpenGift()
    {
        LeanTween.cancel(Gift);

        GameObject boxCover = Gift.gameObject.transform.GetChild(0).gameObject;
        LeanTween.rotateLocal(boxCover, new Vector3(-110f, 0f, 0f), 0.5f);
    }

    #endregion
}
