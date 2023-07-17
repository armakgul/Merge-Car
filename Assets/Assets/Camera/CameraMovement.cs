using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovement : MonoBehaviour
{
    //Bu blok kameranın karakteri takip etmesini sağlayacak

    public Camera FollowUpCamera;

    public GameObject objectToFollow;


    void Start() {
        objectToFollow = GameObject.FindGameObjectWithTag("Player"); 
        CameraPosition initialCameraPos = new CameraPosition(objectToFollow.transform.position + new Vector3(0,4,-50));
    }
    

    void Update() {
            
    }

    public class CameraPosition {
        
        Vector3 cameraPosition = new Vector3();
        public CameraPosition(Vector3 initialPosition) {
            cameraPosition = initialPosition;
        }
    }
}
