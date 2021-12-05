using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    public class JumpSystem : IEcsRunSystem
    {
        private readonly Config _config;
        
        private readonly EcsFilter<PlayerComponent, CanJumpComponent, PlayerMovementComponent> _jumpblePlayerfilter; 
        private readonly EcsFilter<InputComponent> _inputfilter; 
        
        public void Run()
        {
            foreach (var i in _inputfilter)
            {
                foreach (var j in _jumpblePlayerfilter)
                {
                    ref var player = ref _jumpblePlayerfilter.Get1(j);
                    var direction = _jumpblePlayerfilter.Get3(j).Direction;
                    var jumpForce = (Vector2.up + direction) * _config.JumpForce;
                    player.Value.Rigidbody.AddForce(jumpForce, ForceMode2D.Impulse);
                }
                _inputfilter.GetEntity(i).Del<InputComponent>();
            }
        }
    }
}
