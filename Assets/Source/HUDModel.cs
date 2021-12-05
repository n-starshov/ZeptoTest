using System;
using UniRx;

public class HUDModel : IDisposable
{
    public enum ViewState
    {
        Gameplay,
        LevelEnd
    }

    private ReactiveProperty<int> _cointColected = new ReactiveProperty<int>();
    private ReactiveProperty<int> _bestScore = new ReactiveProperty<int>();
    private ReactiveProperty<ViewState> _hudState = new ReactiveProperty<ViewState>();
    private ReactiveProperty<int> _timerLeft = new ReactiveProperty<int>();
    private Subject<Unit> _onQuitClickSubject = new Subject<Unit>();

    public IObservable<string> TimeLeft => _timerLeft.Select(t => $"Time: {t}");
    public IObservable<string> CointColected => _cointColected.Select(c => $"Coin Collected: {c}");
    public IObservable<string> BestScore => _bestScore.Select(c => $"Best Score: {c}");
    public IReadOnlyReactiveProperty<ViewState> HUDState => _hudState;
    public IObservable<Unit> OnQuitClickObservable => _onQuitClickSubject;

    public void UpdateTimeLeft(int value) => _timerLeft.Value = value;
    public void UpdateCoinCollected(int value) => _cointColected.Value = value;
    public void UpdateBestScore(int value) => _bestScore.Value = value;

    public void SwitchState(ViewState newState) => _hudState.Value = newState;

    public void OnQuitButtonClicked()
    {
        _onQuitClickSubject.OnNext(Unit.Default);
    }

    public void Dispose()
    {
        _cointColected?.Dispose();
        _bestScore?.Dispose();
        _hudState?.Dispose();
        _timerLeft?.Dispose();
        
        _onQuitClickSubject?.OnCompleted();
        _onQuitClickSubject?.Dispose();
    }
}