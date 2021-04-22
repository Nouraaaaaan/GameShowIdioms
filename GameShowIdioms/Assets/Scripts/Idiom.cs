using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Idiom : MonoBehaviour
{
    public string CorrectPhrase;

    [SerializeField]
    public List<Text> Char;

    public GameObject EnteredText;
}

[System.Serializable]
public class Word
{
    [SerializeField]
    public List<Text> Char;
}
