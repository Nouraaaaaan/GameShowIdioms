using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DentedPixel;

public class IdiomsGameManager : MonoBehaviour
{
    //--------------------------------------------------------------------------------------------------------------------------------//
    //Fields.
    [Header("Camera Attributes")]
    public GameObject Camera;
    public Transform PresenterCameraTransform;
    public Transform ScreenCameraTransform;

    [Header("Managers Attributes")]
    public UIManager UIManager;

    [Header("Current Idiom Attributes")]
    public Idiom CurrentIdiom;
    private int CurrentWordIndex; //words
    private int CurrenCharIndex;  //chars
    private bool Finished;
    //--------------------------------------------------------------------------------------------------------------------------------//
    //Regions.

    #region Singelton Region
    public static IdiomsGameManager Instance;
    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }
    #endregion

    #region CallBacks Region
    private void Start()
    {
        
    }
    #endregion

    #region Camera Transition Region
    public void TranslateCamera(Transform cameraNewTransform, float speed)
    {
        LeanTween.move(Camera, cameraNewTransform, speed);
        LeanTween.rotate(Camera, cameraNewTransform.eulerAngles, speed);
    }
    #endregion

    #region Start Round Region
    public void StartRound()
    {
        StartCoroutine(StartRoundCorotinue());
    }

    private IEnumerator StartRoundCorotinue()
    {
        //Translate Camera To Presenter.
        TranslateCamera(PresenterCameraTransform, 1f);

        //Presenter Talk.

        //Translate Camera To Screen.
        yield return new WaitForSeconds(3f);
        TranslateCamera(ScreenCameraTransform, 0.5f);

        //Popup Keyboard.
        yield return new WaitForSeconds(1f);
        UIManager.KeyboardCanvas.SetActive(true);
    }
    #endregion

    public void AlphabetPressed(char enteredChar)
    {
        if (Finished)
            return;

        Debug.Log("A new alphabet was pressed !");

        //Set Char.
        CurrentIdiom.Words[CurrentWordIndex].Char[CurrenCharIndex].text = enteredChar.ToString();

        //Update Current Char Index.
        CurrenCharIndex++;

        //Check if we finished current word.
        if (CurrenCharIndex >= CurrentIdiom.Words[CurrentWordIndex].Char.Count)
        {
            CurrenCharIndex = 0;
            CurrentWordIndex++;
        }

        //Check if we finished all words.
        if (CurrentWordIndex >= CurrentIdiom.Words.Count)
        {
            Debug.Log("Finished !");
            Finished = true;
        }
    }
}
