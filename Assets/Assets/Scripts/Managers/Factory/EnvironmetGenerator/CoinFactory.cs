using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinFactory : MonoBehaviour
{
    public GameObject[] prefabs;

    public GameObject CreateCoins (GameObject coin, Vector3 position, Quaternion rotation) {

        GameObject coinToSpawn = Instantiate(coin, position, rotation);

        return coinToSpawn;

    }
}
