#include <bits/stdc++.h>
typedef long long int lli;

int main()
{
    int n;
    scanf("%d", &n);
    char names[n][101];
    int ans[n] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((strcmp(names[i], names[j])) == 0)
            {
                ans[i]++;
            }
        }
    }
    int max = ans[0];
    for (int i = 1; i < n; i++)
    {
        if (ans[i]>max)
        {
            max = ans[i];
        }
        // printf("%d\n",ans[i]);
    }
    
    printf("%d\n",max);
    return 0;
}