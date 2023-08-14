using System.Collections;
using System.Collections.Generic;
using System.Net;
using UnityEngine;

[CreateAssetMenu (fileName = "Obstacle", menuName = "Obstacle")]
public class Obstacle : ScriptableObject
{
    public new string name;

    [SerializeField]
    enum obstacleType {
        HealthGiver,
        SpeedGiver,
        WeightReducer,
        ShieldGiver,
        MoneyGiver
    }


    
    
    
    
}
