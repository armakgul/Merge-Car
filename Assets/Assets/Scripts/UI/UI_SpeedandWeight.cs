using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class UI_SpeedandWeight : MonoBehaviour
{
    public TMP_Text speedText;
    public TMP_Text weightText;
    public TMP_Text moneyText;
    public TMP_Text sessionMoneytext;
    public TMP_Text fpsCounter;

    private GameObject player;

    int lastFrameIndex;
    float[] frameDeltaTimeArray;

    private void Awake() {
        frameDeltaTimeArray = new float[50];
    }


    private void Start() {

        if(Application.isMobilePlatform)
        QualitySettings.vSyncCount = 0;

        
        player = GameObject.FindGameObjectWithTag("Player");

        speedText = transform.Find("SpeedandWeight/Speedvalue").GetComponent<TMP_Text>();
        weightText = transform.Find("SpeedandWeight/Weightvalue").GetComponent<TMP_Text>();
        moneyText = transform.Find("SpeedandWeight/Moneyvalue").GetComponent<TMP_Text>();
        sessionMoneytext = transform.Find("SpeedandWeight/SessionMoneyValue").GetComponent<TMP_Text>();


        EconomyManager.Instance.OnCurrentMoneyChanged += UpdateCurrentMoneyUI;
        UpdateCurrentMoneyUI(EconomyManager.Instance.CurrentMoney);

        //SetValues();
    }

    private void OnDestroy()
    {
        if (EconomyManager.Instance != null)
        {
            EconomyManager.Instance.OnCurrentMoneyChanged -= UpdateCurrentMoneyUI;
        }
    }

    private void Update() {
        frameDeltaTimeArray[lastFrameIndex] = Time.deltaTime;
        lastFrameIndex = (lastFrameIndex + 1) % frameDeltaTimeArray.Length;
        
        //fps = 1f/Time.deltaTime;

        fpsCounter.text = Mathf.RoundToInt(CalculateFPS()).ToString();

        //Application.targetFrameRate = 60;
    }

    float CalculateFPS() {
        float total = 0f;
        foreach (float deltaTime in frameDeltaTimeArray)
        {
            total += deltaTime;
        }
        return frameDeltaTimeArray.Length / total;
    }
    private void LateUpdate() {
        SetValues();
    }

    public void SetValues() {
        
        speedText.text = player.GetComponent<C_Movement>().GetSpeed.ToString();
        weightText.text = player.GetComponent<C_Movement>().GetWeight.ToString();
        sessionMoneytext.text = SessionEconomy.Instance.SessionMoney.ToString();       
        
       
    }

    private void UpdateCurrentMoneyUI(int newAmount)
    {
        moneyText.text = newAmount.ToString();
    }
}
