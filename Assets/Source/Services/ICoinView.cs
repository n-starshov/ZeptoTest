using UnityEngine;

namespace Client
{
    public interface IPoolable
    {
        void OnSpawn();
        void OnDespawn();
    }

    public interface ICoinView
    {
        Vector3 Position { get; }
        RewardType RewardType { get; }
        void Collect();
    }
}
