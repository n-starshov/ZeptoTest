using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    public class InputSystem : IEcsRunSystem
    {
        private readonly EcsWorld _world = null;
        
        public void Run()
        {
            if (Input.anyKeyDown)
                _world.NewEntity().Get<InputComponent>();
        }
    }
}
