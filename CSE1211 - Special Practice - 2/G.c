#include <stdio.h>
typedef long long int lli;

int reverse(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int abs(int n)
{
    return n < 0 ? -n : n;
}

int main()
{
    int i, j, k, count = 0;
    scanf("%d %d %d", &i, &j, &k);
    for (int n = i; n <= j; n++)
    {
        if (abs(n - reverse(n)) % k == 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}