using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AI;
using UnityEngine.EventSystems;

public class AddButtons : MonoBehaviour {
    // absolute path storing the assetbundle manifest
    private string url = "http://web.engr.illinois.edu/~schleife/vr_app/AssetBundles/Android/molecules";
    // origial button
    public GameObject ButtonPrefab;
    public GameObject newButton;
    public GameObject myCanvas;
    private UIManager uiManager;

	// Use this for initialization
	IEnumerator Start(){
        uiManager = GameObject.Find("UIManager").GetComponent<UIManager>();
        // wait ReadManifest finish and update the count
        yield return uiManager;
        ButtonPrefab = GameObject.Find("ButtonPrefab");
        myCanvas = GameObject.Find("Canvas");
        // in unity, -y upwards, +y downwards
        Vector3 moveButtonDown = new Vector3(335f, 400f, 0f);
        for(int i = 0; i < uiManager.count; i++){
            // copy a button and set property
            newButton = Instantiate(ButtonPrefab) as GameObject;
            newButton.transform.SetParent(myCanvas.transform, false);
            moveButtonDown += new Vector3(0f, -10f, 0f);
            newButton.transform.position = moveButtonDown;
            newButton.transform.localScale = new Vector3 (0.75f, 0.75f, 0.75f);
            Button b = newButton.GetComponent<Button>();
            b.GetComponentInChildren<Text>().text = UIManager.moleculeNames[i];
            // we can use tag to create click event
            b.tag = "b";
        }
	}

	// Update is called once per frame
	void Update(){
    }
}
