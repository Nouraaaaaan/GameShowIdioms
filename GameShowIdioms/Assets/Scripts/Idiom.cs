using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Idiom : MonoBehaviour
{
    public Sprite IdiomSprite;

    public string CorrectPhrase;

    [SerializeField]
    public List<Word> Words;

    public GameObject IdiomCanvas;
}

[System.Serializable]
public class Word
{
    public Text Text;
    public string WordCorrectPhrase;
    public GameObject Caret;
}
