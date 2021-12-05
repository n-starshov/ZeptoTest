using System.Linq;
using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class MapBuilderSystem : IEcsInitSystem
    {
        private readonly EcsWorld _world;
        private readonly SceneObjects _sceneObjects;
        private readonly Config _config;
        private readonly LevelConfig _levelConfig;

        public void Init()
        {
            var firstLevel = _levelConfig.Maps.FirstOrDefault();
            Debug.Assert(firstLevel != null, "Have no levels in config");
            SpawnAllObjects(firstLevel);
        }

        private void SpawnAllObjects(MapConfig level)
        {
            var map = level._map;
            for (var row = level._rows - 1; row >= 0; row--)
            {
                for (var column = level._column - 1; column >= 0; column--)
                {
                    ref var spawnRequest = ref _world.NewEntity().Get<SpawnObjectComponent>();
                    spawnRequest.CellType = map[row, column];
                    spawnRequest.Position = new Vector2(column, level._rows - row);
                }
            }
        }
    }
}