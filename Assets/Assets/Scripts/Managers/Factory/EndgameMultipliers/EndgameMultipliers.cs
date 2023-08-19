using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EndgameMultipliers : MonoBehaviour
{

    public GameObject multiplierPrefab;
    private GameObject[] multipliers;
    
    public int howManyLayers;
    public int distanceBetweenLayers;

    private Vector3 position = new Vector3();

    private void Start() {

        position = gameObject.transform.position;
        
        multipliers = new GameObject[howManyLayers];
        
        for (int i = 0; i < howManyLayers; i++)
    {
        multipliers[i] = Instantiate(multiplierPrefab, new Vector3(position.x , 
                                                                    position.y+30, 
                                                                    position.z + i*distanceBetweenLayers), 
                                                    Quaternion.identity, 
                                                    transform);

        SampleLayerMultiplier multiplierScript = multipliers[i].GetComponent<SampleLayerMultiplier>();
        if (multiplierScript != null)
            {
                multiplierScript.gainMultiplier = (1 + i/10f);
            }

    }
    }
    

}
