﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.NiceVibrations;

public class HapticManager : MonoBehaviour
{
    public static HapticManager Instance;
    private bool CanPlayHaptic = true;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Debug.LogError("AdmobManager Singletone Error");
        }

        //DontDestroyOnLoad(this.gameObject);
    }

    public void HapticPulse(HapticTypes hapticType)
    {
        if(CanPlayHaptic)
        {
           MMVibrationManager.Haptic(hapticType);
        }
    }

    public void RumbleHapticPulse(HapticTypes hapticType)
    {
        if (CanPlayHaptic)
            MMVibrationManager.Haptic(hapticType, false, true);
    }

    public void RepetitiveHaptic(int duration)
    {
        if (CanPlayHaptic)
            StartCoroutine(RepetitiveHapticCoroutine(duration));
    }

    private IEnumerator RepetitiveHapticCoroutine(int duration)
    {
        for (int i = 0; i < duration; i++)
        {
            HapticPulse(HapticTypes.SoftImpact);

            yield return new WaitForSeconds(0.15f);
        }
    }

    public void TurnOnHaptic()
    {
        CanPlayHaptic = true;
        IdiomsGameManager.Instance.SaveManager.SaveObject.CanPlayHaptics = true;
        IdiomsGameManager.Instance.SaveManager.Save();
    }

    public void TurnOffHaptic()
    {
        CanPlayHaptic = false;
        IdiomsGameManager.Instance.SaveManager.SaveObject.CanPlayHaptics = false;
        IdiomsGameManager.Instance.SaveManager.Save();
    }
}