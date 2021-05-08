using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Caret : MonoBehaviour
{
    float Counter = 0.3f;
    bool IsCaretActive = true;

    Image CaretImage;

    private void Start()
    {
        CaretImage = GetComponent<Image>();
    }
    void Update()
    {
        Counter -= Time.deltaTime;

        if (Counter <= 0)
        {
            Counter = 0.3f;
            IsCaretActive = !IsCaretActive;
            CaretImage.enabled = IsCaretActive;
        }
    }
}
