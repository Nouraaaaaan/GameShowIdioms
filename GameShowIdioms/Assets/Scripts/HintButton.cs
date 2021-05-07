using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HintButton : MonoBehaviour
{
    public int MinCashValue;
    public Button ButtonComponent;

    public void DeactivateHindButton()
    {
        ButtonComponent.interactable = false;
    }
}
