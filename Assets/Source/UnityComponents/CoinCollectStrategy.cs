using UnityEngine;

public abstract class CoinCollectStrategy : MonoBehaviour
{
    public abstract void Perform(CoinView coin);
}