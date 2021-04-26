using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class KeyboardManager : MonoBehaviour
{
    TouchScreenKeyboard TouchScreenKeyboard;
    private int index;
    private string EnteredText = "";
    private string pesudo = "";

    public Text Text;
    
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
    }
}
