using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckHeadset : MonoBehaviour {

    public GameObject GoogleVR_Objects;
    public GameObject MicrosoftMR_Objects;
    public bool isGoogle = false;
    public bool isMR = false;


    // Use this for initialization
    void Start () {
        if (Application.platform == RuntimePlatform.WindowsEditor || Application.platform == RuntimePlatform.OSXEditor)
        {
            //LoadMRObjects(); // Changes editor to support MR Headset

            // NOTE: DO NOT HAVE THE MR HEADET CONNECTED OR UNITY WILL CRASH
            LoadGoogleObjects(); // Changes editor to support Google Headset
        }
        else if (Application.platform == RuntimePlatform.WindowsPlayer)
        {
            LoadMRObjects();
        }
        else if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
        {
            LoadGoogleObjects();
        }
        else
        {
            return;
        }
	}

    public void LoadGoogleObjects()
    {
        isGoogle = true;
        GoogleVR_Objects.SetActive(true);

    }
    public void LoadMRObjects()
    {
        isMR = true;
        MicrosoftMR_Objects.SetActive(true);
    }

    // Update is called once per frame
    void Update () {
		
	}
}
