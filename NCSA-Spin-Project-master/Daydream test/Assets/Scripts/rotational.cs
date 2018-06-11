using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class rotational : MonoBehaviour
{
    private string url = "http://web.engr.illinois.edu/~schleife/vr_app/AssetBundles/Android/molecules";
    private string objectName = "LAO";
    
    // Use this for initialization
    void Start()
    {
        StartCoroutine(LoadObject());
    }

    IEnumerator LoadObject()
    {
        WWW www = new WWW(url);
        yield return www;
        AssetBundle assetBundle = www.assetBundle;
        if (!string.IsNullOrEmpty(www.error))
        {
            Debug.Log("There was a problem loading asset bundles.");
        }
        GameObject molecule = Instantiate(assetBundle.LoadAsset(objectName + ".fbx")) as GameObject;
        Vector3 size = new Vector3(2f, 2f, 2f);
        Vector3 slideRight = new Vector3(0.0f, 0.0f, 10.0f);
        Vector3 rotation = new Vector3(0.0f, 0.0f, 0.0f);
        molecule.transform.localScale = size;
        molecule.transform.position = slideRight;
        molecule.tag = "edmc";
        assetBundle.Unload(false);
        DontDestroyOnLoad(molecule);
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
    public GameObject poscar;
    void Update()
    {
        GameObject []poscar_copy = GameObject.FindGameObjectsWithTag("edmc"); 
        foreach (GameObject i in poscar_copy) 
            i.transform.Rotate(Vector3.down * Time.deltaTime* 10.0f);
        //poscar.transform.localRotation = Quaternion.Euler(Time.deltaTime, 0.0f, 0.0f);
    }
}
