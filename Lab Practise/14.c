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
    double sum = 0;
    scanf("%d %d", &x, &n);
    for (int i = 1, j = 1; i <= n; j += 2, i++)
    {
        if (i % 2 == 0)
        {
            sum += ((-1) * power(x, j) / fact(j));
        }
        else
        {
            sum += power(x, j) / fact(j);
        }
    }
    printf("%.3lf\n", sum);

    return 0;
}