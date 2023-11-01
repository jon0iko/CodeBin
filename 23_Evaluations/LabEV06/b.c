#include <stdio.h>
#include <math.h>
typedef long long int lli;




int main()
{
    double h,a,b;
    scanf("%lf %lf %lf", &h,&a,&b);
    double PI = acos(-1);
    b = b * (PI / 180.0);
    a = a * (PI / 180.0);
    double h1 = h * tan(b);
    double h2 = h * tan(a);

    double area = (0.5*h*h1) + (0.5*h*h2);
    printf("%.6lf\n",area);
    
    return 0;
}