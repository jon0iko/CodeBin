#include <stdio.h>
typedef long long int lli;

int main()
{
    int n,k,count=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if( ((a[i]+a[j]) % k) == 0)
            count++;
        }
        
    }
    printf("%d\n",count);
    return 0;
}