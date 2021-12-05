using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    public class CanJumpSystem : IEcsRunSystem, IEcsInitSystem
    {
        private readonly EcsWorld _world;
        private readonly Config _config;
        private readonly EcsFilter<PlayerComponent, PlayerMovementComponent> _filter;
        
        private int _layerMask;

        public void Init()
        {
            _layerMask = LayerMask.GetMask("Default");
        }

        public void Run()
        {
            foreach (var i in _filter)
            {
                var player = _filter.Get1(i);
                var groundHit = Physics2D.Raycast(player.Value.DownRaycastPoint, Vector2.down, 0.2f, _layerMask);
                
                var moveDir = _filter.Get2(i);
                var upWallHit = Physics2D.Raycast(player.Value.UpRaycastPoint, moveDir.Direction, player.Value.Width, _layerMask);
                var downWallHit = Physics2D.Raycast(player.Value.DownRaycastPoint, moveDir.Direction, player.Value.Width, _layerMask);
                var wallHit = upWallHit.collider != null || downWallHit.collider != null;
                
                if (groundHit.collider != null || wallHit)
                    _filter.GetEntity(i).Get<CanJumpComponent>();
                
                if (wallHit)
                    _filter.GetEntity(i).Get<CanSwitchDirectionComponent>();
            }
        }
    }
}
