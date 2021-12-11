using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class Config : ScriptableObject
{
    [SerializeField] private GameObject _player;
    [SerializeField] private GameObject _wall;
    [SerializeField] private GameObject _coin;
    [SerializeField] private GameObject _goldCoin;
    [SerializeField] private float _jumpForce;
    [SerializeField] private Vector2 _initDirection = Vector2.right;
    [SerializeField] private float _playerSpeed;
    [SerializeField] private float _maxFallingSpeed;
    [SerializeField] private int _levelDurationSec;
    [SerializeField, Range(0f, 1f)] private float _chanceToSpawnGoldCoin;
    [SerializeField, Range(1, 30)] private int _respawnCoinInterval;
    
    private LevelConfig _levelConfig = new LevelConfig();

    public GameObject Player => _player;
    public GameObject Wall => _wall;
    public GameObject Coin => _coin;
    public float JumpForce => _jumpForce;
    public float PlayerSpeed => _playerSpeed;
    public float MaxFallingSpeed => _maxFallingSpeed;
    public int LevelDurationSec => _levelDurationSec;
    public int RespawnCoinInterval => _respawnCoinInterval;
    public Vector2 InitDirection => _initDirection;

    private Dictionary<MapCellType, GameObject> _cellGOMap;
    public Dictionary<MapCellType, GameObject> CellGOMap =>
        _cellGOMap ??= new Dictionary<MapCellType, GameObject>()
        {
            { MapCellType.Wall, _wall },
            { MapCellType.Actr, _player },
            { MapCellType.Coin, _coin },
            { MapCellType.GoldCoin, _goldCoin },
        };

    public float ChanceToSpawnGoldCoin => _chanceToSpawnGoldCoin;
}