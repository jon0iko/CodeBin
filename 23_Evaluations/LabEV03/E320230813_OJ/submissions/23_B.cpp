//23
//23
#include <stdio.h>
typedef long long int lli;

int main()
{
    double n;
    scanf("%lf", &n);
    double start = 1.0, end = n, close = 0.0000000001;
    while (end - start > close)
    {
        double mid = (start + end) / 2;
        if (mid * mid > n)
        {
            end = mid;
        }
        else
        {
            start = mid;
        }
    }
    printf("%.6lf\n", (start + end) / 2);
    return 0;
}