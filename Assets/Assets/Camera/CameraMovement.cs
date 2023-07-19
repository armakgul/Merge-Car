using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovement : MonoBehaviour
{
    //Bu blok kameranın karakteri takip etmesini sağlayacak

    public Camera FollowUpCamera;
    public GameObject objectToFollow;
    public Vector3 cameraOffset;


    void Start() {
        objectToFollow = GameObject.FindGameObjectWithTag("Player");  
    }

    void Update() {
        MoveCamera(cameraOffset);
    }
    

    public void MoveCamera(Vector3 offset) {
        FollowUpCamera.transform.position =  objectToFollow.transform.position + offset;
    }

   
}
