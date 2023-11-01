// 23
// 23
//  23
#include <stdio.h>

int prime(int num)
{
    if (num == 1)
    {
        return 0;
    }

    if (num == 2)
    {
        return 1;
    }
    int i;
    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int count = 0;
int main()
{
    int m, n, fprime = 0;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        if (prime(i))
        {
            if (fprime == 1)
            {
                printf(" ");
            }
            printf("%d", i);
            count = 1;
            fprime = 1;
        }
    }

    if (count == 0)
    {
        printf("empty");
    }

    printf("\n");

    return 0;
}