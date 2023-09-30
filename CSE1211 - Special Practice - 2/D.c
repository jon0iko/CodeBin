#include <stdio.h>
typedef long long int lli;

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int number;
        scanf("%d", &number);
        int temp = number;
        int rem = 1, count = -1;

        while (rem != 0)
        {
            rem = temp % 5;
            temp++;
            count++;
        }

        if (number >= 38)
        {
            if (count < 3)
            {
                number += count;
                printf("%d\n", number);
            }
            else
            {
                printf("%d\n", number);
            }
        }
        else if (number < 38)
        {
            printf("%d\n", number);
        }

    }

    return 0;
}