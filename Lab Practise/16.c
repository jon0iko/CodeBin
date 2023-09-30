#include <stdio.h>
typedef long long int lli;

double power(int x, int n)
{
    double result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= x;
    }

    return result;
}

double fact(int n)
{
    double result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int x, n;
    double sum = 1;
    scanf("%d %d", &x, &n);
    for (int i = 1; i <= n; i++)
    {
        sum += power(x, i) / fact(i);
    }
    printf("%.2lf\n", sum);

    return 0;
}