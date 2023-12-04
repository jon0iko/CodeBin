#include <stdio.h>
typedef long long int lli;

int main()
{
    int n;
    scanf("%d", &n);
    int score[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }
    int max = score[0], min = score[0], minC = 0, maxC = 0;

    for (int i = 1; i < n; i++)
    {
        if (score[i] > max)
        {
            max = score[i];
            maxC++;
        }
        else if (score[i] < min)
        {
            min = score[i];
            minC++;
        }
    }

    printf("%d%d\n", maxC, minC);

    return 0;
}