#include <stdio.h>
typedef long long ll;

int main()
{
    int x, y, k;
    scanf("%d %d %d", &x, &y, &k);
    if ((x - y) % k != 0)
    {
        printf("Error\n");
        return 0;
    }
    else if (x == y)
    {
        printf("Reached!\n");
        return 0;
    }
    else if (x < y)
    {
        for (int i = 0; x != y; i++)
        {
            printf("%d, ", x * x);
            x += k;
        }
    }
    else if (x > y)
    {
        for (int i = 0; x != y; i++)
        {
            printf("%d, ", x * x);
            x -= k;
        }
    }
    printf("Reached!\n");
    return 0;
}