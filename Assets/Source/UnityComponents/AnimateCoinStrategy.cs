using DG.Tweening;
using UnityEngine;

public class AnimateCoinStrategy : CoinCollectStrategy
{
    [SerializeField] private float _animationDuration;
    
    public override void Perform(CoinView coin)
    {
        var camera = Camera.main;
        Vector3 point = camera.ViewportToWorldPoint(new Vector3(0, 1, camera.nearClipPlane));

        var seq = DOTween.Sequence();
        seq.Append(coin.transform.DOMove(point, _animationDuration));
        seq.Insert(0, coin.transform.DOScale(Vector3.zero, _animationDuration));
        seq.Play();
    }
}