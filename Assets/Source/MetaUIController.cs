using System;
using UniRx;
using UnityEngine;
using UnityEngine.UI;

public class MetaUIController : MonoBehaviour
{
    public readonly CompositeDisposable _disposables = new CompositeDisposable();

    [SerializeField] private Text _bestScoreLabel;
    [SerializeField] private Button _playButton;
    
    public void SetModel(MetaUIModel model)
    {
        _bestScoreLabel.text = $"Your best: {model.BestScore}";
        _playButton.OnClickAsObservable().Subscribe(_ => model.OnPlayButtonClick()).AddTo(_disposables);
    }

    private void OnDestroy()
    {
        _disposables.Dispose();
    }
}