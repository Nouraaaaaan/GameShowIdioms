using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Idiom : MonoBehaviour
{
    public string CorrectPhrase;

    [SerializeField]
    public List<Word> Words;
}

[System.Serializable]
public class Word
{
    public InputField InputField;
    public Text InputFieldText;
    public Text ColorableText;
    public string WordCorrectPhrase;
}
