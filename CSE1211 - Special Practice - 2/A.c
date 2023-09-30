#include <stdio.h>
typedef long long int lli;

int main()
{
    int n, b;
    char c, nline;
    scanf("%d", &n);
    scanf("%c", &nline);
    while (n--)
    {
        scanf("%c%d%c", &c, &b, &nline);
        int count = 0;
        if (c + 2 <= 'h' && b + 1 <= 8)
        {
            count++;
        }
        if (c + 2 <= 'h' && b - 1 >= 1)
        {
            count++;
        }
        if (c - 2 >= 'a' && b + 1 <= 8)
        {
            count++;
        }
        if (c - 2 >= 'a' && b - 1 >= 1)
        {
            count++;
        }
        if (c + 1 <= 'h' && b + 2 <= 8)
        {
            count++;
        }
        if (c + 1 <= 'h' && b - 2 >= 1)
        {
            count++;
        }
        if (c - 1 >= 'a' && b + 2 <= 8)
        {
            count++;
        }
        if (c - 1 >= 'a' && b - 2 >= 1)
        {
            count++;
        }
        printf("%d\n", count);
    }

    return 0;
}