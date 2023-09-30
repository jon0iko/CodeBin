#include <stdio.h>
typedef long long int lli;

int gcdf(int a, int b)
{
    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int a, b, gcd, lcm;
    scanf("%d %d", &a, &b);
    gcd = gcdf(a, b);
    lcm = a * b / gcd;
    printf("GCD: %d\nLCM: %d\n", gcd, lcm);
    return 0;
}