using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallStart : MonoBehaviour
{
    public GameObject zombie;
    public int count;
    public bool zombieOn = true;
    void Start()
    {

        if (zombieOn)
        {
            for (int i = 0; i < count; i++)
        {
            Instantiate(zombie, gameObject.transform.position + new Vector3(i,-2f,0), Quaternion.identity);
        }
        }else return;
        
    }

    
}