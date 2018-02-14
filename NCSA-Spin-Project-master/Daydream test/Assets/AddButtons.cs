using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AddButtons : MonoBehaviour {

    public GameObject ButtonPrefab;
    public GameObject newButton;
    public GameObject myCanvas;
    GameObject getCount;
    UIManager uiManager;
    static int lastVal;
        
	// Use this for initialization
	void Start () {
        getCount = GameObject.Find("UIManager");
        uiManager = getCount.GetComponent<UIManager>();
        //Debug.Log(uiManager.count);
        ButtonPrefab = GameObject.Find("ButtonPrefab");
        myCanvas = GameObject.Find("Canvas");
	}
	
	// Update is called once per frame
	void Update () {
        //Debug.Log(uiManager.count);
        Vector3 moveButtonDown = new Vector3(0f, -30f, 0f);
        for(int i = 0; i < uiManager.count - lastVal; i++)
        {
            newButton = Instantiate(ButtonPrefab) as GameObject;
            newButton.transform.SetParent(myCanvas.transform, false);
            newButton.transform.position -= moveButtonDown;
            moveButtonDown -= new Vector3(0f, -30f, 0f);
            Debug.Log(newButton.GetType());
            Button b = newButton.GetComponent<Button>();
            b.GetComponentInChildren<Text>().text = UIManager.moleculeNames[i];
            b.onClick.AddListener(UIManager.LoadMLevel);
        }
        lastVal = uiManager.count;
	}
}
