using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Idiom : MonoBehaviour
{
    [SerializeField]
    public List<Word> Words;
}

[System.Serializable]
public class Word
{
    [SerializeField]
    public List<Text> Char;
}
