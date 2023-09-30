#include <stdio.h>
typedef long long ll;

int main()
{
    int x, n, g, flag = 0;
    scanf("%d", &x);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &g);
        if (g == x)
        {
            printf("Right, Player-2 wins!\n");
            flag = 1;
            return 0;
        }
        else
        {
            printf("Wrong, %d Chance(s) Left!\n", n - i);
        }
    }

    if (flag == 0)
    {
        printf("Player-1 wins!\n");
    }

    return 0;
}