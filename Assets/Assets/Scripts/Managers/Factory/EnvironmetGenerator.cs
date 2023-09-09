using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnvironmetGenerator : MonoBehaviour
{
    
    [SerializeField] private EnvironmentFactory environmentFactory;
    [SerializeField] float distanceBetweenObstacles = 25f;  // Set to desired distance on Z axis
    [SerializeField] float startOffsetonZaxis = 25f;  // Set to desired distance on Z axis
    [SerializeField] private int buildings = 20;
     
    [SerializeField] float rightOffset = 15f;
    [SerializeField] float leftOffset = -15f;

    [SerializeField] float height = 0;

    private void Start() {
        SpawnBuilding();
    }


     private void SpawnBuilding()
    {
        for (int i = 0; i < buildings; i++)
        {

            //Right side
            GameObject type = environmentFactory.prefabs[Random.Range(0, environmentFactory.prefabs.Length)];

            Vector3 position = new Vector3(rightOffset, height, startOffsetonZaxis + distanceBetweenObstacles * i);

            Quaternion rotation = Quaternion.Euler(0,-90,0);

            environmentFactory.CreateBuilding(type, position, rotation);
        }

        for (int i = 0; i < buildings; i++)
        {
            // left side
            GameObject type = environmentFactory.prefabs[Random.Range(0, environmentFactory.prefabs.Length)];

            Vector3 position = new Vector3(leftOffset, height, startOffsetonZaxis + distanceBetweenObstacles * i);
            
            Quaternion rotation = Quaternion.Euler(0,90,0);

            environmentFactory.CreateBuilding(type, position, rotation);
        }
    }


}
