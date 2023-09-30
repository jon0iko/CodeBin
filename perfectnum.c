#include <stdio.h>

int perfect(int num)
{
    int div_sum = 0;
    int count = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            div_sum += i;
        }
    }
    if (div_sum == num)
    {
        count += num;
        return count;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int start, end, step;

    printf("Enter starting number:");
    scanf("%d", &start);
    printf("Enter end number:");
    scanf("%d", &end);
    printf("Enter step:");
    scanf("%d", &step);

    for (int i = start; i <= end; i += step)
    {
        if (perfect(i)) {
            printf("%d -> Perfect Number\n", i);
        }
        else {
            printf("%d -> Not Perfect Number\n", i);
        }
    }
    return 0;
}