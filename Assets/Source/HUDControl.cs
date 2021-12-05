using UniRx;
using UnityEngine;
using UnityEngine.UI;

public class HUDControl : MonoBehaviour
{
    [SerializeField] private GameObject _gameplayStateHolder;
    [SerializeField] private GameObject _levelEndStateHolder;
    
    // todo separate in different models and controls
    // gameplay
    [SerializeField] private Text _timer;
    [SerializeField] private Text _collectedCoinLabel;
    
    // level end
    [SerializeField] private Text _finalCollectedLabel;
    [SerializeField] private Text _bestCollectedLabel;
    [SerializeField] private Button _quitButton;
    
    private readonly CompositeDisposable _disposables = new CompositeDisposable();
    
    public void SetModel(HUDModel model)
    {
        _disposables.Clear();
        
        // gameplay
        model.CointColected.SubscribeToText(_collectedCoinLabel).AddTo(_disposables);
        model.TimeLeft.SubscribeToText(_timer).AddTo(_disposables);
        model.HUDState.Subscribe(ChangeState).AddTo(_disposables);
        
        // level end
        model.CointColected.SubscribeToText(_finalCollectedLabel).AddTo(_disposables);
        model.BestScore.SubscribeToText(_bestCollectedLabel).AddTo(_disposables);
        _quitButton.OnClickAsObservable().Subscribe(_ => model.OnQuitButtonClicked()).AddTo(_disposables);
    }

    private void ChangeState(HUDModel.ViewState newState)
    {
        _gameplayStateHolder.SetActive(newState == HUDModel.ViewState.Gameplay);
        _levelEndStateHolder.SetActive(newState == HUDModel.ViewState.LevelEnd);
    }

    private void OnDestroy()
    {
        _disposables.Dispose();
    }
}