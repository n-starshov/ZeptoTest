using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    public class PlayerMovementSystem : IEcsRunSystem
    {
        private readonly Config _config;
        private readonly EcsFilter<PlayerComponent, PlayerMovementComponent> _filter; 
        
        public void Run()
        {
            foreach (var i in _filter)
            {
                ref var player = ref _filter.Get1(i);
                ref var movement = ref _filter.Get2(i);

                var velocity = player.Value.Rigidbody.velocity;
                velocity.x = movement.Direction.x * _config.PlayerSpeed;
                player.Value.Rigidbody.velocity = velocity;
            }
        }
    }
}
