#include <stdio.h>
int main()
{
    int i, num1 = 36, num2 = 69, num3, value = 1;
    scanf("%d%d", &num1, &num2);
    printf("num1 =%d and num2 = %d\n", num1, num2);
    if (num1 == 0)
        printf("%d\n", num2);

    else if (num2 == 0)
        printf("%d\n", num1);
    else
    {
        if (num1 < num2)
        {
            num3 = num1;
            num1 = num2;
            num2 = num3;
            printf("num1 = %d and num2 = %d\n", num1, num2);
        }
        for (i = 0;; i++)
        {
            if (num2 == 0)
                break;
            num1 = num1 + num2;
            num2 = num1 - num2;
            num1 = num1 - num2;
            num2 = num2 % num1;
            printf("In loop[%d]: num1 = %d and num2 = %d\n", i, num1, num2);
        }
        printf("result = %d\n", num1);
    }
    return 0;
}