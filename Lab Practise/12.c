#include <stdio.h>
typedef long long int lli;

int main()
{
    int n,term=9,sum=9;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        term +=6;
        sum+=term;
    }
    printf("%d\n", sum);
    return 0;
}