using System.Buffers;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Goblin : Monster
{
    void Start()
    {
        health = 100;
        attack = 5;
        
    }

    override public void Use()
    {
        Debug.Log("��� ����");
        memoryPool.DeactivatePoolItem(gameObject);
    }


}
