# MoleculesVRProject
NCSA Project

This is a simple guide to using MoleculesVR. You will need a Google Daydream VR Headset in order to be able to run the project in full.
-However, this feature is not yet available as our team is still working on controls.

INTRODUCTION TO ASSETBUNDLES

AssetBundles are a low level API used within Unity Engine to compress files. These are beneficial for several reasons: they minimize the file size when distributing an application across a platform, especially a mobile platform such as Android, which is used in this project. The compressed file can be placed on a web server, so asset data can be loaded at runtime and keep the file size lower. It also allows greater flexibility in scripting as the variant size of AssetBundles can allow a developer to decide how many assets to import into the project at runtime. One current limitation is that the AssetBundles must be updated and generated within the Unity Windows when adding additional assets into an AssetBundle.

TESTING WITHIN THE UNITY WINDOW

-To use in the Unity window, just ensure the following steps:

-Go to Asset > Assetbundles > Ensure that Simulation Mode is checked.
-Run the simulation

For now, the mouse is used to test the main menu. All the menu options will go to the sample scene we have created. Eventually, the options will go to a different scene with the selected molecule shown.

To add an AssetBundle item:
-Make sure that Simulation Mode is disabled, go to Asset > AssetBundles > Disable Simulation Mode.
add the .fbx or .obj file to the project and set its AssetBundle tag to 'molecules', which should already be an option.
-Turn on Simulation Mode again, and your menu should be changed.

----------------------------------------------------------------------------------------------------------------
BUILDING THE APP IN ANDROID ENVIRONMENT

To build the AssetBundles files, ensure that all assets (INCLUDING PREVIOUSLY USED ASSETS) are all present in the Unity project and have the appropriate tag. The tag 'molecules' should be used again for consistency within the scripts. See the scripts listed in the Unity Assets for reference.
Hint: An easy way to keep track of assets is to maintain a local folder of all assets to be imported into Unity. You will need previously used assets as well as new ones in order to build the AssetBundles files in their entirety.

Go to Asset > AssetBundles and click on 'Build AssetBundles'.

This will automatically generate a folder with the path MoleculesVRProject > NCSA-Spin-Project-master > Daydream test > Assetbundles.

There will be 4 files of interest. The first two are called Android and Android.manifest which do not need to be added to the server. They contain a directory of all AssetBundles that were generated. A different AssetBundle will be created for each tag that exists. All assets with the same tag will be in the same AssetBundle. The next two files should be named molecules and molecules.manifest. These must be placed on the server. Refer to Dr. Schleife for help with adding the updated files to the web server. Note that the files should REPLACE the outdated ones with the same path. This must be done with respect for consistency with the scripts that Unity will use when retrieving the AssetBundles from the server. The molecules file contains the compressed asset data and the manifest file contains a directory of assets contained within the AssetBundle. Both files are used in scripting. Before placing the files on the web server, verify that all the assets are listed in the manifest file.

As of 5 June 2018, the VASP and CHGAR density files are needed to be added to the AssetBundles.
