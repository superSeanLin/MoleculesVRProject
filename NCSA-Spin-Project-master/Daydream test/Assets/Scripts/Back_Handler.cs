using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Back_Handler : MonoBehaviour, IPointerClickHandler, IPointerDownHandler, IPointerEnterHandler {

	public void OnPointerClick(PointerEventData data){
        // if clicked at button
        Debug.Log(data);
        //if (EventSystem.current.currentSelectedGameObject.GetComponent<Button>() != null)
        if(gameObject.tag == "b")
        {
            Application.LoadLevel("New_Menu");
        }
    }

    public void OnPointerDown(PointerEventData eventData){
        Debug.Log ("Pointer Enter..");
    }

    public void OnPointerEnter(PointerEventData eventData){
        Debug.Log ("Pointer Enter..");
    }
}
