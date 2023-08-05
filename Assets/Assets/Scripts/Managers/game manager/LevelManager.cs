using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{

    //this section will collect section triggers
    //also collects effected scripts
    //char velo -- camera events -- rb -- gravity -- 

    //private GameModes mode = GameModes.start;


    public SectionTwoTrigger sectionTwoTrigger;
    public ObsSpawner2 obsSpawner2;
    public C_Movement characterMovementScript;
    public C_Health characterHealthScript;
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



    private void OnEnable() {
        sectionTwoTrigger.onSectionTwoStarted += obsSpawner2.SpawnObstacleSets;
        characterHealthScript.onHealthIsZero += Level3Starts;
    }


    private void OnDisable() {
        sectionTwoTrigger.onSectionTwoStarted -= obsSpawner2.SpawnObstacleSets;
        characterHealthScript.onHealthIsZero -= Level3Starts;
    }


    private void Start() {
        ramp.SetActive(false);
    }

    public void SetAllActiveFalse () {
        obsSpawner2.DeactivateObstacles();
    }

    public void SetRBtoDynamic() {

        characterMovementScript.rb.isKinematic = false;
        characterMovementScript.rb.useGravity = true;
    }

    public void SetRampActive()
    {
        ramp.SetActive(true);
    }

    public void SectionChanges () {
        characterMovementScript.section1or2 = false;
        characterMovementScript.section3 = true;
    }
    
    public void Level3Starts() {
        SetRampActive();
        SectionChanges();
        SetRBtoDynamic();
        SetAllActiveFalse();
    }






    /*
    public enum GameModes {
        start, // upgrades active. Trigger with Tap
        sectionOne, // only section 1. Triggered with Tap
        sectionTwo, // triggerred with section two trigger
        sectionThree, // triggered with C_health health value
        rewardGainUI // triggered with next button

    }

    public class StartState : IGameMode 
    {
        public IGameMode DoState(LevelManager mode) 
        {

        }


        public void StartActions() 
        {
        //Upgradeler aktif
        //Player doğuk
        // Player hızı 0 - boolean
        //İlk seciton doğmuş olcak
        //upgradeler karakteri ve ekonomiyi etkileyecek
        // para akışı aktif

        }

    }

    public class SectionOneState : IGameMode 
    {
        public IGameMode DoState(LevelManager mode) 
        {
            
        }
    
        public void SectionOneStarts() {
        //Upgradeleri kaldır
        //sabit hızda player hareketi
        //para akışı aktif - delegate
        //5 player özelliği aktif ve değişiyor - delegate

    }
    }

    public class SectionTwoState : IGameMode 
    {
        public IGameMode DoState(LevelManager mode) 
        {
            
        }
    
       private void SectionTwoStarts() {
        //hız artıyor
        //obs2 doğacak
        }
    }

    public class SectionThreeState : IGameMode 
    {
        public IGameMode DoState(LevelManager mode) 
        {
            
        }
    
       void SectionThreeStarts () {
        //rb aktif
        //gravity aktif
        // kamera değşiyor
        // hız hesaplanıp değşiyor
        // mouse kontrolü kapalı
    }
    }

    public class FreeFallState : IGameMode 
    {
        public IGameMode DoState(LevelManager mode) 
        {
            
        }
    
       void FreeJumpStateStarts () {
        // three den kalanlar aynı
        //cinematic
        }
    }
    

    public class RewardState : IGameMode 
    {
        public IGameMode DoState(LevelManager mode) 
        {
            
        }
    
       void RewardGainUIStarts () 
       {
        //oyuncu hızı 0
        // kamera dönüyor
        // önde kazanç UI - bak
        //rewarded reklam ve rulet
        }
    }
    

    public interface IGameMode
    {
        IGameMode DoState(LevelManager mode);
    }

    */
}
