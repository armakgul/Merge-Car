using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class EconomyManager : MonoBehaviour
{

    private int money = 100;

    public delegate void OnMoneyChanged(int money);
    public static event OnMoneyChanged onMoneyChanged;
    

    // float moneyIncrement = 0;
    
    /*
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
    }
    #endregion
    */

    public void Start() {
        money = PlayerPrefs.GetInt("Money", 100);
       
        onMoneyChanged?.Invoke(money);
    }

    public float GetMoney() {
        return money;
    }
    

    public void SetMoney (int amount) {
        money += amount;
  
        PlayerPrefs.SetInt("Money", money);
        PlayerPrefs.Save();

        onMoneyChanged?.Invoke(money);
    }


}
