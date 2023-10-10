#include <stdio.h>
#include <string.h>
typedef long long int lli;

int main()
{
    char num1[100], num2[100];

    scanf("%s", num1);
    scanf("%s", num2);

    int a = strlen(num1);
    int b = strlen(num2);

    char sum[100];

    int large = (a > b) ? a : b;

    sum[large + 1] = '\0';

    int carry = 0;

    for (int i = 0; i < large; i++)
    {
        int digit1 = (i < a) ? (num1[a - 1 - i] - '0') : 0;
        int digit2 = (i < b) ? (num2[b - 1 - i] - '0') : 0;

        int s = digit1 + digit2 + carry;

        carry = s / 10;

        sum[large - i] = (s % 10) + '0';
    }

    if (carry > 0)
    {
        sum[0] = carry + '0';
        printf("%s", sum);
    }
    else
    {
        printf("%s", &sum[1]);
    }

    return 0;
}