using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WalkwayFactory : MonoBehaviour
{
    public GameObject[] prefabs;

    public GameObject CreateWalkway (GameObject building, Vector3 position, Quaternion rotation) {

        GameObject buildingToSpawn = Instantiate(building, position, rotation);

        return buildingToSpawn;

    }
}