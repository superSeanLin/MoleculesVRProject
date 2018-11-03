using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;
using System.IO;
using UnityEngine.SceneManagement;

public class UIManagerED : MonoBehaviour
{

    // number of loaded molecules in assetbundle 
    public int count = 0;
    // list of loaded molecules name, note static
    public static List<string> moleculeNames = new List<string>();
    public GameObject player;

    // Use this for initialization
    public void Start()
    {
        // My thought: this two lines may generate errors
        // player = GameObject.Find("Player");
        // DontDestroyOnLoad(player);
        // start a new sequential processing/function/subroutine (only one is executing at any given time)
        count = 0;
        foreach (var go in Resources.FindObjectsOfTypeAll<GameObject>())
            {
                count++;
                string line = go.name;
                moleculeNames.Add(line);
            }
    }

    // Update is called once per frame
    void Update()
    {

    }

    //Reloads the Level
    public void Reload()
    {
        SceneManager.LoadScene(Application.loadedLevel);
    }

    //loads inputted level
    public void LoadLevel(string moleculeName)
    {
        SceneManager.LoadScene("SPIN6.26_electron_density_test");
    }

    public void LoadMLevel(BaseEventData data)
    {

    }

}
