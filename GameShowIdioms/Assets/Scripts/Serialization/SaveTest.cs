using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class SaveTest : MonoBehaviour
{
    public SaveObject SaveObject;

    public void Save()
    {
        //Debug.Log("Save");
        SaveManager.save(SaveObject);
    }

    public void Load()
    {
        //Debug.Log("Load");
        SaveObject = SaveManager.Load();
    }
}
