using DG.Tweening;
using UnityEngine;

public class DisappearedCoin : CoinCollectStrategy
{
    [SerializeField] private SpriteRenderer _image;
    [SerializeField] private float _animationDuration;
    [SerializeField] private float _finishScale;
    
    public override void Perform(CoinView coin)
    {
        var seq = DOTween.Sequence();
        seq.Append(_image.DOFade(0, _animationDuration));
        seq.Insert(0, coin.transform.DOScale(_finishScale, _animationDuration));
        seq.Play();
    }
}
