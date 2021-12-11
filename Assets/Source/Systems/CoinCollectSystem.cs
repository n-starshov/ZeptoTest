using System;
using Leopotam.Ecs;
using UniRx;
using UnityEngine;

namespace Client
{
    public class CoinCollectSystem : IEcsRunSystem, IEcsDestroySystem
    {
        private readonly CompositeDisposable _disposables = new CompositeDisposable();
        private readonly EcsWorld _world;
        private readonly HUDModel _hudModel;
        private readonly LevelProgress _levelProgress;
        private readonly EcsFilter<PlayerCollideWithCoin> _filter;
        private readonly Config _config;
        
        public void Run()
        {
            foreach (var i in _filter)
            {
                _filter.Get1(i).View.Collect();
                
                switch (_filter.Get1(i).View.RewardType)
                {
                    case RewardType.PlusOne:
                        _levelProgress.CoinCollected++;
                        break;
                    case RewardType.Add10Percent:
                        _levelProgress.CoinCollected = Mathf.CeilToInt(_levelProgress.CoinCollected * 1.1f);
                        break;
                    default:
                        throw new NotImplementedException();
                }
                _hudModel.UpdateCoinCollected(_levelProgress.CoinCollected);

                var position = _filter.Get1(i).View.Position;
                Observable.Timer(TimeSpan.FromSeconds(UnityEngine.Random.Range(1, _config.RespawnCoinInterval)))
                    .Subscribe(_ =>
                    {
                        ref var spawnRequest = ref _world.NewEntity().Get<SpawnObjectComponent>();
                        spawnRequest.CellType = UnityEngine.Random.value > _config.ChanceToSpawnGoldCoin 
                            ? MapCellType.GoldCoin 
                            : MapCellType.Coin;
                        spawnRequest.Position = position;
                    }).AddTo(_disposables);
                
                _filter.GetEntity(i).Del<PlayerCollideWithCoin>();
            }
        }

        public void Destroy()
        {
            _disposables?.Dispose();
        }
    }
}
