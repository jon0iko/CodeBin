#include <stdio.h>
typedef long long int lli;

int allsum(int a[], int b[], int n)
{
    int k = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            b[k++] = a[i] + a[j];
        }
    }
    return k;
}

int main()
{
    int a[] = {3, 12, 17, 33, 34};
    int b[10];

    allsum(a, b, 5);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}