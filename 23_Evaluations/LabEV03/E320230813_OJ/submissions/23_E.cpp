//23
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; ++i)
    {

        for (int j = i + 1; j < n; ++j)
        {

            if (a[i] > a[j])
            {

                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int lol = a[n - 1];
    int prime[n];
    int len = 0;
    for (int i = 2; i * i <= lol + 1; i++)
    {
        if (lol % i == 0)
        {
            prime[len++] = i;
            while (lol % i == 0)
            {
                lol /= i;
            }
        }
    }
    if (lol > 1)
    {
        prime[len++] = lol;
    }

    printf("1");
    int cnt = 0;
    for (int j = 0; j < len; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % prime[j] == 0)
            {
                cnt++;
            }
        }
        if (cnt == n)
        {
            printf(" %d", prime[j]);
        }
        cnt = 0;
    }
    printf("\n");
    return 0;
}