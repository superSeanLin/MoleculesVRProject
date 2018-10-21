using HoloToolkit.Unity.InputModule.Tests;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Back_Handler_Google : MonoBehaviour, IPointerClickHandler{



	public void OnPointerClick(PointerEventData data){
        SceneManager.LoadScene("New_Menu");
    }


}
