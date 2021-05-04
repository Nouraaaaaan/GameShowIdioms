using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SaveObject
{ 
    //Saved Cash.
    public int PlayerCash;

    //Saved Levels.
    public int LevelNumber;

    //Saved Wheel Value;
    public float WheelValue;

    //Saved Settings.
    public bool CanPlayMusic;
    public bool CanPlaySFX;
}
