#include <stdio.h>
#include <math.h>
typedef long long ll;

int main()
{
    double a, b, c, x, y, d;
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d < 0)
    {
        printf("Imaginary\n");
    }
    else
    {
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);
    }
    printf("%.2lf %.2lf\n", x, y);

    return 0;
}