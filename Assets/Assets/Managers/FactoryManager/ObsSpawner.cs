using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObsSpawner : MonoBehaviour
{
    [SerializeField] private ObsFactory obstacleFactory;
    [SerializeField] float distanceBetweenObstacles = 10f;  // Set to desired distance
    [SerializeField] private int numberOfObstacles = 10;
    public float laneWidth;
    private float lastZPos = 0;

    private float spawnDistance;

    private void Start()
    {

        for (int i = 0; i < numberOfObstacles; i++)
        {
            SpawnObstacle();
        }
        
    }
    

    private void SpawnObstacle()
    {
        for (int i = 0; i < numberOfObstacles; i++)
        {

            bool spawnSideBySide = Random.value > 0.5f;
            ObsFactory.ObstacleType type = (ObsFactory.ObstacleType)Random.Range(0, 2);
            // Randomly set spawn distance to either 10, 20 or 30
            spawnDistance = Random.Range(1,4)*distanceBetweenObstacles;


            // Randomly select a lane (-2.5 or 2.5)
            float lanePosition = Random.value > 0.5f ? laneWidth : -laneWidth;


            
            // Determine the position of the obstacle
            Vector3 position = new Vector3(lanePosition, 2.5f, i * spawnDistance - 50);  // Adjust to set obstacle positions as needed
            // Create the obstacle
            obstacleFactory.CreateObstacle(type, position);

             

            if (Random.value < 0.7f)  // 30% chance to spawn an extra obstacle
            {
                // Switch the lane position
                lanePosition = lanePosition == 2.5f ? -2.5f : 2.5f;

                // Use the same z position
                position = new Vector3(lanePosition, 2.5f, i * spawnDistance - 50);
                

                
            }
        }
    }
}
