using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObsFactory : MonoBehaviour
{
    public enum ObstacleType
    {
        HealthGiver,
        ShieldGiver
    }

    [SerializeField] private GameObject healthGiverPrefab;
    [SerializeField] private GameObject shieldGiverPrefab;

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
            default:
                throw new System.ArgumentException("Invalid obstacle type");
        }

        return obstacleToSpawn;
    }
}
