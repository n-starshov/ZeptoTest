using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class EcsStartup : MonoBehaviour
    {
        [SerializeField] private SceneObjects _sceneObjects;
        [SerializeField] private Config _config;
        
        private EcsWorld _world;
        private EcsSystems _systems;
        private HUDModel _hudModel;

        private void Start()
        {
            _hudModel = new HUDModel();

            _world = new EcsWorld();
            _systems = new EcsSystems(_world);
            
#if UNITY_EDITOR
            Leopotam.Ecs.UnityIntegration.EcsWorldObserver.Create(_world);
            Leopotam.Ecs.UnityIntegration.EcsSystemsObserver.Create(_systems);
#endif
            
            _systems
                // init
                .Add(new MapBuilderSystem())
                .Add(new CameraSystem())
                .Add(new InitHUDModelSystem())
                .Add(new TimerSystem())
                // updated
                .Add(new ObjectFabricSystem())
                .Add(new InputSystem())
                .Add(new CanJumpSystem())
                .Add(new ClampFallingVelocitySystem())
                .Add(new SwitchPlayerDirectionSystem())
                .Add(new StartMovementSystem())
                .Add(new PlayerMovementSystem())
                .Add(new JumpSystem())
                .Add(new CoinCollectSystem())
                .Add(new LevelEndSystem())
                //
                .OneFrame<SpawnObjectComponent>()
                .OneFrame<InputComponent>()
                .OneFrame<CanJumpComponent>()
                .OneFrame<CanSwitchDirectionComponent>()
                //
                .Inject(_sceneObjects)
                .Inject(_config)
                .Inject(new LevelConfig()) 
                .Inject(new LevelProgress()) 
                .Inject(_hudModel) 
                //
                .Init();
        }

        private void Update()
        {
            _systems?.Run();
        }

        private void OnDestroy()
        {
            if (_systems != null)
            {
                _systems.Destroy();
                _systems = null;
                _world.Destroy();
                _world = null;
            }
            _hudModel?.Dispose();
        }
    }
}