using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{

    public ObsSpawner2 obsSpawner2;
    public C_Movement movement;

    public GameObject ramp;

    #region Singleton
    public static LevelManager Instance { get; private set; }

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }
    #endregion

    private void Start() {
        ramp.SetActive(false);
    }

    public void SetAllActiveFalse () {
        obsSpawner2.DeactivateObstacles();
    }

    public void SetRBtoDynamic() {

        movement.rb.isKinematic = false;
        movement.rb.useGravity = true;
    }

    public void SetRampActive()
    {
        ramp.SetActive(true);
    }

    public void SectionChanges () {
        movement.section1or2 = false;
        movement.section3 = true;
    }
    
    public void Level3Starts() {
        SetRampActive();
        SectionChanges();
        SetRBtoDynamic();
        SetAllActiveFalse();
    }

    
}
