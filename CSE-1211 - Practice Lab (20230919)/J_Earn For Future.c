#include <stdio.h>
typedef long long int lli;

int main()
{
    int t,cas=1;
    scanf("%d", &t);
    while (t--)
    {
        int n,num,max=-1;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &num);
            if (num>max)
            {
                max=num;
            }
            
        }
        printf("Case %d: %d\n", cas, max);
        cas++;
    }
    
    return 0;
}