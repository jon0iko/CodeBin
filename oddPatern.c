#include <stdio.h>
typedef long long int lli;

int main()
{
    int n;
    scanf("%d", &n);
    int dots = n - 1, symbols = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= dots; j++)
        {
            printf(".");
        }
        dots--;
        if (i % 2 == 0)
        {
            for (int k = 1; k <= symbols; k++)
            {
                printf("#");
            }
        }
        else
        {
            for (int k = 1; k <= symbols; k++)
            {
                printf("*");
            }
        }
        symbols += 2;
        printf("\n");
    }

    return 0;
}