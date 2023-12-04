#include <stdio.h>
int main()
{
    int n, k, q, j;

    scanf("%d%d%d", &n, &k, &q);
    int rotation[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &rotation[i]);
    }

    for (int i = 0; i < k; i++)
    {
        int temp = rotation[n - 1];
        for (j = n - 1; j >= 1; j--)
        {
            rotation[j] = rotation[j - 1];
        }

        rotation[0] = temp;
    }

    for (int i = 0; i < q; i++)
    {
        int in;
        scanf("%d", &in);
        printf("%d\n", rotation[in]);
    }
    return 0;
}