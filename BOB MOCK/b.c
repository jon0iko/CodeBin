#include <stdio.h>
typedef long long int lli;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b) % 1000000007;
}

int main()
{
    int n;
    scanf("%d", &n);
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int ans = numbers[0];
    for (int i = 1; i < n; i++)
    {
        ans = lcm(ans, numbers[i]) % 1000000007;
    }

    printf("%d\n", ans);

    return 0;
}