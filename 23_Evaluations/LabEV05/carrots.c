#include <stdio.h>

int max(int num1, int num2)
{
    int r = (num1 < num2) ? num2 : num1;
    return r;
}
int min(int num1, int num2)
{
    int r = (num1 > num2) ? num2 : num1;
    return r;
}
int main()
{
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    int ans = 0;
    for (int i = min(x1, x2); i <= max(x1, x2); i++)
    {
        for (int j = min(y1, y2); j <= max(y1, y2); j++)
        {
            if (i == x1 && j == y1)
                continue;
            if (i == x2 && j == y2)
                continue;
            int a = (y1 - y2) * (x2 - i);
            int b = (y2 - j) * (x1 - x2);
            if (a == b)
                ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}