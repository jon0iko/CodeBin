//23
//23
#include <stdio.h>
typedef long long int lli;

int main()
{
    double n;
    scanf("%lf", &n);
    double start = 1.0, end = n, close = 1E-9;
    double mid = (start + end) / 2;
    while (end - start > close)
    {
        mid = (start + end) / 2;
        if (n < mid * mid)
        {
            end = mid;
        }
        else
        {
            start = mid;
        }
    }
    printf("%.6lf\n", mid);
    return 0;
}
