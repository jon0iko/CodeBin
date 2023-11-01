//23
#include <stdio.h>

int main()
{
    int a, b, c, d;
    double median;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int tmp;
    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (c > d)
    {
        tmp = c;
        c = d;
        d = tmp;
    }
    if (a > c)
    {
        tmp = a;
        a = c;
        c = tmp;
    }
    if (b > d)
    {
        tmp = b;
        b = d;
        d = tmp;
    }
    if (b > c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }
    median = ((double)b+c)/2;
    printf("%0.3lf\n", median);
    return 0;
}