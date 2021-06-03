using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SaveObject
{ 
    //Saved Cash.
    public int PlayerCash;

    //Saved HintsNumber.
    public int HintsNumber;

    //Saved Levels.
    public int RoundNumber;

    //Saved Wheel Value;
    public float WheelValue;
    //Saved FillImage Value;
    public float FillImageValue;

    //Saved Settings.
    public bool CanPlayMusic;
    public bool CanPlaySFX;

    //Saved Character type.
    public int CharacterTypeIndex;
    //Saved Character Name.
    public string PlayerName;

    //Saved ShowNameInputField
    public bool ShowNameInputField; //waether to show or hide inputfield, show it at first round only.

    //Saved PlayersScore
    public int[] PlayersScore;

    //Saved PlayersCharacters
    public int[] PlayersIndex;

    //Saved PlayersNames
    public string[] PlayersNames;
}
