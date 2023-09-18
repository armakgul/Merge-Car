using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObsFactorySectionTwo : MonoBehaviour
{
    public enum ObstacleType
    {
        SpeedGiver,
        MoneyGiver,
        WeightReducer
        
    }

    public ObstacleType[] obstacleTypes = (ObstacleType[]) System.Enum.GetValues(typeof(ObstacleType));
    [SerializeField] private GameObject moneyGiverPrefab;
    [SerializeField] private GameObject weightReducerPrefab;
    [SerializeField] private GameObject speedGiverPrefab;

    public GameObject CreateObstacle(ObstacleType type, Vector3 position)
    {
        GameObject obstacleToSpawn;

        switch (type)
        {

            case ObstacleType.SpeedGiver:
                obstacleToSpawn = Instantiate(speedGiverPrefab, position, Quaternion.Euler(270, 0, 0));
                break;
            case ObstacleType.WeightReducer:
                obstacleToSpawn = Instantiate(weightReducerPrefab, position, Quaternion.Euler(270, 0, 0));
                break;
            case ObstacleType.MoneyGiver:
                obstacleToSpawn = Instantiate(moneyGiverPrefab, position, Quaternion.Euler(270, 0, 0));
                break;


            default:
                throw new System.ArgumentException("Invalid obstacle type");
        }

        return obstacleToSpawn;
    }
}


