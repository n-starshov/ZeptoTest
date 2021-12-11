using System;
using Client;
using Leopotam.Ecs;
using UnityEngine;

public enum RewardType
{
    PlusOne,
    Add10Percent
}

public class CoinView : MonoBehaviour, IWorldInjectable, ICoinView
{
    private EcsEntity _entity;
    private EcsWorld _world;

    [SerializeField] private CoinCollectStrategy _collectStrategy;
    [SerializeField] private Collider2D _collider;
    [SerializeField] private RewardType _rewardType;

    public Vector3 Position => transform.position;
    public RewardType RewardType => _rewardType;
    
    public void Inject(EcsWorld world)
    {
        _world = world;
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        var playerView = other.GetComponent<PlayerView>();
        if (playerView == null)
            return;

        ref var component = ref _world.NewEntity().Get<PlayerCollideWithCoin>();
        component.View = this;
    }

    public void Collect()
    {
        _collider.enabled = false;
        _collectStrategy.Perform(this);
    }
}