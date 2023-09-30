using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnvironmetGenerator : MonoBehaviour
{
    public ObsSpawner sectionOneSpawner;
    public ObsSpawner2 sectionTwoSpawner;
    
    [Header ("FACTORIES")]
    [SerializeField] private EnvironmentFactory environmentFactory;
    [SerializeField] private WalkwayFactory walkwayFactory;

    [Header ("Building settings")]
    [SerializeField] float distanceBetweenObstacles = 25f;  // Set to desired distance on Z axis
    [SerializeField] float startOffsetonZaxis = 25f;  // Set to desired distance on Z axis
    [SerializeField] private int buildings;
    [SerializeField] float rightOffset = 15f;
    [SerializeField] float leftOffset = -15f;
    [SerializeField] float height = 0;

    [Header ("Walkway settings")]
    [SerializeField] float distanceBetweenWalkways = 25f;  // Set to desired distance on Z axis
    [SerializeField] float walkwayZaxisStartOffset = 25f;  // Set to desired distance on Z axis
    [SerializeField] private int walkwaycount;
    [SerializeField] float walkwayRightOffset = 15f;
    [SerializeField] float walkwayLeftOffset = -15f;
    [SerializeField] float heightWalkway = 0;

    [Header ("Lights")]
    GameObject[] lights;
    [SerializeField] new GameObject light;


    private void Start() {

        buildings = Mathf.CeilToInt((CalculateSectionTwoLength() + CalculateSectionOneLength()+125)/5);
        walkwaycount = Mathf.CeilToInt((CalculateSectionTwoLength() + CalculateSectionOneLength()/50));

        lights = new GameObject[(int) buildings + 1 ];

        SpawnBuildingRightSide();
        SpawnBuildingLeftSide();
        SpawnWalkwaysRightSide();
        SpawnWalkwaysLeftSide();
        //SpawnLights();
    }

    public float CalculateSectionOneLength () {

        float sectionOneObsCount = sectionOneSpawner.obstacles;
        float sectionOneObsDistance = sectionOneSpawner.distanceBetweenObstacles;

        float sectionOneLength = sectionOneObsCount * sectionOneObsDistance;
        return sectionOneLength;

    }

    public float CalculateSectionTwoLength () {
        float sectionTwoObsCount = sectionTwoSpawner.laneCount;
        float sectionTwoObsDistance = sectionTwoSpawner.distanceBetweenObstacles;

        float sectionTwoLength = sectionTwoObsCount * sectionTwoObsDistance;
        return sectionTwoLength;
    }


     private void SpawnBuildingRightSide()
    {
        for (int i = 0; i < buildings; i++)
        {

            //Right side
            GameObject type = environmentFactory.prefabs[Random.Range(0, environmentFactory.prefabs.Length)];

            Vector3 position = new Vector3(rightOffset, height, startOffsetonZaxis + distanceBetweenObstacles * i);

            Quaternion rotation = Quaternion.Euler(0,-90,0);

            environmentFactory.CreateBuilding(type, position, rotation);
        }

    }

    private void SpawnBuildingLeftSide() {

            
        for (int i = 0; i < buildings; i++)
        {
            // left side
            GameObject type = environmentFactory.prefabs[Random.Range(0, environmentFactory.prefabs.Length)];

            Vector3 position = new Vector3(leftOffset, height, startOffsetonZaxis + distanceBetweenObstacles * i);
            
            Quaternion rotation = Quaternion.Euler(0,90,0);

            environmentFactory.CreateBuilding(type, position, rotation);
        }
    }

    private void SpawnWalkwaysRightSide() {
        for (int i = 0; i < buildings; i++)
        {
            // left side
            GameObject type = walkwayFactory.prefabs[Random.Range(0, walkwayFactory.prefabs.Length)];

            Vector3 position = new Vector3(walkwayLeftOffset, heightWalkway, walkwayZaxisStartOffset + distanceBetweenWalkways * i);
            
            Quaternion rotation = Quaternion.Euler(0,-90,0);

            walkwayFactory.CreateWalkway(type, position, rotation);
        }
    }

    private void SpawnWalkwaysLeftSide() {
       
        for (int i = 0; i < buildings; i++)
     {
            // left side
            GameObject type = walkwayFactory.prefabs[Random.Range(0, walkwayFactory.prefabs.Length)];

            Vector3 position = new Vector3(walkwayRightOffset, heightWalkway, walkwayZaxisStartOffset + distanceBetweenWalkways * i);
            
            Quaternion rotation = Quaternion.Euler(0,90,0);

            walkwayFactory.CreateWalkway(type, position, rotation);
        }

    }

    private void SpawnLights() {
        for (int i = 0; i < buildings/5; i++)
        {
            lights[i] = Instantiate(light, new Vector3(walkwayLeftOffset , heightWalkway +5 , (-50 +distanceBetweenWalkways)*i*5),  Quaternion.identity);
        }

        for (int i = 0; i < buildings; i++)
        {
            lights[i] = Instantiate(light, new Vector3(walkwayRightOffset , heightWalkway +5 , (-50 +distanceBetweenWalkways)*i*5),  Quaternion.identity);
        }
    }


}
