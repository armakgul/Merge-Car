using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class LevelManager : MonoBehaviour
{    
    public GameStates currentState;

    //public event Action OnSectionOneStarted;
    public event Action OnSectionTwoStarted;
    public event Action OnSectionThreeStarted;
    

    #region Singleton
    public static LevelManager Instance { get; private set; }

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }
    #endregion
   
    public enum GameStates {
        start,
        section1,
        section2,
        section3,
        freefall,
        UI
    }
    
    public GameObject ramp;


    private void Start() {   
        
        SetState(GameStates.start);

        ramp.SetActive(false);
    }

    private void Update() 
    {
        CheckInitialTap();
    }


    public void SetState (GameStates state) {
        currentState = state;

        switch(state) {
            case GameStates.start:
            currentState = GameStates.start;
            break;

            case GameStates.section1:
            currentState = GameStates.section1;
            //OnSectionOneStarted();
            break;

            case GameStates.section2:
            currentState = GameStates.section2;
            OnSectionTwoStarted();
            break;
            
            case GameStates.section3:
            currentState = GameStates.section3;
            OnSectionThreeStarted();
            break;

            case GameStates.freefall:
            currentState = GameStates.freefall;
            break;

            case GameStates.UI:
            currentState = GameStates.UI;
            break;

        }
            
    }

    public GameStates GetState() {
        return currentState;
    }


    // check initial tap status
    // start if clicked/tapped
   public void CheckInitialTap() {
    
    if (GetState() == GameStates.start)
    {
        if (Input.GetMouseButtonDown(0))  // 0 for left click (or a single touch)
        {
            
            SetState(GameStates.section1);
            Debug.Log("section 1 started");
        } else return;
    }
    
    
   }







    private void OnEnable() {
        
        OnSectionThreeStarted += SetRampActive;
    }


    private void OnDisable() {
        OnSectionThreeStarted -= SetRampActive;
    }


    public void SetRampActive()
    {
        ramp.SetActive(true);
    }

    
}
