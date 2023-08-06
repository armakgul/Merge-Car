using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class UI_RewardScreen : MonoBehaviour
{

    private void Start() {
        DisableUI();
        LevelManager.Instance.OnFreefallDead += ActivateUI;
    }

    public void ActivateUI () {
        this.transform.gameObject.SetActive(true);
    }

    public void DisableUI () {
        this.transform.gameObject.SetActive(false);
    }

    public void RestartGame() {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
