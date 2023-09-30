#include <stdio.h>

int main()
{
    double start_c, end_c, step;
    double i, F;
    printf("Enter start celsius temp:");
    scanf("%lf", &start_c);
    printf("Enter end celsius temp:");
    scanf("%lf", &end_c);
    printf("Enter step:");
    scanf("%lf", &step);
    for (i = start_c; i <= end_c; i += step)
    {
        F = (i * 1.8) + 32;
        printf("%.2lf -> %.2lf\n", i, F);
    }
    return 0;
}