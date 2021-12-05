using System;
using UnityEngine;

// [CreateAssetMenu]
public class LevelConfig //: ScriptableObject
{
    // todo make editor
    public MapConfig[] Maps = new MapConfig[]
    {
        new MapConfig()
        {
            _column = 13,
            _rows = 6,
            _map = new [,]
            {
                { MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall,MapCellType.Wall, MapCellType.Wall },
                { MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Coin, MapCellType.Coin, MapCellType.Coin, MapCellType.Wall, MapCellType.Coin, MapCellType.Coin, MapCellType.Coin, MapCellType.Wall,MapCellType.Wall, MapCellType.Wall },
                { MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Coin, MapCellType.Wall, MapCellType.Coin, MapCellType.Coin, MapCellType.Coin, MapCellType.Wall, MapCellType.Coin, MapCellType.Wall,MapCellType.Wall, MapCellType.Wall },
                { MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Coin, MapCellType.Coin, MapCellType.Coin, MapCellType.Wall, MapCellType.Coin, MapCellType.Coin, MapCellType.Coin, MapCellType.Wall,MapCellType.Wall, MapCellType.Wall },
                { MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Actr, MapCellType.Wall, MapCellType.Coin, MapCellType.Coin, MapCellType.Coin, MapCellType.Wall, MapCellType.Coin, MapCellType.Wall,MapCellType.Wall, MapCellType.Wall },
                { MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall, MapCellType.Wall,MapCellType.Wall, MapCellType.Wall },
            }
        }
    };
}

[Serializable]
public class MapConfig
{
    public int _rows;
    public int _column;
    public MapCellType[,] _map;
}
