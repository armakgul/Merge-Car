using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using Unity.VisualScripting;
using UnityEngine;
using System;

public class C_Movement : MonoBehaviour, ISpeedable, IWeightable
{
    // bu script sadece karaktere sabit hız hareket verecek
    // physic olmayacak

    public Car car;
    private Action CurrentMovementMethod;

    // pos aldığı kamera
    [Header ("MOVEMENT ISSUES")]
    [SerializeField] public Camera orthoCamera;
    [SerializeField] public float cameraCorrectionMultiplier;
    public GameObject player;
    [SerializeField] float leftClamp = -4.5f;
    [SerializeField] float rightClamp = 4.5f;


    //mouse drag distance
     Vector3 mouseDistance = Vector3.zero;
     Vector3 lastPosition;
     bool trackMouse = false;

    public Rigidbody rb;

    float speed;
    float weight;
    GameObject carModel;
    GameObject currentCar;

    public float GetSpeed
    {
        get { return speed; }
    }
    public float GetWeight
    {
        get { return weight; }
    }

    public void Start() {
        player = GameObject.FindGameObjectWithTag("Player");
        rb = GetComponent<Rigidbody>();

        SetCarVariables();
    }

    private void OnEnable()
    {
        LevelManager.OnGameStateChanged += HandleGameStateChanged;
    }

    private void OnDisable()
    {
        LevelManager.OnGameStateChanged -= HandleGameStateChanged;
    }

    void SetCarVariables() {
        speed = car.speed;
        weight = car.weight;
        carModel = car.model;
        currentCar = Instantiate(carModel, player.transform.position,Quaternion.identity);
        currentCar.transform.parent = player.transform;
    }

    private void Update()
    {
        CurrentMovementMethod?.Invoke();
        
    }


    public void MakeSpeedUp (float speedAmount) {
        speed += speedAmount;
    }

    public void MakeWeightdown (float weightAmount) {
        weight -= weightAmount;
    }

    

    #region INTERFACE
        
    public void SpeedUp(float speedAmount) {
        MakeSpeedUp(speedAmount);
    }

    public void WeightDown (float weightAmount) {
        MakeWeightdown(weightAmount);
    }

    #endregion
   



    private void HandleGameStateChanged(LevelManager.GameStates newState)
    {
        switch (newState)
        {
            case LevelManager.GameStates.start:
                CurrentMovementMethod = Movement1;
                break;
            case LevelManager.GameStates.section1:
            case LevelManager.GameStates.section2:
                CurrentMovementMethod = Movement2;
                break;
            case LevelManager.GameStates.section3:
                CurrentMovementMethod = Movement3;
                break;
            case LevelManager.GameStates.UI:
                CurrentMovementMethod = Movement4;
                break;
            default:
                CurrentMovementMethod = null; // Or assign a default movement method.
                break;
        }
    }

    public void Movement1() {
        return;
    } 
    public void Movement2() {
        MousePosition();
        MoveCharacter(mouseDistance.x, speed/weight*speed*2);
    }
    public void Movement3() {
        rb.isKinematic = false;
        rb.useGravity = true;
        float speedModified;
        if (speed<= 30 )
        {
            speedModified = speed/weight*speed*2;
        } else if (speed <=50)
        {
            speedModified = speed/weight*speed*1.5f;
        }
        else if (speed <=100)
        {
            speedModified = speed/weight*speed;
        }
        else 
        {
            speedModified = 230f;
        }

        
        rb.velocity = new Vector3(rb.velocity.x,  rb.velocity.y,  Math.Clamp(speedModified, 0f, 230f));
        Debug.Log(speedModified);
    }
    public void Movement4 () {
        rb.isKinematic = true;
        rb.useGravity = false;
        rb.velocity = Vector3.zero;
        return;
    }

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

                if (player.transform.position.x <= -4.5f || player.transform.position.x >= 4.5f)
                {
                    mouseDistance.x = Mathf.Clamp(mouseDistance.x, leftClamp, rightClamp);
                }
                
                lastPosition = newPosition;
            }
        

    }

    public void MoveCharacter(float xPos , float speed) {
        
        player.transform.position = new Vector3(Mathf.Clamp(xPos/cameraCorrectionMultiplier, leftClamp, + rightClamp), 0.51f , player.transform.position.z + Time.deltaTime * speed);

        player.transform.eulerAngles = Vector3.Lerp(Vector3.zero, Vector3.up*mouseDistance.x, 3000f*Time.deltaTime);

        if (!trackMouse)
        {
            Vector3 pos = player.transform.eulerAngles;
            player.transform.eulerAngles = Vector3.Lerp(pos, Vector3.zero, 1000f*Time.deltaTime);
        }
        
    }
}
