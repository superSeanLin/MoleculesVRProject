using HoloToolkit.Unity.InputModule.Tests;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Quit_Handler : MonoBehaviour
{ //, IPointerClickHandler {

    [SerializeField]
    private TestButton button = null;

    private void Awake()
    {
        button.Activated += OnButtonPressed;
    }

    /* Unity old UI
	public void OnPointerClick(PointerEventData data){
        // if clicked at button
        // if (EventSystem.current.currentSelectedGameObject.GetComponent<Button>() != null)
        if(gameObject.tag == "b"){
         #if UNITY_EDITOR
         UnityEditor.EditorApplication.isPlaying = false;
         #else
         Application.Quit();
         #endif
        }
    }
    */

    //with buttons 
    private void OnButtonPressed(TestButton data)
    {
        // if clicked at button
        // if (EventSystem.current.currentSelectedGameObject.GetComponent<Button>() != null)
        #if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false;
        #else
            Application.Quit();
        #endif
    }
}
