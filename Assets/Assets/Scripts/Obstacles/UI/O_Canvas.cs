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
    
    enum ObstacleType {healthGiver, shieldGiver, speedGiver, weightReducer, moneyGiver, speedGiverFirst, weightReducerFirst, moneyGiverFirst};

    [Header("OBS TYPE")]
    
    [SerializeField] ObstacleType obstacleType;

    private float value;

    private void Start() {
        
        valueText = transform.Find("Canvas/ValueText").GetComponent<TMP_Text>();
        
        description = transform.Find("Canvas/Description").GetComponent<TMP_Text>();
        
        SwitchBetweenObs();
       
    }

    public void SwitchBetweenObs () {

        switch (obstacleType)
        {
            case ObstacleType.shieldGiver:
            description.text = "SHIELD";
            value = GetComponent<ShieldGiver>().GetShieldAmount();
            break;

            case ObstacleType.healthGiver:
            description.text = "HEALTH";
            value = GetComponent<HealthGiver>().GetCureAmount();
            break;

            case ObstacleType.speedGiver:
            //description.text = "HEALTH";
            value = GetComponent<SpeedGiver>().damageAmount;
            break;

            case ObstacleType.weightReducer:
            //description.text = "HEALTH";
            value = GetComponent<WeightReducer>().damageAmount;
            break;

            case ObstacleType.moneyGiver:
            //description.text = "HEALTH";
            value = GetComponent<MoneyGiver>().damageAmount;
            break;

            case ObstacleType.speedGiverFirst:
            //description.text = "HEALTH";
            value = GetComponent<SpeedGiverFirst>().speedAmount;
            break;

            case ObstacleType.weightReducerFirst:
            //description.text = "HEALTH";
            value = GetComponent<WeightReducerFirst>().weightAmount;
            break;

            case ObstacleType.moneyGiverFirst:
            //description.text = "HEALTH";
            value = GetComponent<MoneyGiverFirst>().moneyAmount;
            break;

        }

        valueText.text = value.ToString();

    }

}
