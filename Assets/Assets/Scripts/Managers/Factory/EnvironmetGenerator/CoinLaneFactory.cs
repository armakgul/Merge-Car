using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinLaneFactory : MonoBehaviour
{
    public GameObject[] prefabs;

    public GameObject CreateCoinLane (GameObject lane, Vector3 position, Quaternion rotation) {

        GameObject laneToSpawn = Instantiate(lane, position, rotation);

        return laneToSpawn;

    }
}
