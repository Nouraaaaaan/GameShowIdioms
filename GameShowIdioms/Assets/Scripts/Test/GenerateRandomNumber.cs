using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateRandomNumber : MonoBehaviour
{
    public char[] Array;
    private List<int> randomList;

    private void Start()
    {
        randomList = new List<int>();
        GenerateRandomDistincitNumbers();
    }

    private void GenerateRandomDistincitNumbers()   
    {
        for (int i = 0; i < 4; i++)
        {
            int numToAdd = Random.Range(0, Array.Length);

            while (randomList.Contains(numToAdd))
            {
                numToAdd = Random.Range(0, Array.Length);
            }

            Debug.Log("numToAdd : " + numToAdd);
            randomList.Add(numToAdd);
        }

        Debug.Log("Done !");
    }
}
