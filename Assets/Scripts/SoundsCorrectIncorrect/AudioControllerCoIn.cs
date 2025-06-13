using UnityEngine;

public class AudioControllerCoIn : MonoBehaviour
{
    [Header("Audio Sources")]
    [SerializeField] private AudioSource correctAudioSource;
    [SerializeField] private AudioSource incorrectAudioSource;
    
    [Header("Audio Clips")]
    [SerializeField] private AudioClip correctSound;
    [SerializeField] private AudioClip incorrectSound;
    
    [Header("Volume Control")]
    [SerializeField] [Range(0f, 1f)] private float volume = 1f;
    
    void Start()
    {
        // Configurar AudioSources si no están asignados
        SetupAudioSources();
        
        // Cargar los sonidos desde Resources
        LoadAudioClips();
        
        // Aplicar volumen inicial
        UpdateVolume();
    }
    
    void SetupAudioSources()
    {
        // Si no hay AudioSource para sonido correcto, crear uno
        if (correctAudioSource == null)
        {
            GameObject correctAudioObj = new GameObject("CorrectAudioSource");
            correctAudioObj.transform.SetParent(this.transform);
            correctAudioSource = correctAudioObj.AddComponent<AudioSource>();
        }
        
        // Si no hay AudioSource para sonido incorrecto, crear uno
        if (incorrectAudioSource == null)
        {
            GameObject incorrectAudioObj = new GameObject("IncorrectAudioSource");
            incorrectAudioObj.transform.SetParent(this.transform);
            incorrectAudioSource = incorrectAudioObj.AddComponent<AudioSource>();
        }
        
        // Configurar AudioSources
        correctAudioSource.playOnAwake = false;
        incorrectAudioSource.playOnAwake = false;
    }
    
    void LoadAudioClips()
    {
        // Cargar sonidos desde Resources
        correctSound = Resources.Load<AudioClip>("music/sound-correct");
        incorrectSound = Resources.Load<AudioClip>("music/sound-incorrect");
        
        // Verificar que se cargaron correctamente
        if (correctSound == null)
        {
            Debug.LogError("No se pudo cargar sound-correct.mp3 desde Resources/music/");
        }
        else
        {
            correctAudioSource.clip = correctSound;
        }
        
        if (incorrectSound == null)
        {
            Debug.LogError("No se pudo cargar sound-incorrect.mp3 desde Resources/music/");
        }
        else
        {
            incorrectAudioSource.clip = incorrectSound;
        }
    }
    
    /// <summary>
    /// Reproduce el sonido de respuesta correcta
    /// </summary>
    public void PlayCorrectSound()
    {
        if (correctAudioSource != null && correctSound != null)
        {
            correctAudioSource.Stop();
            correctAudioSource.Play();
        }
        else
        {
            Debug.LogWarning("No se puede reproducir el sonido correcto - AudioSource o AudioClip es null");
        }
    }
    
    /// <summary>
    /// Reproduce el sonido de respuesta incorrecta
    /// </summary>
    public void PlayIncorrectSound()
    {
        if (incorrectAudioSource != null && incorrectSound != null)
        {
            incorrectAudioSource.Stop();
            incorrectAudioSource.Play();
        }
        else
        {
            Debug.LogWarning("No se puede reproducir el sonido incorrecto - AudioSource o AudioClip es null");
        }
    }
    
    /// <summary>
    /// Establece el volumen de ambos sonidos
    /// </summary>
    /// <param name="newVolume">Valor entre 0.0 y 1.0</param>
    public void SetVolume(float newVolume)
    {
        volume = Mathf.Clamp01(newVolume);
        UpdateVolume();
    }
    
    /// <summary>
    /// Obtiene el volumen actual
    /// </summary>
    /// <returns>Valor del volumen entre 0.0 y 1.0</returns>
    public float GetVolume()
    {
        return volume;
    }
    
    /// <summary>
    /// Actualiza el volumen en ambos AudioSources
    /// </summary>
    private void UpdateVolume()
    {
        if (correctAudioSource != null)
            correctAudioSource.volume = volume;
            
        if (incorrectAudioSource != null)
            incorrectAudioSource.volume = volume;
    }
    
    /// <summary>
    /// Detiene todos los sonidos que se están reproduciendo
    /// </summary>
    public void StopAllSounds()
    {
        if (correctAudioSource != null)
            correctAudioSource.Stop();
            
        if (incorrectAudioSource != null)
            incorrectAudioSource.Stop();
    }
    
    /// <summary>
    /// Verifica si algún sonido se está reproduciendo actualmente
    /// </summary>
    /// <returns>True si algún sonido está reproduciéndose</returns>
    public bool IsPlaying()
    {
        return (correctAudioSource != null && correctAudioSource.isPlaying) ||
               (incorrectAudioSource != null && incorrectAudioSource.isPlaying);
    }
    
    // Actualizar volumen en tiempo real durante el desarrollo
    void OnValidate()
    {
        if (Application.isPlaying)
        {
            UpdateVolume();
        }
    }
}