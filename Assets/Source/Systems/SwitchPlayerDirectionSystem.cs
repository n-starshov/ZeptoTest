using Leopotam.Ecs;

namespace Client
{
    public class SwitchPlayerDirectionSystem : IEcsRunSystem
    {
        private readonly EcsFilter<CanSwitchDirectionComponent, PlayerMovementComponent, PlayerComponent> _filter;
        private readonly EcsFilter<InputComponent> _inputFilter;

        public void Run()
        {
            if (!_inputFilter.IsEmpty())
            {
                foreach (var i in _filter)
                {
                    ref var moveDir = ref _filter.Get2(i);
                    moveDir.Direction *= -1;
                }
            }
        }
    }
}