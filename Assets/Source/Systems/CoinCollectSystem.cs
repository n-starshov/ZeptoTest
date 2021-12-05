using System;
using Leopotam.Ecs;
using UniRx;

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
                
                _levelProgress.CoinCollected++;
                _hudModel.UpdateCoinCollected(_levelProgress.CoinCollected);

                var position = _filter.Get1(i).View.Position;
                Observable.Timer(TimeSpan.FromSeconds(UnityEngine.Random.Range(1, _config.RespawnCoinInterval)))
                    .Subscribe(_ =>
                    {
                        ref var spawnRequest = ref _world.NewEntity().Get<SpawnObjectComponent>();
                        spawnRequest.CellType = MapCellType.Coin;
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
