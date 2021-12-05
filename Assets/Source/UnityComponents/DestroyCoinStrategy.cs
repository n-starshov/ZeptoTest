public class DestroyCoinStrategy : CoinCollectStrategy
{
    public override void Perform(CoinView coin)
    {
        Destroy(coin.gameObject);
    }
}