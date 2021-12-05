using Leopotam.Ecs;

namespace Client
{
    public class StartMovementSystem : IEcsRunSystem
    {
        private readonly EcsWorld _world;
        private readonly Config _config;
        
        private readonly EcsFilter<InputComponent> _inputFilter; 
        private readonly EcsFilter<PlayerComponent>.Exclude<PlayerMovementComponent> _playerFilter;

        public void Run()
        {
            foreach (var i in _inputFilter)
            {
                foreach (var j in _playerFilter)
                {
                    ref var movement = ref _playerFilter.GetEntity(j).Get<PlayerMovementComponent>();
                    movement.Direction = _config.InitDirection;
                    _inputFilter.GetEntity(i).Del<InputComponent>();
                }

            }
        }
    }
}
