#include <stdio.h>
typedef long long int lli;

int main()
{
    int x1, v1, x2, v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    if (v2 > v1)
    {
        while (x2 < x1)
        {
            x1 += v1;
            x2 += v2;
        }
        if (x1 == x2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else if (v1 > v2)
    {
        while (x1 < x2)
        {
            x1 += v1;
            x2 += v2;
        }
        if (x1 == x2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else if (v1 == v2)
    {
        if (x1 == x2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}