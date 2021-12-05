using UnityEngine;

public class SceneObjects : MonoBehaviour
{
    [SerializeField] private Transform _mapContainer;
    [SerializeField] private HUDControl _hud;

    public Transform MapContainer => _mapContainer;
    public HUDControl HUD => _hud;
}