#include <stdio.h>
typedef long long ll;

int main()
{
    double x;
    scanf("%lf", &x);
    printf("(a) Val:%10.3lf\n", x);
    printf("(b) Val:%lf\n", x);
    printf("(c) Val:%.2lf\n", x);
    printf("(d) Val:%.0lf\n", x);
    printf("(e) Val:%e\n", x);
    return 0;
}