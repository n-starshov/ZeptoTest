using System;
using Client;
using Leopotam.Ecs;
using UnityEngine;

public class CoinView : MonoBehaviour, IWorldInjectable, ICoinView
{
    private EcsEntity _entity;
    private EcsWorld _world;

    [SerializeField] private CoinCollectStrategy _collectStrategy;

    public Vector3 Position => transform.position;
    
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
        _collectStrategy.Perform(this);
    }
}