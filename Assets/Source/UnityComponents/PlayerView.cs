using Client;
using Leopotam.Ecs;
using UnityEngine;

public class PlayerView : MonoBehaviour, IWorldInjectable
{
    [SerializeField] private Rigidbody2D _rigidbody2D;
    [SerializeField] private BoxCollider2D _collider;
    [SerializeField] private Transform _downRaycastPoint;
    [SerializeField] private Transform _upRaycastPoint;

    public Rigidbody2D Rigidbody => _rigidbody2D;
    public BoxCollider2D Collider => _collider;
    public Vector2 UpRaycastPoint => _upRaycastPoint.position;
    public Vector2 DownRaycastPoint => _downRaycastPoint.position;
    public float Width => _collider.size.x;
    

    private EcsWorld _world;
    
    public void Inject(EcsWorld world)
    {
        _world = world;
        
        var entity = _world.NewEntity();
        entity.Get<PlayerComponent>().Value = this;
    }
}