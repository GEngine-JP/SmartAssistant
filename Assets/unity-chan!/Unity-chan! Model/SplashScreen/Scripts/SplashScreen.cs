using UnityEngine;
using UnityEngine.SceneManagement;

namespace UnityChan
{
    [ExecuteInEditMode]
    public class SplashScreen : MonoBehaviour
    {
        void NextLevel()
        {
            SceneManager.LoadScene(SceneManager.sceneCount + 1);
        }
    }
}