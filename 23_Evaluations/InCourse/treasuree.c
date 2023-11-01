#include <stdio.h>

int keys[10000001];
int primes[10000001];
int primeSieve[10000001] = {0};

void sieve()
{
    for (int i = 2; i * i <= 10000050; i++)
    {
        if (primeSieve[i] == 0)
        {
            for (int j = i * 2; j <= 10000050; j += i)
            {
                primeSieve[j] = 1;
            }
        }
    }
}

int count = 0,x;

int abso(int n)
{
    if (n < 0)
    {
        return n * -1;
    }
    else
        return n;
}

int task(int n)
{
    int closest_left;
    int closest_right,closest;
    int s = 0, e = count - 1;
    int left = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (primes[mid] <= n)
        {
            left = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    s = 0, e = count - 1;
    int right = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (primes[mid] >= n)
        {
            right = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    closest_left = primes[left];
    closest_right = primes[right];
    if ((abso(n - closest_left) * x) < (abso(n - closest_right) * x))
    {
        closest = closest_left;
    }
    else
        closest = closest_right;
    return closest;
}

int main()
{
    int n;
    scanf("%d %d ", &n, &x);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &keys[i]);
    }

    sieve();

    for (int i = 2; i <= 10000050; i++)
    {
        if (primeSieve[i] == 0)
        {
            primes[count++] = i;
        }
    }

    int ans[n];

    for (int i = 0; i < n; i++)
    {
        ans[i] = task(keys[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", ans[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}