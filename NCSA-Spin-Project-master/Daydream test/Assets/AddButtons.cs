using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AI;
using UnityEngine.EventSystems;

public class AddButtons : MonoBehaviour {
    string url = "http://web.engr.illinois.edu/~schleife/vr_app/AssetBundles/Android/molecules";
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
        Vector3 moveButtonDown = new Vector3(335f, 350f, 0f);
        for(int i = 0; i < uiManager.count - lastVal; i++)
        {
            newButton = Instantiate(ButtonPrefab) as GameObject;
            newButton.transform.SetParent(myCanvas.transform, false);
            newButton.transform.position = moveButtonDown;
            moveButtonDown -= new Vector3(0f, -10f, 0f);
            newButton.transform.localScale = new Vector3 (0.75f, 0.75f, 0.75f);
            Debug.Log(newButton.GetType());
            Button b = newButton.GetComponent<Button>();
            b.GetComponentInChildren<Text>().text = UIManager.moleculeNames[i];
            b.tag = "b";
            // b.onClick.AddListener(UIManager.LoadMLevel);
           /* EventTrigger eventTrigger = b.gameObject.GetComponentInChildren<EventTrigger>();
            EventTrigger.Entry pointerDownEntry = new EventTrigger.Entry();
            pointerDownEntry.eventID = EventTriggerType.PointerDown;
            pointerDownEntry.callback.AddListener((data) => { onButton(i); });
            eventTrigger.triggers.Add(pointerDownEntry);*/
            //Debug.Log("button created");
         

        }
        lastVal = uiManager.count;

       /* if (EventSystem.current.IsPointerOverGameObject())
        {
            Destroy(GameObject.FindGameObjectWithTag("mc"));
            StartCoroutine(LoadModel(EventSystem.current.currentSelectedGameObject.GetComponentInChildren<Text>().text));
        }*/
    }

    public void onButton(int num)
    {
        //Destroy(data.pointerPress);
        //selected = data.pointerPress.GetComponentInChildren<Text>().text;
        // Check if the mouse was clicked over a UI element
        //Application.LoadLevel("SPIN6.26");
        //Debug.Log(num);
    }

    public void onEnter(BaseEventData data)
    {
        data.selectedObject.GetComponentInChildren<Text>().text = "Select";
    }

}
