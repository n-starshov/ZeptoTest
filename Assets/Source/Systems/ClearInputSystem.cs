using Leopotam.Ecs;

namespace Client
{
    public class ClearInputSystem : IEcsRunSystem
    {
        private readonly EcsWorld _world = null;
        private readonly EcsFilter<InputComponent> _filter;
        
        public void Run()
        {
            foreach (var i in _filter)
            {
                _filter.GetEntity(i).Del<InputComponent>();
            }
        }
    }
}
