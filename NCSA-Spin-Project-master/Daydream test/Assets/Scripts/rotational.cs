using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class rotational : MonoBehaviour
{
    // private string url = "http://web.engr.illinois.edu/~schleife/vr_app/AssetBundles/Android/molecules";
    private string objectName;
    public GameObject myCanvas;
    
    // Use this for initialization
    IEnumerator Start()
    {
        myCanvas = GameObject.Find("Canvas");
        objectName = objMessage.unLoadMessage();
        Debug.Log(objectName);
        //objectName = "LAO";
        yield return StartCoroutine(LoadObject());
    }

    IEnumerator LoadObject()
    {
        /*
        WWW www = new WWW(url);
        yield return www;
        AssetBundle assetBundle = www.assetBundle;
        if (!string.IsNullOrEmpty(www.error))
        {
            Debug.Log("There was a problem loading asset bundles.");
        }
        */
        // load assetBundle from local path
        string url = Application.dataPath + "/../AssetBundles/Android/molecules";
        var assetBundle = AssetBundle.LoadFromFile(url);
        if (assetBundle == null) {
            Debug.Log("Failed to load AssetBundle!");
        }
        GameObject molecule = Instantiate(assetBundle.LoadAsset(objectName + ".fbx")) as GameObject;
        Vector3 size = new Vector3(2f, 2f, 2f);
        // coordinate with camera
        Vector3 slideRight = new Vector3(0.0f, 0.0f, -250.0f);
        Vector3 rotation = new Vector3(0.0f, 0.0f, 0.0f);
        molecule.transform.localScale = size;
        molecule.transform.position = slideRight;
        molecule.tag = "edmc";
        // set molecule parent and set relative position
        molecule.transform.SetParent(myCanvas.transform, false);
        assetBundle.Unload(false);
        yield return assetBundle;
    }

    // Update is called once per frame
    /* void Update()
     {

         if(GvrController.ClickButtonDown && i < UIManager.moleculeNames.Count)
         {
                 Destroy(GameObject.FindGameObjectWithTag("mc"));
                 StartCoroutine(LoadObject(i));
                 i++;
         }

         else if (GvrController.ClickButtonDown && i >= UIManager.moleculeNames.Count)
         {
             Application.LoadLevel("MainMenu");
         }
         else
         {
             if(GameObject.FindGameObjectWithTag("mc") != null) 
                 GameObject.FindGameObjectWithTag("mc").transform.localRotation = GvrController.Orientation;
         }
     }*/
/*
    private void Start()
    {
        GameObject poscar_copy = Instantiate(poscar, new Vector3(0, 0, 20), Quaternion.identity) as GameObject;
        poscar_copy.tag = "edmc";
        
    }
*/
    void Update()
    {
        GameObject []copy = GameObject.FindGameObjectsWithTag("edmc"); 
        foreach (GameObject i in copy) 
            i.transform.Rotate(Vector3.down * Time.deltaTime* 10.0f);
        //poscar.transform.localRotation = Quaternion.Euler(Time.deltaTime, 0.0f, 0.0f);
    }
}
