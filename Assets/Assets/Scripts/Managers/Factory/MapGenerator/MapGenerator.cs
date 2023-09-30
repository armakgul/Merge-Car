using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UIElements;

public class MapGenerator : MonoBehaviour
{
    public GameObject player;
    public ObsSpawner sectionOneSpawner;
    public ObsSpawner2 sectionTwoSpawner;

    [Header ("Walkplane")]
    public GameObject walkPlane;

    [Header ("SectionTwoTrigger (from section 1)")]
    public GameObject sectionTwoTrigger;
    [SerializeField] float OffsetSectionTwoTrigger;

    [Header ("Ramp (from section1+2)")]
    public GameObject ramp;
    [SerializeField] float OffsetRamp;

    [Header ("Sea (from ramp)")]
    public GameObject seaGround;
    [SerializeField] float OffsetSeaGround;

    [Header ("NextCityPrefab (from sea)")]
    public GameObject nextCity;
    [SerializeField] float OffsetNextCity;

    [Header ("EndGameMultiplier (from next city)")]
    public GameObject endGameMultiplier;
    [SerializeField] float OffsetEndGameMultiplier;

    [Header ("DeadTrigger (from ramp)")]
    public GameObject deadTrigger;
    [SerializeField] float OffsetdeadTrigger;

    [Header ("")]

    float buildingCountForCalculatedLength;


    private void Start() {
        
        CalculateSectionOneLength();
        CalculateSectionTwoLength();
        PositionMapPlane();
        PositionSectionTwoTrigger();
        PositionRamp();
        PositionNextCity();
        PositionSeaGround();
        PositionEndgameMultiplier();
        PositionDeadTrigger();
        
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

    public void PositionSectionTwoTrigger () {

        sectionTwoTrigger.transform.position = new Vector3 (0, 0.8f, CalculateSectionOneLength() + OffsetSectionTwoTrigger);

    }

    public void PositionRamp() {

        ramp.transform.position = new Vector3 (0, 3.1f, CalculateSectionOneLength() + CalculateSectionTwoLength() + OffsetRamp);

    }

    public void PositionSeaGround() {
        seaGround.transform.position = new Vector3 (0,0, ramp.transform.position.z + OffsetSeaGround);
    }

    void PositionNextCity () {
        nextCity.transform.position = new Vector3 (0,-14f, seaGround.transform.position.z + OffsetNextCity);
    }

    void PositionEndgameMultiplier () {
        endGameMultiplier.transform.position = new Vector3 (0,0, nextCity.transform.position.z + OffsetEndGameMultiplier);
    }

    void PositionDeadTrigger () {
        deadTrigger.transform.position = new Vector3 ( 0,-13, ramp.transform.position.z + OffsetdeadTrigger);
    }

    
    public void PositionMapPlane () {

        Vector3 position = walkPlane.transform.position;
        float planeCount = (CalculateSectionOneLength() + CalculateSectionTwoLength() + 125)/10;
         GameObject[] planes = new GameObject[(int)planeCount+1];

        for (int i = 0; i < planeCount; i++)
        {
            planes[i] = Instantiate(walkPlane, new Vector3(0,0,player.transform.position.z + 10*i), Quaternion.identity);
        }
        Debug.Log(CalculateSectionOneLength() + CalculateSectionTwoLength());
        
    }

   

}
