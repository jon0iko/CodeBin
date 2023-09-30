#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    int a, b, c, d, e, f, n;
    int i, j, sum = 0;
    int mod = 10000007;
    for(i=1; i<=T; i++)
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        for (int j = 6; j <= n; j++)
        {
            sum = ((a % mod) + (b % mod)) % mod;
            sum = ((sum % mod) + (c % mod)) % mod;
            sum = ((sum % mod) + (d % mod)) % mod;
            sum = ((sum % mod) + (e % mod)) % mod;
            sum = ((sum % mod) + (f % mod)) % mod;
            a = b;
            b = c;
            c = d;
            d = e;
            e = f;
            f = sum;
        }
        printf("Case %d: ", i);
        if (n == 0)
            printf("%d", a % mod);
        else if (n == 1)
            printf("%d", b % mod);
        else if (n == 2)
            printf("%d", c % mod);
        else if (n == 3)
            printf("%d", d % mod);
        else if (n == 4)
            printf("%d", e % mod);
        else if (n == 5)
            printf("%d", f % mod);
        else
            printf("%d", sum);
        printf("\n");
    }

    return 0;
}
