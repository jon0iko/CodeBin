#include <stdio.h>
typedef long long int lli;

void insSort(int a[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int key = a[i], j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    int a[] = {9, 5, 7, 3, 8};
    insSort(a, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}