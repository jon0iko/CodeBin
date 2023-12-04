#include <stdio.h>
#include <math.h>
typedef long long int lli;

int main()
{
    int t,c=1;
    scanf("%d", &t);
    while (t--)
    {
        double r, circleA, squareA, shadedA, pi, precision;
        scanf("%lf",&r);
        pi = 2 * acos(0.0);
        circleA = pi * r * r;
        squareA = 4 * r * r;
        shadedA = squareA - circleA;
        precision = 1E-9;
        printf("Case %d: %.2lf\n",  c,shadedA+precision);
        c++;
    }
    return 0;
}