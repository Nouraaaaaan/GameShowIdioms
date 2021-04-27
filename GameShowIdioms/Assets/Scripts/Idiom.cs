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
    public TMP_InputField InputField;
    public TextMeshProUGUI InputFieldText;
    public TextMeshProUGUI ColorableText;
    public string WordCorrectPhrase;
}
