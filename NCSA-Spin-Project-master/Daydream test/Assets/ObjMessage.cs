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
}
