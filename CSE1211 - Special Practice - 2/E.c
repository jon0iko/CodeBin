#include <stdio.h>
typedef long long int lli;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n],temp=0,max=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    if (max > k)
    {
        temp = max - k;
        printf("%d", temp);
    }
    else
    {
        printf("0");
    }


    return 0;
}