using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    public class LevelEndSystem : IEcsRunSystem
    {
        private readonly HUDModel _hudModel;
        private LevelProgress _levelProgress;
        private EcsFilter<LevelEndComponent> _filter;
            
        public void Run()
        {
            foreach (var i in _filter)
            {
                UpdateBestRating();
                _hudModel.SwitchState(HUDModel.ViewState.LevelEnd);
            }
        }

        private void UpdateBestRating()
        {
            var lastBest =
                PlayerPrefs.GetInt(PlayerPrefHelper.BestScore, 0);
            if (_levelProgress.CoinCollected > lastBest)
            {
                lastBest = _levelProgress.CoinCollected;
                PlayerPrefs.SetInt(PlayerPrefHelper.BestScore, lastBest);
                PlayerPrefs.Save();
            }
            _hudModel.UpdateBestScore(lastBest);
        }
    }
}
