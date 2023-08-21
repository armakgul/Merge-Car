using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Road_Canvas : MonoBehaviour
{

    [Header("CANVAS")]
    [SerializeField] public TMP_Text valueText, description;
    [SerializeField] public Sprite sprite;

    enum ObstacleType {healthGiverRoad, shieldGiverRoad, weightReducerRoad, moneyGiverRoad, speedGiverRoad};

    [Header("OBS TYPE")]
    
    [SerializeField] ObstacleType obstacleType;


    private float value;

    private void Start() {
        
        valueText = transform.Find("Canvas/ValueText").GetComponent<TMP_Text>();
        
        description = transform.Find("Canvas/Description").GetComponent<TMP_Text>();   

        SwitchBetweenObs();
       
    }

    private void Update() {
        SwitchBetweenObs();
    }

    public void SwitchBetweenObs () {

        switch (obstacleType)
        {
            case ObstacleType.shieldGiverRoad:
            description.text = "SHIELD";
            value = GetComponent<ShieldGiverRoad>().shieldAmount;
            break;

            case ObstacleType.healthGiverRoad:
            description.text = "HEALTH";
            value = GetComponent<HealthGiverRoad>().cureAmount;
            break;

            case ObstacleType.speedGiverRoad:
            //description.text = "HEALTH";
            value = GetComponent<SpeedGiverRoad>().speedAmount;
            break;

            case ObstacleType.weightReducerRoad:
            //description.text = "HEALTH";
            value = GetComponent<WeightReducerRoad>().weightAmount;
            break;

            case ObstacleType.moneyGiverRoad:
            //description.text = "HEALTH";
            value = GetComponent<MoneyGiverRoad>().moneyAmount;
            break;


        }

        valueText.text = value.ToString("F1");

    }

}

   

