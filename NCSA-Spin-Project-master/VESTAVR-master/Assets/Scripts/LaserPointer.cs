using UnityEngine;

public class LaserPointer : MonoBehaviour
{
    private SteamVR_TrackedObject trackedObj;

    public GameObject laserPrefab; // The laser prefab
    private GameObject laser; // A reference to the spawned laser
    private Transform laserTransform; // The transform component of the laser for ease of use

    private Vector3 hitPoint; // Point where the raycast hits

    private SteamVR_Controller.Device Controller
    {
        get { return SteamVR_Controller.Input((int)trackedObj.index); }
    }

    void Awake()
    {
        trackedObj = GetComponent<SteamVR_TrackedObject>();
    }

    //new
    void Start()
    {
        laser = Instantiate(laserPrefab);
        laserTransform = laser.transform;
    }

    void Update()
    {
        // Is the touchpad held down?
        if (Controller.GetPress(SteamVR_Controller.ButtonMask.Touchpad))
        {
            RaycastHit hit;

            // Send out a raycast from the controller
            if (Physics.Raycast(trackedObj.transform.position, transform.forward, out hit, 100))
            {
                hitPoint = hit.point;

                ShowLaser(hit);
            }
        }
        else // Touchpad not held down, hide laser & teleport reticle
        {
            laser.SetActive(false);
        }

    }

    private void ShowLaser(RaycastHit hit)
    {
        laser.SetActive(true); //Show the laser
        laserTransform.position = Vector3.Lerp(trackedObj.transform.position, hitPoint, .5f); // Move laser to the middle between the controller and the position the raycast hit
        laserTransform.LookAt(hitPoint); // Rotate laser facing the hit point
        laserTransform.localScale = new Vector3(laserTransform.localScale.x, laserTransform.localScale.y,
            hit.distance); // Scale laser so it fits exactly between the controller & the hit point
    }
}
