using Leopotam.Ecs;

namespace Client
{
    public class ClearCanJumpComponentSystem : IEcsRunSystem
    {
        private readonly EcsWorld _world = null;
        private readonly EcsFilter<CanJumpComponent> _filter;
        
        public void Run()
        {
            foreach (var i in _filter)
            {
                _filter.GetEntity(i).Del<CanJumpComponent>();
            }
        }
    }
}
