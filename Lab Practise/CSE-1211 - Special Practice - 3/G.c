#include <stdio.h>
typedef long long int lli;

int main()
{
    int n,k,q;
    scanf("%d %d %d",&n,&k,&q);

    int a[100001];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    k = k % n;

    while (q--)
    {
        int i;
        scanf("%d", &i);
        printf("%d\n", a[(n-k+i)%n]);
    }
    
    
    
    return 0;
}