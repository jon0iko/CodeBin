#include <stdio.h>
typedef long long int lli;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,k, punctual=0;
        scanf("%d%d",&n,&k);
        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] <= 0)
            {
                punctual++;
            }
            
        }

        if (k>punctual)
        {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        
        
    }
    
    return 0;
}