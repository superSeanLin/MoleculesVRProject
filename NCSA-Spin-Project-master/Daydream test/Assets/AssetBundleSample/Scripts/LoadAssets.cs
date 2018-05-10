using UnityEngine;
using System.Collections;
//using AssetBundles;
//using System.Collections.Generic;

public class LoadAssets: MonoBehaviour
{
    string url = "http://web.engr.illinois.edu/~schleife/vr_app/AssetBundles/Android/molecules";
    void Start()
    {
        Debug.Log("hello");
        StartCoroutine(DownloadModel());
    }

    IEnumerator DownloadModel()
    {
        WWW www = new WWW(url);
        yield return www;
        AssetBundle assetBundle = www.assetBundle;
        if(www.error != "")
        {
            Debug.Log("There was a problem loading asset bundles.");
        }
        GameObject mc = Instantiate(assetBundle.LoadAsset("LAO.fbx")) as GameObject;
        Vector3 size = new Vector3(2f, 2f, 2f);
        Vector3 slideRight = new Vector3(390.0f, 365.0f, 0.0f);
        Vector3 rotation = new Vector3(0.0f, 0.0f, 0.0f);
        mc.transform.localScale = size;
        mc.transform.position = slideRight;
        mc.tag = "mc";
        Canvas canvas = FindObjectOfType<Canvas>();
        mc.transform.SetParent(canvas.transform);
        assetBundle.Unload(false);
        DontDestroyOnLoad(mc);
    } 
}

/*
public class LoadAssets : MonoBehaviour
{
	public const string AssetBundlesOutputPath = "/AssetBundles/";
	public string assetBundleName;
	public string assetName;

	// Use this for initialization
	IEnumerator Start ()
	{
        assetBundleName = "molecules";
        assetName = "LAO";
		yield return StartCoroutine(Initialize() );
		
		// Load asset.
		yield return StartCoroutine(InstantiateGameObjectAsync (assetBundleName, assetName) );
	}

	// Initialize the downloading url and AssetBundleManifest object.
	protected IEnumerator Initialize()
	{
		// Don't destroy this gameObject as we depend on it to run the loading script.
		DontDestroyOnLoad(gameObject);

		// With this code, when in-editor or using a development builds: Always use the AssetBundle Server
		// (This is very dependent on the production workflow of the project. 
		// 	Another approach would be to make this configurable in the standalone player.)
		#if DEVELOPMENT_BUILD || UNITY_EDITOR
		AssetBundleManager.SetDevelopmentAssetBundleServer ();
		#else
		// Use the following code if AssetBundles are embedded in the project for example via StreamingAssets folder etc:
		AssetBundleManager.SetSourceAssetBundleURL(Application.dataPath + "/");
		// Or customize the URL based on your deployment or configuration
		//AssetBundleManager.SetSourceAssetBundleURL("http://www.MyWebsite/MyAssetBundles");
		#endif

		// Initialize AssetBundleManifest which loads the AssetBundleManifest object.
		var request = AssetBundleManager.Initialize();
		if (request != null)
			yield return StartCoroutine(request);
	}

	protected IEnumerator InstantiateGameObjectAsync (string assetBundleName, string assetName)
	{
		// This is simply to get the elapsed time for this phase of AssetLoading.
		float startTime = Time.realtimeSinceStartup;

		// Load asset from assetBundle.
		AssetBundleLoadAssetOperation request = AssetBundleManager.LoadAssetAsync(assetBundleName, assetName, typeof(GameObject) );
		if (request == null)
			yield break;
		yield return StartCoroutine(request);

		// Get the asset.
		GameObject prefab = request.GetAsset<GameObject> ();

        if (prefab != null)
        {
            GameObject mc;
            Vector3 size = new Vector3(0.3f, 0.3f, 0.3f);
            Vector3 slideRight = new Vector3(3.0f, 0.0f, 0.0f);
            Vector3 rotation = new Vector3(0.0f, 0.0f, 0.0f);
            mc = GameObject.Instantiate(prefab);
            mc.transform.localScale = size;
            mc.transform.position += slideRight;
            mc.tag = "mc";
        }
		// Calculate and display the elapsed time.
		float elapsedTime = Time.realtimeSinceStartup - startTime;
		Debug.Log(assetName + (prefab == null ? " was not" : " was")+ " loaded successfully in " + elapsedTime + " seconds" );
	}
}
*/