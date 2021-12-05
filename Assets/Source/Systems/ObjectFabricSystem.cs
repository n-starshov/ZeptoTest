using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    public class ObjectFabricSystem : IEcsRunSystem
    {
        private readonly Config _config;
        private readonly EcsWorld _world;
        private readonly SceneObjects _sceneObjects;
        
        private readonly EcsFilter<SpawnObjectComponent> _filter;
        
        public void Run()
        {
            foreach (var i in _filter)
            {
                var spawnRequest = _filter.Get1(i);
                
                var item = spawnRequest.CellType;
                var position = spawnRequest.Position;
                if (!_config.CellGOMap.TryGetValue(item, out var prefab))
                    continue;

                var go = GameObject.Instantiate(prefab);
                go.transform.position = position;
                go.GetComponent<IWorldInjectable>()?.Inject(_world);
            }
        }
    }
}
