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
    
    enum ShieldOrHealth {healthGiver, shieldGiver, speedGiver, weightReducer, moneyGiver};

    [Header("OBS TYPE")]
    
    [SerializeField] ShieldOrHealth shieldorhealth;

    private float value;

    private void Start() {
        
        valueText = transform.Find("Canvas/ValueText").GetComponent<TMP_Text>();
        
        description = transform.Find("Canvas/Description").GetComponent<TMP_Text>();
        
        SwitchBetweenObs();
       
    }

    public void SwitchBetweenObs () {

        switch (shieldorhealth)
        {
            case ShieldOrHealth.shieldGiver:
            description.text = "SHIELD";
            value = GetComponent<ShieldGiver>().GetShieldAmount();
            break;

            case ShieldOrHealth.healthGiver:
            description.text = "HEALTH";
            value = GetComponent<HealthGiver>().GetCureAmount();
            break;

            case ShieldOrHealth.speedGiver:
            //description.text = "HEALTH";
            value = GetComponent<SpeedGiver>().damageAmount;
            break;

            case ShieldOrHealth.weightReducer:
            //description.text = "HEALTH";
            value = GetComponent<WeightReducer>().damageAmount;
            break;

            case ShieldOrHealth.moneyGiver:
            //description.text = "HEALTH";
            value = GetComponent<MoneyGiver>().damageAmount;
            break;

        }

        valueText.text = value.ToString();

    }

}
