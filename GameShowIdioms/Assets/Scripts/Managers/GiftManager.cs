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

    //------------------Methods-----------------------//

    #region Load Region
    //--Load.
    private void Start()
    {
        LoadSavedWheelSliderValue();
    }

    public void LoadSavedWheelSliderValue()
    {
        //Load saved object from file.
        IdiomsGameManager.Instance.SaveManager.Load();

        //Update CurrentCash Variable.
        WheelSlider.value = IdiomsGameManager.Instance.SaveManager.SaveObject.WheelValue;
        currentWheelSliderValue = WheelSlider.value;
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

        Debug.Log("WheelSlider.value : " + WheelSlider.value);
        CheckSliderCompleleted();
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

    private void CheckSliderCompleleted()
    {
        Debug.Log("WheelSlider.value : " + WheelSlider.value);

        if (WheelSlider.value >= 1f)
        {
            Debug.Log("You Earned a gift !!!");
            IdiomsGameManager.Instance.UIManager.RoundEndCanvas.gameObject.SetActive(false);
            IdiomsGameManager.Instance.UIManager.GiftCanvas.SetActive(true);
            IdiomsGameManager.Instance.UIManager.ClaimGiftCanvas.SetActive(true);
            PopupGift();

            RestSlider();
        }
    }

    #endregion

    #region Gift Region
    public void PopupGift()
    {
        Gift.SetActive(true);
        LeanTween.scale(Gift, new Vector3(5.330102f, 5.330102f, 5.330102f), 1f);

        LeanTween.scale(Gift, new Vector3(6f, 6f, 6f), 0.5f).setLoopPingPong().setDelay(1f);
    }

    #endregion
}
