#include <stdio.h>
typedef long long int lli;

int powe(int x, int m)
{
    int ans = 1;
    for (int i = 1; i <= m; i++)
    {
        ans *= x;
    }
    return ans;
}


int main()
{
    int x,m;
    scanf("%d %d", &x, &m);
    int ans = 1;
    for (int i = 1; i <= m; i++)
    {
        ans += powe(x,i);
    }
    printf("%d\n", ans);
    return 0;
}