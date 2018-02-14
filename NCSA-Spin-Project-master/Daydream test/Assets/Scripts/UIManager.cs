using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using System;
using System.IO;

public class UIManager : MonoBehaviour
{

    GameObject[] pauseObjects;
    public int count;
    public static List<string> moleculeNames = new List<string>();

    // Use this for initialization
    void Start()
    {
        Time.timeScale = 1;
        pauseObjects = GameObject.FindGameObjectsWithTag("ShowOnPause");
        //hidePaused();
        ///////////////////////
        string path = Directory.GetCurrentDirectory() + @"\AssetBundles";

        Debug.Log("Current directory is " + path);
        if (Directory.Exists(path))
        {
            count = 0;
            string begLine = "- Assets/Molecules/";
            StreamReader reader = File.OpenText(path + @"\OSX\molecules.manifest");
            string line;
            while((line = reader.ReadLine()) != null)
            {
                if (line.Contains(begLine))
                {
                    count++;
                    line = line.Remove(line.Length - ".fbx".Length);
                    moleculeNames.Add(line.Remove(0, begLine.Length));
                }
            }
            /*foreach (string i in moleculeNames)
            {
                Debug.Log(i);
            }*/
        
        }
        foreach(string i in moleculeNames)
        {
            Debug.Log(i);
        }
        // DirectoryInfo dir = new DirectoryInfo(myPath);
        // FileInfo[] info = dir.GetFiles("*.*");
        //foreach (FileInfo f in info)
        //{ ... }
    }

    // Update is called once per frame
    void Update()
    {

        //uses the p button to pause and unpause the game
        if (Input.GetKeyDown(KeyCode.P))
        {
            if (Time.timeScale == 1)
            {
                Time.timeScale = 0;
                showPaused();
            }
            else if (Time.timeScale == 0)
            {
                Debug.Log("high");
                Time.timeScale = 1;
                hidePaused();
            }
        }
    }


    //Reloads the Level
    public void Reload()
    {
        Application.LoadLevel(Application.loadedLevel);
    }

    //controls the pausing of the scene
    public void pauseControl()
    {
        if (Time.timeScale == 1)
        {
            Time.timeScale = 0;
            showPaused();
        }
        else if (Time.timeScale == 0)
        {
            Time.timeScale = 1;
            hidePaused();
        }
    }

    //shows objects with ShowOnPause tag
    public void showPaused()
    {
        foreach (GameObject g in pauseObjects)
        {
            g.SetActive(true);
        }
    }

    //hides objects with ShowOnPause tag
    public void hidePaused()
    {
        foreach (GameObject g in pauseObjects)
        {
            g.SetActive(false);
        }
    }

    //loads inputted level
    public void LoadLevel(string level)
    {
        Application.LoadLevel("SPIN6.26");
    }

    public static void LoadMLevel()
    {
        //Object[].FindObjectsOfType(Button) GetComponentInChildren<Text>().text == "untitled")
        //{
            Application.LoadLevel("SPIN6.26");
        //}
    }

}
