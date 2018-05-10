using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Handler : MonoBehaviour, IPointerDownHandler, IPointerUpHandler {

	public void OnPointerDown(PointerEventData data)
    {
        if (EventSystem.current.currentSelectedGameObject.GetComponent<Button>() != null)
        {
            Application.LoadLevel("SPIN6.26");
        }
    }
    public void OnPointerUp(PointerEventData data)
    {

    }

}
