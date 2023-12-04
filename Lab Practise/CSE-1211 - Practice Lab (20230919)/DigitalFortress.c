#include <stdio.h>
#include <math.h>
typedef long long int lli;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[10001];
        int length = 0;

        scanf(" %[^\n]%*c", s);

        for (int i = 0; s[i] != '\0'; i++)
        {
            length++;
        }

        int n = sqrt(length);

        if (n * n != length)
        {
            printf("INVALID\n");
        }
        else
        {
            int r=0;
            char word[n][n];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    word[i][j] = s[r];
                    r++;
                }
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%c", word[j][i]);
                }
                
            }

            printf("\n");
            
        }
    }

    return 0;
}