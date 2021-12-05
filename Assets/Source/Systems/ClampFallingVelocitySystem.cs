using System;
using Leopotam.Ecs;

namespace Client
{
    public class ClampFallingVelocitySystem : IEcsRunSystem
    {
        private readonly Config _config;
        private readonly EcsFilter<PlayerComponent, CanSwitchDirectionComponent> _filter;
        
        public void Run()
        {
            foreach (var i in _filter)
            {
                ref var player = ref _filter.Get1(i);
                var velocity = player.Value.Rigidbody.velocity;
                velocity.y = Math.Max(_config.MaxFallingSpeed, velocity.y);
                player.Value.Rigidbody.velocity = velocity;
            }

        }
    }
}
