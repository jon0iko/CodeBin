#include <stdio.h>
#include <math.h>
typedef long long int lli;

typedef struct
{
    double x;
    double y;
} point;

double distance(point p1, point p2) {
    return sqrt(((p1.x-p2.x)*(p1.x-p2.x))+((p1.y-p2.y)*(p1.y-p2.y)));
}

int main()
{
    point p1, p2;
    scanf("%lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y);
    printf("%.3lf\n", distance(p1,p2));
    return 0;
}