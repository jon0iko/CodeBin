#include <stdio.h>
typedef long long int lli;

int main()
{
    int t, c = 1;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], max = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] > max)
            {
                max = a[i];
            }
        }
        
        printf("Case %d: %d\n", c, max);
        c++;
    }

    return 0;
}