using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnvironmentFactory : MonoBehaviour
{
    public GameObject[] prefabs;

    public GameObject CreateBuilding (GameObject building, Vector3 position, Quaternion rotation) {

        GameObject buildingToSpawn = Instantiate(building, position, rotation);

        return buildingToSpawn;

    }
}
