using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObsSpawner : MonoBehaviour
{
    [SerializeField] private ObsFactory obstacleFactory;
    public float distanceBetweenObstacles = 0f;
    public int obstacles = 0;
    public float laneWidth;
    private float spawnDistance;


    // Single obstacle spawn chances
    public float[] spawnChances = new float[]
    {
        8,  // HealthGiver
        8,  // ShieldGiver
        8,  // WeightReducerFirst
        8,  // SpeedGiverFirst
        8,  // MoneyGiverFirst
        8,  // SpeedGiverRoad
        8,  // MoneyGiverRoad
        8,  // WeightReducerRoad
        8,  // HealthGiverRoad
        8,  // ShieldGiverRoad
        20  // Wall (higher spawn chance)
    };

    // Pair spawn chances
    [SerializeField] float pairSpawnChance = 10;  // Probability of spawning a pair
    private (ObsFactory.ObstacleType, ObsFactory.ObstacleType)[] obstaclePairs = new (ObsFactory.ObstacleType, ObsFactory.ObstacleType)[]
    {
        (ObsFactory.ObstacleType.Wall, ObsFactory.ObstacleType.Wall),
        //(ObsFactory.ObstacleType.Wall, ObsFactory.ObstacleType.Wall),
        // Add more pairs here
    };

    private void Start()
    {
        SpawnObstacle();
    }

    private ObsFactory.ObstacleType GetRandomObstacleType()
    {
        float total = 0;
        foreach (float elem in spawnChances)
        {
            total += elem;
        }

        float randomPoint = Random.value * total;

        for (int i = 0; i < spawnChances.Length; i++)
        {
            if (randomPoint < spawnChances[i])
            {
                return (ObsFactory.ObstacleType)i;
            }
            else
            {
                randomPoint -= spawnChances[i];
            }
        }
        return (ObsFactory.ObstacleType)(spawnChances.Length - 1);  // Return the last type by default
    }

    private void SpawnPair(Vector3 position)
    {
        int randomIndex = Random.Range(0, obstaclePairs.Length);
        var pair = obstaclePairs[randomIndex];

        // Spawn first obstacle
        obstacleFactory.CreateObstacle(pair.Item1, position);

        // Spawn second obstacle next to the first one
        Vector3 secondPosition = new Vector3(-position.x, position.y, position.z);
        obstacleFactory.CreateObstacle(pair.Item2, secondPosition);
    }

    private void SpawnObstacle()
    {
        for (int i = 0; i < obstacles; i++)
        {
            if (Random.value * 100 < pairSpawnChance)
            {
                // Spawn a pair
                spawnDistance = Random.Range(1, 2) * distanceBetweenObstacles;
                float lanePosition = Random.value > 0.5f ? laneWidth : -laneWidth;
                Vector3 position = new Vector3(lanePosition, 2.5f, i * spawnDistance - 50);
                SpawnPair(position);
                continue;
            }

            // Spawn a single obstacle
            ObsFactory.ObstacleType type = GetRandomObstacleType();
            spawnDistance = Random.Range(1, 2) * distanceBetweenObstacles;
            float singleLanePosition = Random.value > 0.5f ? laneWidth : -laneWidth;
            Vector3 singlePosition = new Vector3(singleLanePosition, 2.5f, i * spawnDistance - 50);
            obstacleFactory.CreateObstacle(type, singlePosition);
        }
    }
}
