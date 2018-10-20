using HoloToolkit.Unity.InputModule.Tests;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Back_Handler : MonoBehaviour { //, IPointerClickHandler{

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
            Application.LoadLevel("New_Menu");
        }
    }
    */

    // FOR the BUTTON SYSTEM
    private void OnButtonPressed(TestButton data)
    {
        // if clicked at button
        // if (EventSystem.current.currentSelectedGameObject.GetComponent<Button>() != null)

        SceneManager.LoadScene("New_Menu");
    }

}
