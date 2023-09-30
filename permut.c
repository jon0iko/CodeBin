#include <stdio.h>
typedef long long int lli;

int factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int n, combinations;
    scanf("%d", &n);
    int a[n];

    for (int i = 0, j = 1; i < n; i++, j++)
    {
        a[i] = j;
    }

    // combinations = factorial(n) / factorial(n - 3);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);

        for (int j = 0; j < n; j++)
        {
            if (a[j] != a[i])
            {
                printf("%d ", a[j]);
                break;
            }
            for (int k = 0; k < n; k++)
            {
                if (a[k] != a[i] && a[k] != a[j]);
                    
                {
                    printf("%d", a[k]);
                    break;
                }
            }
        }
        printf("\n");
    }

    return 0;
}