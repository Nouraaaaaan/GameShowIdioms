using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class KeyboardManager : MonoBehaviour
{
    TouchScreenKeyboard TouchScreenKeyboard;
    public Text Text;
    string pesudo;

    private void Start()
    {
        TouchScreenKeyboard.hideInput = true;
    }

    public void OpenKeyboard()
    {
        TouchScreenKeyboard = TouchScreenKeyboard.Open("", TouchScreenKeyboardType.NamePhonePad);
    }

    private void Update()
    {
        /*
        if ((TouchScreenKeyboard.visible == false) && (TouchScreenKeyboard != null))
        {
            if (TouchScreenKeyboard.status == TouchScreenKeyboard.Status.Done)
            {
                pesudo = TouchScreenKeyboard.text;
                Text.text = "Hi " + pesudo;
                TouchScreenKeyboard = null;
            }
        }
        */
    }
}
