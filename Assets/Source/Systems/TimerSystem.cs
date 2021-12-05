using System;
using Leopotam.Ecs;
using UniRx;

namespace Client
{
    public class TimerSystem : IEcsInitSystem, IEcsDestroySystem
    {
        private readonly EcsWorld _world;
        private readonly HUDModel _hudModel;
        
        private IDisposable _disposable;
        
        private readonly Config _config;
        public void Init()
        {
            var timer = _config.LevelDurationSec;
            _disposable = Observable.Interval(TimeSpan.FromSeconds(1))
                .Subscribe(_ =>
                {
                    _hudModel.UpdateTimeLeft(timer);
                    timer--;
                    if (timer <= 0)
                    {
                        _world.NewEntity().Get<LevelEndComponent>();
                        _disposable.Dispose();
                    }
                });
        }

        public void Destroy()
        {
            _disposable?.Dispose();
        }
    }
}
