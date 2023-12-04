#include <stdio.h>
typedef long long int lli;

int abs(int n)
{
    if (n < 0)
    {
        return n * -1;
    }
    else
    {
        return n;
    }
}

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

int minDiff(int a[], int q, int n)
{
    int min = abs(a[0] - q);
    int ans = a[0];
    for (int i = 0; i < n; i++)
    {
        int c = abs(a[i] - q);
        if (c < min)
        {
            min = c;
            ans = a[i];
        }
    }
    return ans;
}

int main()
{
    int n, cas = 1;
    while (1)
    {

        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }

        int nums[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &nums[i]);
        }

        int numsums[n * n-1];

        int k = allsum(nums, numsums, n);

        int q;
        scanf("%d", &q);
        printf("Case %d:\n", cas);
        while (q--)
        {
            int query;
            scanf("%d", &query);
            int ans = minDiff(numsums, query, k);
            printf("Closest sum to %d is %d.\n", query, ans);
        }

        cas++;
    }

    return 0;
}