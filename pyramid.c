#include <stdio.h>
typedef long long int lli;

int main()
{
    int n;
    scanf("%d",&n);

    int space = n-1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        space--;
        for (int k = 0; k < (2*i-1); k++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}