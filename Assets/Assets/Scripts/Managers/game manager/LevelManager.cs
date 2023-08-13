using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.SceneManagement;
using System.Runtime.CompilerServices;
using UnityEngine.EventSystems;

public class LevelManager : MonoBehaviour
{    
    public GameStates currentState;

    //public event Action OnSectionOneStarted;
    
    public event Action OnStart;
    public event Action OnSectionTwoStarted;
    public event Action OnSectionThreeStarted;
    public event Action OnFreefallDead;
    public event Action OnSectionOneStarted;
    

    #region Singleton 

    public static LevelManager Instance;

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
            OnStart();
            break;

            case GameStates.section1:
            currentState = GameStates.section1;
            OnSectionOneStarted();
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
            OnFreefallDead();
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

        // Assuming a simple tap check for mobile touch input
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            // Check if the touch was on a UI element
            if (IsPointerOverUIObject())
                return; // Do not start the game if we tapped on UI

            // Your code to start the game goes here
            StartGame();
        }
    }

   }

    bool IsPointerOverUIObject()
    {
        // Check for touches
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            PointerEventData eventDataCurrentPosition = new PointerEventData(EventSystem.current);
            eventDataCurrentPosition.position = new Vector2(touch.position.x, touch.position.y);
            List<RaycastResult> results = new List<RaycastResult>();
            EventSystem.current.RaycastAll(eventDataCurrentPosition, results);
            return results.Count > 0;  // If there are one or more hits, it means we're touching a UI element
        }
        return false;
    }

    private void StartGame() {
        SetState(GameStates.section1);
        Debug.Log("section 1 started");

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
