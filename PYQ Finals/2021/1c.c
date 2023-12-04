#include <stdio.h>
typedef long long int lli;

int main()
{
    int a, b, c, d, carry = 0;
    scanf("%d.%d %d.%d", &a, &b, &c, &d);
    if (b + d >= 100)
    {
        carry = 1;
    }
    int x = a + c + carry;
    int y = b + d - (100 * carry);
    if (y == 0)
    {
        printf("%d\n", x);
    }
    else
    {
        printf("%d.%d\n", x, y);
    }

    return 0;
}