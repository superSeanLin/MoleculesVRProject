using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;
using System.IO;

public class UIManager : MonoBehaviour
{
    public static GameObject selected;
    string manifest = "http://web.engr.illinois.edu/~schleife/vr_app/AssetBundles/Android/molecules.manifest";
    GameObject[] pauseObjects;
    public int count;
    public static List<string> moleculeNames = new List<string>();

    // Use this for initialization
    void Start()
    {
        StartCoroutine(ReadManifest());
    }

    IEnumerator ReadManifest() {
        // Time.timeScale = 1;
        // pauseObjects = GameObject.FindGameObjectsWithTag("ShowOnPause");
        //hidePaused();
        ///////////////////////

        // string path = Directory.GetCurrentDirectory() + @"\AssetBundles";
        // Debug.Log("Current directory is " + path);
        WWW www = new WWW(manifest);
        yield return www;
        if(www.error != null)
        {
            Debug.Log("Error in retrieving manifest file.");
        }

        else {
       // if (Directory.Exists(path))
      //  {
            count = 0;
            string begLine = "- Assets/Molecules/";
            // StreamReader reader = File.OpenText(path + @"\Android\molecules.manifest");
            string stringFromFile = www.text;
            List<string> lines = new List<string>(stringFromFile.Split(new string[] { "\r", "\n" },StringSplitOptions.RemoveEmptyEntries));
            //string line;
           // while((line = reader.ReadLine()) != null)
           foreach(var manifestLine in lines)
            {
                string line = manifestLine;
                if (line.Contains(begLine))
                {
                    count++;
                    line = line.Remove(line.Length - ".fbx".Length);
                    moleculeNames.Add(line.Remove(0, begLine.Length));
                }
            }
        
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
       /* if (Input.GetKeyDown(KeyCode.P))
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
        }*/
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
    public void LoadLevel(string moleculeName)
    {
        Application.LoadLevel("SPIN6.26");
    }

    public void LoadMLevel(BaseEventData data)
    {
        // Application.LoadLevel(AddButtons.moleculeName.GetComponentInChildren<Text>().text);
        PointerEventData ped = (PointerEventData)data;
        selected = ped.pointerPress;
       // Application.LoadLevel("SPIN6.26");
    }

}
