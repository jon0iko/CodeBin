#include <stdio.h>
typedef long long int lli;

int main()
{
    int n;
    double sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += ((-1.00) * (1.00 / i));
        }
        else
        {
            sum += 1.00 / i;
        }
    }
    printf("%.2lf\n", sum);

    return 0;
}