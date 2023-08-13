using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System;

public class UI_Upgrades : MonoBehaviour
{
    
    public Button shieldButton;
    public Button healthButton;


    void Start()
    {
        GetButtons();

        DisableUI();
        LevelManager.Instance.OnStart += ActivateUI;
        LevelManager.Instance.OnSectionOneStarted +=DisableUI;

    }

    private void Update() {
        SetButtonActiveness();
    }

    
    public void ActivateUI () {
        this.transform.gameObject.SetActive(true);
    }

    public void DisableUI () {
        this.transform.gameObject.SetActive(false);
    }

    public void GetButtons() {
        shieldButton = transform.Find("ShieldUpButton").GetComponent<Button>();
        healthButton = transform.Find("HealthUpButton").GetComponent<Button>();
    }

    public void SetButtonActiveness()  {

        if (EconomyManager.Instance.CurrentMoney >= 50)
        {
            shieldButton.gameObject.SetActive(true);
            healthButton.gameObject.SetActive(true);
        }
        else {
            //shieldButton.gameObject.SetActive(false);
            //healthButton.gameObject.SetActive(false);

            shieldButton.interactable = false;
            healthButton.interactable = false;
        }
        
        
    }
}
