using UnityEngine;
using System.Collections;

/// http://www.mikedoesweb.com/2012/camera-shake-in-unity/

public class ObjectShake : MonoBehaviour
{

    public void Shake()
    {
        StartCoroutine(ShakeCorotinue(gameObject, 0.5f, 30f));
    }

    private IEnumerator ShakeCorotinue(GameObject objectToShake, float damageTime, float shakeRange)
    {
        float elapsed = 0.0f;

        while (elapsed < damageTime)
        {

            elapsed += Time.deltaTime;
            float z = Random.value * shakeRange - (shakeRange / 2);
            objectToShake.gameObject.transform.eulerAngles = new Vector3(0f, 0f, 0f + z);
            yield return null;
        }

        objectToShake.gameObject.transform.localRotation = new Quaternion(0f, 0f, 0f, 0f);
    }
}