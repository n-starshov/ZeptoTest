using System;
using UniRx;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MetaUIRoot : MonoBehaviour
{
    [SerializeField] private MetaUIController _metaUIController;

    private MetaUIModel _model;
    private IDisposable _disposable;

    private void Start()
    {
        _model = new MetaUIModel();
        _disposable = _model.OnPlayButtonClicked.Subscribe(_ => LoadGameplay());
        _metaUIController.SetModel(_model);   
    }

    private void LoadGameplay()
    {
        // hardcode -> SceneManagerHelper and SceneConfig
        SceneManager.LoadScene(1);
    }

    private void OnDestroy()
    {
        _disposable?.Dispose();
    }
}
