#include <stdio.h>
typedef long long int lli;

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n], s1 = 0, s2 = 0, diff;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == j)
            {
                s1 += a[i][j];
            }
            if (i + j == n - 1)
            {
                s2 += a[i][j];
            }
        }
    }
    
    diff = s1 - s2;
    if (diff<0)
    {
        diff*=-1;
    }
    printf("%d\n",diff);

    return 0;
}