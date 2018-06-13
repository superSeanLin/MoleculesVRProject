using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Handler : MonoBehaviour, IPointerClickHandler {

	public void OnPointerClick(PointerEventData data)
    {
        // if clicked at button
        if (EventSystem.current.currentSelectedGameObject.GetComponent<Button>() != null)
        {
            objMessage.loadMessage(gameObject.name);
            Application.LoadLevel("SPIN6.26");
        }
    }
}
