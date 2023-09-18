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
        MoneyGiverRoad,
        WeightReducerRoad,
        HealthGiverRoad,
        ShieldGiverRoad,

        Wall
        
    }

    public ObstacleType[] obstacleTypes = (ObstacleType[]) System.Enum.GetValues(typeof(ObstacleType));

    [SerializeField] private GameObject healthGiverPrefab;
    [SerializeField] private GameObject shieldGiverPrefab;
    [SerializeField] private GameObject speedGiverRoadPrefab;
    [SerializeField] private GameObject moneyGiverRoadPrefab;
    [SerializeField] private GameObject weightReducerRoadPrefab;
    [SerializeField] private GameObject healthGiverRoadPrefab;
    [SerializeField] private GameObject shieldGiverRoadPrefab;   
    [SerializeField] private GameObject moneyGiverFirstPrefab;
    [SerializeField] private GameObject weightReducerFirstPrefab;
    [SerializeField] private GameObject speedGiverFirstPrefab;

    [SerializeField] private GameObject wallPrefab;

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
            case ObstacleType.MoneyGiverRoad:
                obstacleToSpawn = Instantiate(moneyGiverRoadPrefab, position, Quaternion.Euler(270, 0, 0));
                break;
            case ObstacleType.WeightReducerRoad:
                obstacleToSpawn = Instantiate(weightReducerRoadPrefab, position, Quaternion.Euler(270, 0, 0));
                break;
            case ObstacleType.HealthGiverRoad:
                obstacleToSpawn = Instantiate(healthGiverRoadPrefab, position, Quaternion.Euler(270, 0, 0));
                break;
            case ObstacleType.ShieldGiverRoad:
                obstacleToSpawn = Instantiate(shieldGiverRoadPrefab, position, Quaternion.Euler(270, 0, 0));
                break;
            case ObstacleType.Wall:
                obstacleToSpawn = Instantiate(wallPrefab, position, Quaternion.Euler(270, 0, 0));
                break;

            default:
                throw new System.ArgumentException("Invalid obstacle type");
        }

        return obstacleToSpawn;
    }
}
