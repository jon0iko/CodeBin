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

    int key = a[s - 1];
    int j = s - 2;
    while (a[j] > key)
    {
        a[j + 1] = a[j];

        for (int i = 0; i < s; i++)
        {
            printf("%d ", a[i]);
        }
        j--;
        printf("\n");
    }
    
    a[j+1] = key;
    
    for (int i = 0; i < s; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}