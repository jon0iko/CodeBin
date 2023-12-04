#include <stdio.h>
typedef long long int lli;

int main()
{
    int a, n, j;
    scanf("%d %d", &a, &n);
    for (int i = a; i >= 0; i--)
    {
        for (int k = 1; k <= n; k++)
        {
            for (j = 1; j <= i; j++)
            {
                printf(" ");
            }
            for (j = 0; j < (2 * n - 1) - 2 * i; j++)
            {
                printf("*");
            }
            for (j = 1; j <= i; j++)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}