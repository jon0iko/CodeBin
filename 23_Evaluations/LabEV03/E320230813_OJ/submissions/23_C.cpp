//23
#include <stdio.h>
int main()
{
    char c[100000];
    int count = 0, n = 1;
    while (scanf("%c", &c[count]) != EOF)
    {
        count++;
    }
    while (1)
    {
        if (count <= n * n && count > (n - 1) * (n - 1))
        {
            break;
        }
        n++;
    }
    int k = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (k < count && c[k]!='\n')
            {
                printf("%c", c[k]);
                k++;
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
            if (k < count && c[k]!='\n')
            {
                printf("%c", c[k]);
                k++;
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