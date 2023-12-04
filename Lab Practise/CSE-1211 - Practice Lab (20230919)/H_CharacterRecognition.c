#include <stdio.h>
typedef long long int lli;

int main()
{
    int t;
    scanf("%d\n", &t);
    int n = 4 * t;
    char characters[5][n];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%c", &characters[i][j]);
        }
        getchar();
    }

    for (int j = 0; j < n; j += 4)
    {
        if (characters[0][j] == '*' && characters[0][j + 1] == '*' && characters[0][j + 2] == '*')
        {
            if (characters[3][j] == '*')
            {
                printf("2");
            }
            else
            {
                printf("3");
            }
        }
        else
        {
            printf("1");
        }
    }

    printf("\n");

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%c",characters[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}
