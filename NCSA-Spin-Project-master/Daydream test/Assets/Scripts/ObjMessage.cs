using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// enough for now; might need refresh sometime later, thus maybe inherent from MonoBehaviour will be helpful
public static class objMessage{

    private static string moleculeName;

    public static void loadMessage(string name){
        moleculeName = name;
    }

    public static string unLoadMessage(){
    	return moleculeName;
    }

    private static bool isRotational = true;

    public static void pause(){
    	isRotational = false;
    }

    public static void revolve(){
    	isRotational = true;
    }

    public static bool loadBoolean(){
    	return isRotational;
    }
}
