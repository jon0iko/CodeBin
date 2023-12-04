#include <stdio.h>
typedef long long int lli;

int main()
{
    int n, k = 0;
    char c;
    scanf("%d ", &n);
    while (1)
    {
        scanf("%c", &c);
        if (c == '!')
        {
            k++;
        }
        else
        {
            break;
        }
    }
    int ans = 1;
    if (n % k == 0)
    {
        for (int i = n; i >= k; i -= k)
        {
            ans *= i;
        }
    }
    else
    {
        for (int i = n; i >= n % k; i -= k)
        {
            ans *= i;
        }
    }

    printf("%d\n", ans);
    return 0;
}