using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SessionEconomy : MonoBehaviour
{
    private float sessionMultiplier = 1;  // Default multiplier
    private int sessionMoney;

    public int rewardForEverySession;

    #region Singleton
    public static SessionEconomy Instance { get; private set; }

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
        ResetSessionMoney();
    }

    public int SessionMoney 
    {
        get { return sessionMoney; }
        set
        {
            sessionMoney = value;
            // Update UI or any other logic needed to reflect session money
        }
    }

    // Called to reset session money, e.g., at the beginning of a session
    public void ResetSessionMoney()
    {
        SessionMoney = 0;
    }

    // Called when money is earned in a session
    public void EarnSessionMoney(int amount)
    {
        SessionMoney += amount;

    }

    // Called at the end of the session to transfer the session money to the player's total,
    // considering the multiplier
    public void EndSession()
    {
        int transferAmount = Mathf.CeilToInt(SessionMoney * sessionMultiplier);
        EconomyManager.Instance.EarnMoney(transferAmount);
        EconomyManager.Instance.EarnMoney(rewardForEverySession);
        ResetSessionMoney();  // Reset session money for the next session
    }

    // Sets the session multiplier, for instance, after watching an ad
    public void SetMultiplier(float multiplier)
    {
        sessionMultiplier = multiplier;
        Debug.Log(sessionMultiplier);
    }
}
