using System.Linq;
using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    public class CameraSystem : IEcsInitSystem, IEcsRunSystem
    {
        private const float gridCellSize = 1;
        private readonly LevelConfig _levelConfig;
        
        private Camera _camera;
        private MapConfig _map;

        public void Init()
        {
            _camera = Camera.main;
            _map = _levelConfig.Maps.First();
            _camera.transform.position = new Vector3(_map._column / 2f - .5f, _map._rows / 2f + .5f, _camera.transform.position.z);
            _camera.orthographicSize = _map._rows / 2f;
        }

        public void Run()
        {
        }
    }
}
