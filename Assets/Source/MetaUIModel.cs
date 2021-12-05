using System;
using Client;
using UniRx;
using UnityEngine;

public class MetaUIModel : IDisposable
{
    public readonly int BestScore;
    public IObservable<Unit> OnPlayButtonClicked => _onPlayButtonClicked;

    private readonly Subject<Unit> _onPlayButtonClicked = new Subject<Unit>();

    public MetaUIModel()
    {
        BestScore = PlayerPrefs.GetInt(PlayerPrefHelper.BestScore, 0);
    }

    public void OnPlayButtonClick()
    {
        _onPlayButtonClicked.OnNext(Unit.Default);
    }


    public void Dispose()
    {
        _onPlayButtonClicked?.OnCompleted();
        _onPlayButtonClicked?.Dispose();
    }
}
