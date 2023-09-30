#include<stdio.h>
typedef long long ll;

int main()
{
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows-1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }

        for (int k = 0; k < ((2*rows-1)-(2*i)); k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = 0; i < (2*rows-1); i++)
    {
        printf("*");
    }
    printf("\n");
    
    return 0;
}