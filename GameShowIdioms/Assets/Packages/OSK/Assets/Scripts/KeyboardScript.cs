using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class KeyboardScript : MonoBehaviour
{

    public InputField TextField;
    public GameObject RusLayoutSml, RusLayoutBig, EngLayoutSml, EngLayoutBig, SymbLayout;

    public void alphabetFunction(string alphabet)
    {
        TextField.text=TextField.text + alphabet;

        //SFX
        if (!IdiomsGameManager.Instance.Finished)
        {
            SFXManager.Instance.PlaySoundEffect(0);
        }
        

        //Event
        IdiomsGameManager.Instance.AlphabetPressed(alphabet[0]);
    }

    public void BackSpace()
    {

        if(TextField.text.Length>0) TextField.text= TextField.text.Remove(TextField.text.Length-1);

        //SFX
        SFXManager.Instance.PlaySoundEffect(0);

        //Event
        IdiomsGameManager.Instance.BackSpacePressed();

    }

    public void CloseAllLayouts()
    {

        //RusLayoutSml.SetActive(false);
        //RusLayoutBig.SetActive(false);
        EngLayoutSml.SetActive(false);
        EngLayoutBig.SetActive(false);
        SymbLayout.SetActive(false);

    }

    public void ShowLayout(GameObject SetLayout)
    {

        CloseAllLayouts();
        SetLayout.SetActive(true);

    }

}
