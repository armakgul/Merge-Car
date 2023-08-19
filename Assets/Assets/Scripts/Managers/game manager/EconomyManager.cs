using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class EconomyManager : MonoBehaviour
{

    public delegate void MoneyChangedDelegate(int newAmount);
    public event MoneyChangedDelegate OnCurrentMoneyChanged;
    public event MoneyChangedDelegate OnTotalMoneyChanged;

    private const string CURRENT_MONEY_KEY = "CurrentMoney";
    private const string TOTAL_MONEY_KEY = "TotalMoney";

    private int currentMoney = 100;
    private int totalMoney;


    
    
    #region Singleton
    public static EconomyManager Instance { get; private set; }

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

        LoadMoney();
        OnCurrentMoneyChanged?.Invoke(currentMoney);
        OnTotalMoneyChanged?.Invoke(totalMoney);
    }
    #endregion
    
    public int CurrentMoney
    {
        get { return currentMoney; }
        set
        {
            currentMoney = value;
            OnCurrentMoneyChanged?.Invoke(currentMoney);

            SaveMoney();
        }
    }

    public int TotalMoney
    {
        get { return totalMoney; }
        set
        {
            totalMoney = value;
            OnTotalMoneyChanged?.Invoke(totalMoney);

            SaveMoney();
        }
    }

    public void EarnMoney(int amount)
    {
        CurrentMoney += amount;
        TotalMoney += amount;        
    }

    public bool SpendMoney(int amount)
    {
        if (currentMoney >= amount)
        {
            CurrentMoney -= amount;
            return true; // Purchase successful
        }
        return false; // Not enough money
    }

    private void SaveMoney()
    {
        PlayerPrefs.SetInt(CURRENT_MONEY_KEY, currentMoney);
        PlayerPrefs.SetInt(TOTAL_MONEY_KEY, totalMoney);
        PlayerPrefs.Save();
    }
    private void LoadMoney()
    {
        if (PlayerPrefs.HasKey(CURRENT_MONEY_KEY))
        {
            currentMoney = PlayerPrefs.GetInt(CURRENT_MONEY_KEY);
            
        }
        else 
        currentMoney = 100;

        if (PlayerPrefs.HasKey(TOTAL_MONEY_KEY))
        {
            totalMoney = PlayerPrefs.GetInt(TOTAL_MONEY_KEY);
        }
        else totalMoney = 100;
    }


    public void Start() {
        LoadMoney();
        //PlayerPrefs.SetInt(CURRENT_MONEY_KEY, 100);
        //PlayerPrefs.SetInt(TOTAL_MONEY_KEY, 100);
        
    }   

}
