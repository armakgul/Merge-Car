using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ObsSpawner2 : MonoBehaviour
{
    [SerializeField] private ObsFactory obstacleFactory;
    [SerializeField] float distanceBetweenObstacles = 10f;  // Set to desired distance
    [SerializeField] private int laneCount = 10;

    public float laneWidth;
    private float spawnDistance;

    public float height = 1.5f;

    public float spawnOffset;   

    public LevelManager levelManager;


    public List<GameObject> spawnedObstacles = new List<GameObject>();


    public void OnEnable() {
        levelManager.OnSectionTwoStarted += SpawnObstacleSets;
        levelManager.OnSectionThreeStarted += DeactivateObstacles;
    }

    public void OnDisable() {
        levelManager.OnSectionTwoStarted -= SpawnObstacleSets;
        levelManager.OnSectionThreeStarted -= DeactivateObstacles;
    }
    

    public void SpawnObstacleSets()
    {
        ObsFactory.ObstacleType[] obstacleTypes = (ObsFactory.ObstacleType[])System.Enum.GetValues(typeof(ObsFactory.ObstacleType));

        // Now you can access enum values by their index
        ObsFactory.ObstacleType thirdType = obstacleTypes[5]; // 3rd enum
        ObsFactory.ObstacleType fourthType = obstacleTypes[6]; // 4th enum
        ObsFactory.ObstacleType fifthType = obstacleTypes[7]; // 5th enum


        for (int i = 0; i < laneCount; i++)
        {

            float zPos = i * distanceBetweenObstacles + spawnOffset;

            // Spawn the 3rd obstacle type
            Vector3 position = new Vector3(-laneWidth, height, zPos);
            GameObject obstacle = obstacleFactory.CreateObstacle(thirdType, position);
            spawnedObstacles.Add(obstacle);

            // Spawn the 4th obstacle type
            position = new Vector3(0, height, zPos);
            obstacle = obstacleFactory.CreateObstacle(fourthType, position);
            spawnedObstacles.Add(obstacle);

            // Spawn the 5th obstacle type
            position = new Vector3(laneWidth, height, zPos);
            obstacle = obstacleFactory.CreateObstacle(fifthType, position);
            spawnedObstacles.Add(obstacle);

        }

        
    }

    public void DeactivateObstacles()
        {
        foreach (var obstacle in spawnedObstacles)
        {
            obstacle.SetActive(false);
        }
        }

}
