//23
// 23
#include <stdio.h>

long long gcd(long long int a, long long int b)
{
    if (a < b)
    {
        long long int temp = a;
        a = b;
        b = temp;
    }
    while (b != 0)
    {
        long long int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", gcd(a, b));
    return 0;
}