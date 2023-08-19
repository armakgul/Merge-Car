using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class UI_RewardScreen : MonoBehaviour
{

    public TMP_Text moneyText;

    private void Start() {
        DisableUI();
        LevelManager.Instance.OnFreefallDead += ActivateUI;

        moneyText = transform.Find("MoneyText").GetComponent<TMP_Text>();
    }

    public void ActivateUI () {
        this.transform.gameObject.SetActive(true);
        moneyText.text = SessionEconomy.Instance.SessionMoney.ToString();
    }

    public void DisableUI () {
        this.transform.gameObject.SetActive(false);
    }

    public void RestartGame() {
        SessionEconomy.Instance.EndSession();
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
