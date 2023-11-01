//23
// 23
#include <stdio.h>
typedef long long int lli;

int main()
{
    char c[100001];
    int count = 0;
    while (scanf("%c", &c[count]) != EOF)
    {
        count++;
    }
    int n = 1;
    while (1)
    {
        if (count <= n * n && count > (n - 1) * (n - 1))
        {
            break;
        }

        n++;
    }
    int p = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (p < count && c[p] != '\n')
            {
                printf("%c", c[p]);
                p++;
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            if (p < count && c[p] != '\n')
            {
                printf("%c", c[p]);
                p++;
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}