using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class C_Movement : MonoBehaviour, ISpeedable, IWeightable
{
    // bu script sadece karaktere sabit hız hareket verecek
    // physic olmayacak

    public bool gameStarted = false;


    // pos aldığı kamera
    [Header ("MOVEMENT ISSUES")]
    [SerializeField] public Camera orthoCamera;
    [SerializeField] public float cameraCorrectionMultiplier;
    public GameObject player;
    public Vector3 p_position;
    public float p_ForwardSpeed = 1;

    public bool section1or2;
    public bool section3;

    //mouse drag distance
     Vector3 mouseDistance = Vector3.zero;
     Vector3 lastPosition;
     bool trackMouse = false;

    public Rigidbody rb;


    [Header ("OBS ISSUES")]
     public float speed = 25;
     public float weight = 50;


    public void Start() {
        player = GameObject.FindGameObjectWithTag("Player");
        rb = GetComponent<Rigidbody>();
        section1or2 = true;
        section3 = false;
    }

    public void Update() {

    if (Input.GetMouseButtonDown(0))  // 0 for left click (or a single touch)
    {
    gameStarted = true;

    // ...you can add other actions you want to do when game starts, like animations.
    }

        
        if (!gameStarted)
    {
        return;
    }
        MousePosition();
        MoveCharacter(mouseDistance.x, p_ForwardSpeed);
    }


    public void GetSpeed (float speedAmount) {
        speed += speedAmount;
        //p_ForwardSpeed = speed;
        //shieldText.text = shield.ToString();
    }

    public void GetWeight (float weightAmount) {
        weight -= weightAmount;
    }

    

    #region INTERFACE
        
    public void Speed(float speedAmount) {
        GetSpeed(speedAmount);
    }

    public void Weight (float weightAmount) {
        GetWeight(weightAmount);
    }



    #endregion
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
        }
        
        if (trackMouse)
            {
                Vector3 newPosition = orthoCamera.ScreenToWorldPoint(new Vector3(Input.mousePosition.x , Input.mousePosition.y , orthoCamera.nearClipPlane+1));
                
                mouseDistance = mouseDistance + (newPosition - lastPosition);
                
                lastPosition = newPosition;
            }

    }

    public void MoveCharacter(float xPos , float speed) {

        if (section1or2)
        {
            player.transform.position = new Vector3(Mathf.Clamp(xPos/cameraCorrectionMultiplier, -4.5f, + 4.5f), 0.51f , player.transform.position.z + Time.deltaTime * speed);
        } else  rb.velocity = new Vector3(rb.velocity.x,  rb.velocity.y,  p_ForwardSpeed);
        
        

    }
}
