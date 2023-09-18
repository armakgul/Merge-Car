using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ObsSpawner2 : MonoBehaviour
{
    [SerializeField] private ObsFactorySectionTwo obstacleFactorySectionTwo;
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
        ObsFactorySectionTwo.ObstacleType[] obstacleTypes = (ObsFactorySectionTwo.ObstacleType[])System.Enum.GetValues(typeof(ObsFactory.ObstacleType));

        // Now you can access enum values by their index
        ObsFactorySectionTwo.ObstacleType firstType = obstacleTypes[0]; // 3rd enum
        ObsFactorySectionTwo.ObstacleType secondType = obstacleTypes[1]; // 4th enum
        ObsFactorySectionTwo.ObstacleType thirdType = obstacleTypes[2]; // 5th enum


        for (int i = 0; i < laneCount; i++)
        {

            float zPos = i * distanceBetweenObstacles + spawnOffset;

            // Spawn the 1st obstacle type
            Vector3 position = new Vector3(-laneWidth, height, zPos);
            GameObject obstacle = obstacleFactorySectionTwo.CreateObstacle(firstType, position);
            spawnedObstacles.Add(obstacle);

            // Spawn the 2nd obstacle type
            position = new Vector3(0, height, zPos);
            obstacle = obstacleFactorySectionTwo.CreateObstacle(secondType, position);
            spawnedObstacles.Add(obstacle);

            // Spawn then 3rd obstacle type
            position = new Vector3(laneWidth, height, zPos);
            obstacle = obstacleFactorySectionTwo.CreateObstacle(thirdType, position);
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
