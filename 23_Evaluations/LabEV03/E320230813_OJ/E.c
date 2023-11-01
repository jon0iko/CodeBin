#include <stdio.h>
typedef long long int lli;

int isPrime(int n)
{
    int isPrime = 1;
    for (int i = 1; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

int main()
{
    int n, small;
    scanf("%d", &n);
    int a[n];
    while (n--)
    {
        int i = 0;
        scanf("%d", &a[i]);
        small = a[i];
        if (a[i] < small)
        {
            small = a[i];
        }

        i++;
    }
    int p = 0;
    for (int i = 1; i <= small / 2; i++)
    {
        if (small % i == 0)
        {
            if (isPrime(i) == 1)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}