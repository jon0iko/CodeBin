#include <stdio.h>
typedef long long int lli;
#define MOD 1000000007

int fact(int n)
{
    lli ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = (ans * i) % MOD;
    }
    return ans;
}

int main()
{
    int n;
    scanf("%d", &n);
    lli add = 0, mod = 1000000007;
    for (int i = 1; i <= n; i++)
    {
        add += ((i%mod)*(fact(i)%mod))%mod;
    }
    printf("%lld\n", add);
    return 0;
}