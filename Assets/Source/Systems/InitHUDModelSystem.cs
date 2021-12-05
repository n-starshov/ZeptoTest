using System;
using Leopotam.Ecs;
using UniRx;
using UnityEngine.SceneManagement;

namespace Client
{
    public class InitHUDModelSystem : IEcsInitSystem, IEcsDestroySystem
    {
        private readonly HUDModel _hudModel;
        private readonly SceneObjects _sceneObjects;
        private readonly Config _config;
        
        private IDisposable _disposable;
        
        
        public void Init()
        {
            _hudModel.UpdateTimeLeft(_config.LevelDurationSec);
            _hudModel.UpdateCoinCollected(0);
            _hudModel.SwitchState(HUDModel.ViewState.Gameplay);
            _sceneObjects.HUD.SetModel(_hudModel);
            _disposable = _hudModel.OnQuitClickObservable.Subscribe(unit => SceneManager.LoadScene(0));
        }

        public void Destroy()
        {
            _disposable?.Dispose();
        }
    }
}
