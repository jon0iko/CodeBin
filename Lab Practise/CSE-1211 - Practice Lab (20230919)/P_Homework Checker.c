#include <stdio.h>
typedef long long int lli;

int main()
{
    int a, b, ans = 0;
    char sign, s[10];
    while (scanf("%d%c%d=%s", &a, &sign, &b, s) == 4)
    {
        if (s[0] == '?')
        {
            continue;
        }
        else
        {
            int c = 0;
            for (int i = 0; s[i] != '\0'; i++)
            {
                c = c * 10 + (s[i] - '0');
            }

            if (sign == '+' && (c==(a+b)))
            {
                ans++;
            }
            else if (sign == '-' && (c==(a-b)))
            {
                ans++;
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}