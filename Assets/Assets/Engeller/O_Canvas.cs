using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class O_Canvas : MonoBehaviour
{
    [Header("CANVAS")]
    [SerializeField] public TMP_Text valueText, description;
    [SerializeField] public Sprite sprite;
    
    enum ShieldOrHealth {healthGiver, shieldGiver};

    [Header("OBS TYPE")]
    
    [SerializeField] ShieldOrHealth shieldorhealth;

    [SerializeField] float value;

    private void Start() {
        valueText = gameObject.transform.Find("ValueText").GetComponent<TMP_Text>();
        valueText.text = value.ToString();

        description = gameObject.transform.Find("Description").GetComponent<TMP_Text>();
        
        switch (shieldorhealth)
        {
            case ShieldOrHealth.shieldGiver:
            description.text = "SHIELD";
            break;

            case ShieldOrHealth.healthGiver:
            description.text = "HEALTH";
            break;

        }
        

       
    }




}
