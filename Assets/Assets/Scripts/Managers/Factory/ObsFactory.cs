using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObsFactory : MonoBehaviour
{
    public enum ObstacleType
    {
        HealthGiver,
        ShieldGiver,
        WeightReducerFirst,
        SpeedGiverFirst,
        MoneyGiverFirst,
        SpeedGiverRoad,
        SpeedGiver,
        MoneyGiver,
        WeightReducer
        
    }

    public ObstacleType[] obstacleTypes = (ObstacleType[]) System.Enum.GetValues(typeof(ObstacleType));

    [SerializeField] private GameObject healthGiverPrefab;
    [SerializeField] private GameObject shieldGiverPrefab;
    [SerializeField] private GameObject moneyGiverPrefab;
    [SerializeField] private GameObject weightReducerPrefab;
    [SerializeField] private GameObject speedGiverPrefab;
    [SerializeField] private GameObject speedGiverRoadPrefab;   
    [SerializeField] private GameObject moneyGiverFirstPrefab;
    [SerializeField] private GameObject weightReducerFirstPrefab;
    [SerializeField] private GameObject speedGiverFirstPrefab;

    public GameObject CreateObstacle(ObstacleType type, Vector3 position)
    {
        GameObject obstacleToSpawn;

        switch (type)
        {
            case ObstacleType.HealthGiver:
                obstacleToSpawn = Instantiate(healthGiverPrefab, position, Quaternion.Euler(270, 0, 0));
                break;
            case ObstacleType.ShieldGiver:
                obstacleToSpawn = Instantiate(shieldGiverPrefab, position, Quaternion.Euler(270, 0, 0));
                break;
            case ObstacleType.SpeedGiver:
                obstacleToSpawn = Instantiate(speedGiverPrefab, position, Quaternion.Euler(270, 0, 0));
                break;
            case ObstacleType.WeightReducer:
                obstacleToSpawn = Instantiate(weightReducerPrefab, position, Quaternion.Euler(270, 0, 0));
                break;
            case ObstacleType.MoneyGiver:
                obstacleToSpawn = Instantiate(moneyGiverPrefab, position, Quaternion.Euler(270, 0, 0));
                break;
            case ObstacleType.SpeedGiverFirst:
                obstacleToSpawn = Instantiate(speedGiverFirstPrefab, position, Quaternion.Euler(270, 0, 0));
                break;
            case ObstacleType.WeightReducerFirst:
                obstacleToSpawn = Instantiate(weightReducerFirstPrefab, position, Quaternion.Euler(270, 0, 0));
                break;
            case ObstacleType.MoneyGiverFirst:
                obstacleToSpawn = Instantiate(moneyGiverFirstPrefab, position, Quaternion.Euler(270, 0, 0));
                break;
            case ObstacleType.SpeedGiverRoad:
                obstacleToSpawn = Instantiate(speedGiverRoadPrefab, position, Quaternion.Euler(270, 0, 0));
                break;

            default:
                throw new System.ArgumentException("Invalid obstacle type");
        }

        return obstacleToSpawn;
    }
}
