using Cinemachine;
using UnityEditor;
using UnityEngine;
using System;
using System.Collections;

public class CameraChange : MonoBehaviour
{
    public Camera mainCamera; // Unity's main camera
    public Camera secondCamera;

    private Action CurrentMovementMethod;

    void Start()
    {
        SwitchToMainCamera();
    }

    private void OnEnable()
    {
        LevelManager.OnGameStateChanged += HandleGameStateChanged;
    }

    private void OnDisable()
    {
        LevelManager.OnGameStateChanged -= HandleGameStateChanged;
    }

    // Update is called once per frame
    void Update()
    {
        CurrentMovementMethod?.Invoke();
    }

    void SwitchToMainCamera()
    {
        mainCamera.enabled = true;
        secondCamera.enabled = false;
        Debug.Log("sülee");
    }

    void SwitchToSecondCamera()
    {
        
        mainCamera.enabled = false;
        secondCamera.enabled = true;
        Debug.Log("sdag");
    }


    private void HandleGameStateChanged(LevelManager.GameStates newState)
    {

        Debug.Log("gamestatechanged");
        
        switch (newState)
        {
            case LevelManager.GameStates.start:
                CurrentMovementMethod = SwitchToMainCamera;
                break;
            case LevelManager.GameStates.section1:
            case LevelManager.GameStates.section2:
                CurrentMovementMethod = SwitchToMainCamera;
                break;
            case LevelManager.GameStates.section3:
                CurrentMovementMethod = SwitchToSecondCamera;
                break;
            case LevelManager.GameStates.UI:
                CurrentMovementMethod = SwitchToMainCamera;
                break;

        }
    }
}
