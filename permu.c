#include <stdio.h>
typedef long long int lli;

int main()
{
    int n;
    scanf("%d",&n);
    char a[n][11];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }
    
    

    for (int i = 0; i < n; i++)
    {
        printf("%s ",a[i]);
    }
    
    return 0;
}