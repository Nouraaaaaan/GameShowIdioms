using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NameInputField : MonoBehaviour
{
    public InputField PlayerNameInputField;
    public Text PlayerNameText;

    public void OnValueChanged()
    {
        PlayerNameText.text = PlayerNameInputField.text;
    }
}
