using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class rotational : MonoBehaviour
{
    int i;
    string url = "http://web.engr.illinois.edu/~schleife/vr_app/AssetBundles/Android/molecules";
    public GameObject camera;
    string objectName;
    // Use this for initialization
   /* void Start()
    {
        StartCoroutine(LoadObject(0));
        i = 1;
    }*/

    IEnumerator LoadObject(int i)
    {
        WWW www = new WWW(url);
        yield return www;
        AssetBundle assetBundle = www.assetBundle;
        if (www.error != "")
        {
            Debug.Log("There was a problem loading asset bundles.");
        }
        //objectName = ObjMessage.mcName;
        GameObject mc = Instantiate(assetBundle.LoadAsset(UIManager.moleculeNames[i] + ".fbx")) as GameObject;
        mc.transform.position = new Vector3(0f, 0f, 10f);
        mc.tag = "mc";
        assetBundle.Unload(false);
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

    private void Start()
    {
        Object.Instantiate(poscar, new Vector3(0, 0, 20), Quaternion.identity);
        poscar.gameObject.tag = "edmc";
        
    }
    public GameObject poscar;
    void Update()
    {
        poscar.transform.localRotation = Quaternion.Euler(Time.deltaTime, 0.0f, 0.0f);
    }
}
