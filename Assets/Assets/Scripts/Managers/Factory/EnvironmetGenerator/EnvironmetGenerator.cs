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
    [SerializeField] private CoinLaneFactory coinLaneFactory;
    [SerializeField] private CoinFactory coinFactory;

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

    [Header ("CoinLane settings")]
    [SerializeField] float distanceBetweenCoinLanes = 25f;  // Set to desired distance on Z axis
    [SerializeField] float coinLaneZaxisStartOffset = 25f;  // Set to desired distance on Z axis
    [SerializeField] private int coinLanecount;
    [SerializeField] float coinLaneRightOffset = 15f;
    [SerializeField] float coinLaneLeftOffset = -15f;
    [SerializeField] float coinLaneHeight = 0;

    [Header ("Coin settings")]
    [SerializeField] float distanceBetweenCoins = 25f;  // Set to desired distance on Z axis
    [SerializeField] float coinsZaxisStartOffset = 25f;  // Set to desired distance on Z axis
    [SerializeField] private int coinscount;
    [SerializeField] float coinsRightOffset = 15f;
    [SerializeField] float coinsLeftOffset = -15f;
    [SerializeField] float coinsHeight = 0;

    [Header ("Lights")]
    GameObject[] lights;
    [SerializeField] new GameObject light;

    [SerializeField] bool buildingTrial = false;


    private void Start() {

        buildings = Mathf.CeilToInt((CalculateSectionTwoLength() + CalculateSectionOneLength()+125)/5);
        //walkwaycount = Mathf.CeilToInt((CalculateSectionTwoLength() + CalculateSectionOneLength()/50));

        lights = new GameObject[(int) buildings + 1 ];

        SpawnBuildingRightSide();
        SpawnBuildingLeftSide();

        SpawnWalkwaysRightSide();
        SpawnWalkwaysLeftSide();

        SpawnCoinLaneLeftSide();
        SpawnCoinLaneRightSide();

        SpawnCoinRightSide();
        SpawnCoinLeftSide();

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
        if (!buildingTrial)
        {
            for (int i = 0; i < buildings; i++)
        {

            //Right side
            GameObject type = environmentFactory.prefabs[Random.Range(0, environmentFactory.prefabs.Length)];

            Vector3 position = new Vector3(rightOffset, height, startOffsetonZaxis + distanceBetweenObstacles * i);

            Quaternion rotation = Quaternion.Euler(0,-90,0);

            environmentFactory.CreateBuilding(type, position, rotation);
        }
        } else {

            for (int i = 0; i < buildings; i++) {
            
            GameObject type = environmentFactory.trialPrefab;

            Vector3 position = new Vector3(rightOffset, height, startOffsetonZaxis + distanceBetweenObstacles * i);

            Quaternion rotation = Quaternion.Euler(0,0,0);

            environmentFactory.CreateBuilding(type, position, rotation);
            }

            
        }
        

    }

    private void SpawnBuildingLeftSide() {

            /*
        for (int i = 0; i < buildings; i++)
        {
            // left side
            GameObject type = environmentFactory.prefabs[Random.Range(0, environmentFactory.prefabs.Length)];

            Vector3 position = new Vector3(leftOffset, height, startOffsetonZaxis + distanceBetweenObstacles * i);
            
            Quaternion rotation = Quaternion.Euler(0,90,0);

            environmentFactory.CreateBuilding(type, position, rotation);
        }*/
        if (!buildingTrial)
        {
            for (int i = 0; i < buildings; i++)
        {

            //Right side
            GameObject type = environmentFactory.prefabs[Random.Range(0, environmentFactory.prefabs.Length)];

            Vector3 position = new Vector3(leftOffset, height, startOffsetonZaxis + distanceBetweenObstacles * i);

            Quaternion rotation = Quaternion.Euler(0,90,0);

            environmentFactory.CreateBuilding(type, position, rotation);
        }
        } else {

            for (int i = 0; i < buildings; i++) {
            
            GameObject type = environmentFactory.trialPrefab;

            Vector3 position = new Vector3(leftOffset, height, startOffsetonZaxis + distanceBetweenObstacles * i);

            Quaternion rotation = Quaternion.Euler(0,180,0);

            environmentFactory.CreateBuilding(type, position, rotation);
            }

            
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

    private void SpawnCoinLaneRightSide() {
        for (int i = 0; i < buildings; i++)
        {
            // left side
            GameObject type = coinLaneFactory.prefabs[Random.Range(0, coinLaneFactory.prefabs.Length)];

            Vector3 position = new Vector3(coinLaneRightOffset, coinLaneHeight, coinLaneZaxisStartOffset + distanceBetweenCoinLanes * i);
            
            Quaternion rotation = Quaternion.Euler(0,-90,0);

            coinLaneFactory.CreateCoinLane(type, position, rotation);
        }
    }

    private void SpawnCoinLaneLeftSide() {
       
        for (int i = 0; i < buildings; i++)
     {
            // left side
            GameObject type = coinLaneFactory.prefabs[Random.Range(0, coinLaneFactory.prefabs.Length)];

            Vector3 position = new Vector3(coinLaneLeftOffset, coinLaneHeight, coinLaneZaxisStartOffset + distanceBetweenCoinLanes * i);
            
            Quaternion rotation = Quaternion.Euler(0,90,0);

            coinLaneFactory.CreateCoinLane(type, position, rotation);
        }

    }

    private void SpawnCoinRightSide() {
        for (int i = 0; i < buildings; i++)
        {
            if (coinFactory.prefabs.Length !=0)
            {
                // right side
            GameObject type = coinFactory.prefabs[Random.Range(0, coinFactory.prefabs.Length)];

            Vector3 position = new Vector3(coinsRightOffset, coinsHeight, coinsZaxisStartOffset + distanceBetweenCoins * i);
            
            Quaternion rotation = Quaternion.Euler(0,-90,0);

            coinFactory.CreateCoins(type, position, rotation);
            }
            
        }
    }

    private void SpawnCoinLeftSide() {
       
        for (int i = 0; i < buildings; i++)
     {
        if (coinFactory.prefabs.Length !=0)
        {
            // left side
            GameObject type = coinFactory.prefabs[Random.Range(0, coinFactory.prefabs.Length)];

            Vector3 position = new Vector3(coinsLeftOffset, coinsHeight, coinsZaxisStartOffset + distanceBetweenCoins * i);
            
            Quaternion rotation = Quaternion.Euler(0,90,0);

            coinFactory.CreateCoins(type, position, rotation);
        }
            
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
