#include <stdio.h>

int main()
{
    int s, t;
    scanf("%d%d", &s, &t);
    int a, b;
    scanf("%d%d", &a, &b);
    int m, n;
    scanf("%d%d", &m, &n);
    int apel[m], komola[n], apelporse = 0, komolarfall = 0;
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &apel[i]);
        if (apel[i] + a >= s && apel[i] + a <= t)
        {
            apelporse++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &komola[i]);
        if (komola[i] + b >= s && komola[i] + b <= t)
        {
            komolarfall++;
        }
    }
    printf("%d\n",apelporse);
    printf("%d\n",komolarfall);
        return 0;
}