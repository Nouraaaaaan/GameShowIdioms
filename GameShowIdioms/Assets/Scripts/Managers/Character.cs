﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Character : MonoBehaviour
{
    //Character Type.
    public enum CharacterType
    {
        BladMan,
        FakeGirl,
        NerdGirl,      
        Girl1,
        Guy1,
        Girl2,
        Guy2,
        Girl3,
        Guy3
    }
    public CharacterType characterType;

    //Character Image.
    public Sprite CharacterSprite;

    //Character Prize Degree.
    public enum CharacterPrizeDegree
    {
        First,
        Second,
        Third
    }
    public CharacterPrizeDegree characterPrizeDegree;  

    //Character Model.
    public GameObject CharacterModel;

    //Character Index;
    //form right to left.
    public int CharacterIndex;

    //character default names.
    public string[] DefaultNames;

    //Crown
    public GameObject Crown;
}
