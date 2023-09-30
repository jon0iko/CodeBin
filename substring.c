#include <stdio.h>
typedef long long int lli;

int main()
{
    char string[100];
    int n=0;
    fgets(string, 100, stdin);

    for (int i = 0; string[i] != '\0'; i++)
    {
        n++;
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        { /* print substring from i to j */
            for (int k = i; k <= j; k++)
            {
                printf("%c", string[k]);
            }
            printf("\n");
        }
    }
    return 0;
}