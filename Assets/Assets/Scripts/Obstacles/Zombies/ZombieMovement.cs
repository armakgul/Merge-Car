using UnityEngine;

public class ZombieMovement : MonoBehaviour
{
    public float detectionRadius = 10f;
    private float moveSpeed = 5f;
    public float fireRate = 1f;        // Fires once per second by default
    public float fireRange = 10f;      // Same as detection radius by default
    public Transform gunEndPoint;      // The position where rays will be cast from, representing the gun's muzzle

    private Transform playerTransform;
    private Animator animator;
    private float lastFireTime = 0f;   // To keep track of the last time the zombie fired

    public int damageAmountFromBullet = -2;

    public GameObject expoAnim;

    private void Start()
    {
        Initialize();
    }

    private void Update()
    {
        if (playerTransform == null) return;

        MoveTowardsPlayerIfNeeded();
        ShootAtPlayerIfNeeded();
    }

    private void Initialize()
    {
        GameObject playerObject = GameObject.FindGameObjectWithTag("Player");
        if (playerObject != null)
        {
            playerTransform = playerObject.transform;
        }
        animator = GetComponent<Animator>();

        moveSpeed = Random.Range(5,10);
    }

    private void MoveTowardsPlayerIfNeeded()
    {
        if (IsPlayerWithinRange(detectionRadius) && LevelManager.Instance.currentState == LevelManager.GameStates.section1)
        {
            MoveTowardsPlayer();
        }
    }

    private void ShootAtPlayerIfNeeded()
    {
        if (IsPlayerWithinRange(fireRange) && Time.time - lastFireTime >= 1f / fireRate)
        {
            Shoot();
            lastFireTime = Time.time;
        }
    }

    private bool IsPlayerWithinRange(float range)
    {
        return Vector3.Distance(transform.position, playerTransform.position) <= range;
    }

    private void MoveTowardsPlayer()
    {
        Vector3 directionToPlayer = (playerTransform.position - transform.position).normalized;
        transform.position += directionToPlayer * moveSpeed * Time.deltaTime;
        FacePlayer();
}

private void FacePlayer()
{
    Vector3 directionToPlayer = (playerTransform.position - transform.position).normalized;
    // We only want to rotate on the y-axis
    directionToPlayer.y = 0;

    Quaternion targetRotation = Quaternion.LookRotation(directionToPlayer);
    transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, moveSpeed * Time.deltaTime);
}

    private void Shoot()
    {
        PlayShootingAnimation();
        RaycastForPlayerHit();
    }

    private void PlayShootingAnimation()
    {
        GameObject currentFireAnim = Instantiate(expoAnim, gunEndPoint.position, Quaternion.identity);
        Destroy(currentFireAnim, .5f);
    }

    private void RaycastForPlayerHit()
    {
    RaycastHit hit;
    if (Physics.Raycast(gunEndPoint.position, playerTransform.position - gunEndPoint.position, out hit, fireRange))
    {
        if (hit.collider.CompareTag("Player"))
        {
            ICurable curable = hit.collider.GetComponent<ICurable>();
            if (curable != null)
            {
                curable.Cure(damageAmountFromBullet);
            }

        }
    }
}
}
