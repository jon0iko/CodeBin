#include <stdio.h>
#include <string.h>
typedef long long int lli;

int reverse(char num[], int n, int k)
{
    for (int i = n - 1, j = 1; i >= 0; i--,j++)
    {
        if (j==k)
        {
            return num[i] - '0';
            break;
        }
        
    }
    printf("\n");
}

int main()
{
    int n, k, number;
    char num[100];
    scanf("%s %d", num, &k);
    n = strlen(num);
    number = reverse(num, n, k);
    if (number % 2 == 0)
    {
        printf("%d EVEN\n", number);
    }
    else
    {
        printf("%d ODD\n", number);
    }
    
    
    return 0;
}