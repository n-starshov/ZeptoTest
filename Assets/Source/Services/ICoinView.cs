using UnityEngine;

namespace Client
{
    public interface ICoinView
    {
        Vector3 Position { get; }
        void Collect();
    }
}
