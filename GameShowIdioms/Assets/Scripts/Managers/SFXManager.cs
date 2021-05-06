using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SFXManager : MonoBehaviour
{
    #region Singelton
    public static SFXManager Instance;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }

    #endregion
    
    public AudioSource AudioSource;
    public AudioSource MusicAudioSource;
    public AudioSource ExtraMusicAudioSource;
    public AudioClip[] AudioClips;

    public GameObject MusicOnButton;
    public GameObject MusicOffButton;

    public GameObject SFXOnButton;
    public GameObject SFXOffButton;

    public bool CanPlaySFX;
    public bool CanPlayMusic;

    private void Start()
    {
        //RamadanGameManager.Instance.SaveManager.Load();
        

        //CanPlayMusic = RamadanGameManager.Instance.SaveManager.SaveObject.CanPlayMusic;
        if (CanPlayMusic)
        {
            TurnOnMusic();
        }
        else
        {
            TurnOffMusic();
        }

        //CanPlaySFX = RamadanGameManager.Instance.SaveManager.SaveObject.CanPlaySFX;
        if (CanPlaySFX)
        {
            TurnOnSFX();
        }
        else
        {
            TurnOffSFX();
        }
    }

    public void PlaySoundEffect(int index)
    {
        /*if (CanPlaySFX)
        {
            AudioSource.clip = AudioClips[index];
            AudioSource.Play();
        }
        */

        AudioSource.clip = AudioClips[index];
        AudioSource.Play();

        
    }

    public void StopSoundEffect()
    {
        AudioSource.Stop();
    }

    public void PlayMusic(int index, bool playExtraMusic, int extraMusicIndex)
    {
        MusicAudioSource.volume = 1;
        MusicAudioSource.clip = AudioClips[index];
        MusicAudioSource.Play();

        if (playExtraMusic)
        {
            ExtraMusicAudioSource.volume = 0.8f;
            ExtraMusicAudioSource.clip = AudioClips[extraMusicIndex];
            ExtraMusicAudioSource.Play();
        }
    }

    public void StopMusic()
    {
        MusicAudioSource.Stop();
        ExtraMusicAudioSource.Stop();
    }

    public void FadeOutMusic(float fadeoutSpeed)
    {
        StartCoroutine(FadeOutMusicCorotinue(fadeoutSpeed));
    }

    private IEnumerator FadeOutMusicCorotinue(float fadeoutSpeed)
    {
        while (MusicAudioSource.volume != 0)
        {
            MusicAudioSource.volume -= fadeoutSpeed;
            yield return null;
        }
    }

    public void FadeOutExtraMusic(float fadeoutSpeed)
    {
        StartCoroutine(FadeOutExtraMusicCorotinue(fadeoutSpeed));
    }

    private IEnumerator FadeOutExtraMusicCorotinue(float fadeoutSpeed)
    {
        while (ExtraMusicAudioSource.volume != 0)
        {
            ExtraMusicAudioSource.volume -= fadeoutSpeed;
            yield return null;
        }
    }

    public void StopLoopingOption()
    {
        AudioSource.loop = false;
    }

    public void EnableLoopingOption()
    {
        AudioSource.loop = true;
    }

    public void SetAudioVolume(float value)
    {
        AudioSource.volume = value;
    }

    public void TurnOnSFX()
    {
        CanPlaySFX = true;
        //RamadanGameManager.Instance.SaveManager.SaveObject.CanPlaySFX = true;
        //RamadanGameManager.Instance.SaveManager.Save();

        if (SFXOnButton != null & SFXOffButton != null)
        {
            SFXOnButton.SetActive(true);
            SFXOffButton.SetActive(false);
        }
    }

    public void TurnOffSFX()
    {
        AudioSource.Stop();
        CanPlaySFX = false;
        //RamadanGameManager.Instance.SaveManager.SaveObject.CanPlaySFX = false;
        //RamadanGameManager.Instance.SaveManager.Save();

        if (SFXOnButton != null & SFXOffButton != null)
        {
            SFXOnButton.SetActive(false);
            SFXOffButton.SetActive(true);
        }
    }

    public void TurnOnMusic()
    {
        MusicAudioSource.Play();
        //RamadanGameManager.Instance.SaveManager.SaveObject.CanPlayMusic = true;
        CanPlayMusic = true;
        //RamadanGameManager.Instance.SaveManager.Save();

        if (MusicOnButton != null & MusicOffButton != null)
        {
            MusicOnButton.SetActive(true);
            MusicOffButton.SetActive(false);
        }
    }

    public void TurnOffMusic()
    {
        //MusicAudioSource.Stop();
        //RamadanGameManager.Instance.SaveManager.SaveObject.CanPlayMusic = false;
        CanPlayMusic = false;
        //RamadanGameManager.Instance.SaveManager.Save();

        if (MusicOnButton != null & MusicOffButton != null)
        {
            MusicOnButton.SetActive(false);
            MusicOffButton.SetActive(true);
        }
    }
}
