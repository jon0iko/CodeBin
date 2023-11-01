#include <stdio.h>
int main()
{
    int n;
    int left[1001], right[1001];

    scanf("%d", &n);
    int pair = n;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &left[i]);
    }
    int shoe[10000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &right[i]);
        shoe[right[i]]++;
        
    }


    for (int i = 0; i < n; i++)
    {
        if (shoe[left[i]] > 0)
        {
            pair--;
            shoe[left[i]]--;
        }
    }

    printf("%d\n", pair);

    return 0;
}