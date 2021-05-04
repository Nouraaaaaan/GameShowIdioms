using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WheelManager : MonoBehaviour
{
    //-----------------Fields------------------------//
    public Slider WheelSlider;
    private float currentWheelSliderValue;
    public float SliderAnimatoinSpeed;

    //------------------Methods-----------------------//
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

    //--Save.
    public void UpdateCurrentSliderValue()
    {
        currentWheelSliderValue += 1 / 3f;   //update.

        IdiomsGameManager.Instance.SaveManager.SaveObject.WheelValue = currentWheelSliderValue;  //save.
        IdiomsGameManager.Instance.SaveManager.Save();

        CheckSliderCompleleted();
    }

    
    //--Slider Animation.
    public void IncreaseWheelSliderValue()
    {
        StartCoroutine(IncreaseWheelSliderValueCorotinue(currentWheelSliderValue));
    }

    private IEnumerator IncreaseWheelSliderValueCorotinue(float newValue)
    {
        yield return new WaitForSeconds(0f);

        while (WheelSlider.value <= newValue)
        {
            WheelSlider.value += SliderAnimatoinSpeed;
            yield return null;
        }
    }


    //--Reset Slider.
    private void RestSlider()
    {
        currentWheelSliderValue = 0;  //reset.

        IdiomsGameManager.Instance.SaveManager.SaveObject.WheelValue = currentWheelSliderValue;  //save.
        IdiomsGameManager.Instance.SaveManager.Save();
    }

    private void CheckSliderCompleleted()
    {
        if (WheelSlider.value >= 1)
        {
            Debug.Log("You Earned a gift !!!");
            RestSlider();
        }
    }
}
