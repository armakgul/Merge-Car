using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class C_Movement : MonoBehaviour
{
    // bu script sadece karaktere sabit hız hareket verecek
    // physic olmayacak

    // pos aldığı kamera
    [SerializeField] public Camera orthoCamera;
    [SerializeField] public float cameraCorrectionMultiplier;
    public GameObject player;
    public Vector3 p_position;
    public float p_ForwardSpeed = 1;

    //mouse drag distance
     Vector3 mouseDistance = Vector3.zero;
     Vector3 lastPosition;
     bool trackMouse = false;




    public void Start() {
        player = GameObject.FindGameObjectWithTag("Player");
 
    }

    public void Update() {
        MousePosition();
        MoveCharacter(mouseDistance.x, p_ForwardSpeed);
    }


    //Mouse pozisyonu x ekseninde alınıp karaktere atanıyor
    public void MousePosition() {
        
        if (Input.GetMouseButtonDown(0))
        {
            trackMouse = true;
            lastPosition = orthoCamera.ScreenToWorldPoint(new Vector3(Input.mousePosition.x , Input.mousePosition.y , orthoCamera.nearClipPlane+1));
        }



        else if (Input.GetMouseButtonUp(0))
        {
        trackMouse = false;
        Debug.Log ("Mouse moved " + mouseDistance + " while button was down.");
        //mouseDistance = mouseDistance;   
        }
        
        if (trackMouse)
            {
                Vector3 newPosition = orthoCamera.ScreenToWorldPoint(new Vector3(Input.mousePosition.x , Input.mousePosition.y , orthoCamera.nearClipPlane+1));
                
                mouseDistance = mouseDistance + (newPosition - lastPosition);
                
                lastPosition = newPosition;
            }

    }



    public void MoveCharacter(float xPos , float speed) {

        player.transform.position = new Vector3(Mathf.Clamp(xPos/cameraCorrectionMultiplier, -4.5f, + 4.5f), 0.51f , player.transform.position.z + Time.deltaTime * speed);

    }
}
