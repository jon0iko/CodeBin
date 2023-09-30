#include <stdio.h>
typedef long long ll;

int main()
{
    int x, g, flag = 0;
    scanf("%d", &x);
    for (int i = 1; i <= 3; i++)
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
            printf("Wrong, %d Chance(s) Left!\n", 3 - i);
        }
    }

    if (flag == 0)
    {
        printf("Player-1 wins!\n");
    }

    return 0;
}