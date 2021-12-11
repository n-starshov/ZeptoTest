using System;
using Client;
using Leopotam.Ecs;
using UnityEngine;

public class PlayerView : MonoBehaviour, IWorldInjectable
{
    [SerializeField] private Rigidbody2D _rigidbody2D;
    [SerializeField] private BoxCollider2D _collider;
    [SerializeField] private Transform _eyeTransform;
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

    public void SetMoveDirection(Vector2 direction)
    {
        var eyePosition = _eyeTransform.localPosition;
        var dot = Vector2.Dot(_eyeTransform.localPosition, direction);
        if (dot < 0)
        {
            eyePosition.x *= -1;
            _eyeTransform.localPosition = eyePosition;
        }
    }
}