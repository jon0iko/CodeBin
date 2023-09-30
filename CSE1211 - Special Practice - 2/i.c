#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0], min = a[0], maxi = 0, mini = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxi++;
        }
        if (a[i] < min)
        {       
            min = a[i];
            mini++;
        }
    }
    printf("%d %d", maxi, mini);
    return 0;
}