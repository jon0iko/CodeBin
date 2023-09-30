#include <stdio.h>
typedef long long int lli;

int main()
{
    int s;
    scanf("%d", &s);
    int a[s];
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i < s; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for (int i = 0; i < s; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}