using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu(fileName = "New car", menuName = "Car")]
public class Car : ScriptableObject
{
    public new string name;
    public string description;
    public string tag;

    public int price;

    public int speed;
    public int weight;
    public int health;
    public int shield;
    public int damage;

    public Sprite image;
    public GameObject model;

    public bool isPurchasable;
    
    public void XYZ() {}
}
