using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class KeyboardManager : MonoBehaviour
{
    TouchScreenKeyboard TouchScreenKeyboard;
    public Text TestingText;
    private string KeyboardText;
    
    public void OpenKeyboard()
    {
        TouchScreenKeyboard = TouchScreenKeyboard.Open("", TouchScreenKeyboardType.Default);
    }

    private void Update()
    {
        if ((TouchScreenKeyboard.visible == false) && (TouchScreenKeyboard != null))
        {
            if (TouchScreenKeyboard.status == TouchScreenKeyboard.Status.Done)
            {
                OnclickDoneButton();
            }
        }
    }

    public void OnclickDoneButton()
    {
        KeyboardText = TouchScreenKeyboard.text;
        //TestingText.text = "Hi" + KeyboardText;
        IdiomsGameManager.Instance.EnterText = KeyboardText;
        IdiomsGameManager.Instance.ShowResult();
        TouchScreenKeyboard = null;
    }
}
