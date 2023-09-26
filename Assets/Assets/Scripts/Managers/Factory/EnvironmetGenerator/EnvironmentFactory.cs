using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnvironmentFactory : MonoBehaviour
{
    public GameObject[] prefabs;
    public GameObject plane;

    public GameObject CreateBuilding (GameObject building, Vector3 position, Quaternion rotation) {

        GameObject buildingToSpawn = Instantiate(building, position, rotation);

        return buildingToSpawn;

    }

    public GameObject CreateWalkPlane (GameObject plane, Vector3 position, Quaternion rotation) {

        GameObject walkPlane = Instantiate(plane, position, rotation);
        
        return walkPlane;

    }
}
