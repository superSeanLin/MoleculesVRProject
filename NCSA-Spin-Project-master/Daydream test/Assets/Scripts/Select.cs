using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Select : MonoBehaviour, IPointerClickHandler {

	public void OnPointerClick(PointerEventData data)
    {
    	Debug.Log(gameObject.name);
    }
}
