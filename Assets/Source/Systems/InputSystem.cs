using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    public class InputSystem : IEcsRunSystem
    {
        private readonly EcsWorld _world = null;
        private readonly EcsFilter<LevelEndComponent> _filter;
        
        public void Run()
        {
            if (Input.anyKeyDown &&  _filter.IsEmpty())
                _world.NewEntity().Get<InputComponent>();
        }
    }
}
