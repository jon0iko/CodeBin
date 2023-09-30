#include <stdio.h>
typedef long long int lli;

// Recursion:

int SearchR(int a[], int k, int s, int e)
{
    int mid = s + (s - e) / 2;
    if (a[mid] == k)
    {
        return mid;
    }
    else if (a[mid] > k)
    {
        return SearchR(a, k, s, mid - 1);
    }
    else if (a[mid] < k)
    {
        return SearchR(a, k, mid + 1, e);
    }

    if (s > e)
    {
        return -1;
    }
}

// Iteration:

int Search(int a[], int n, int x)
{
    int low = 0, high = n;

    while (low < high)
    {
        int mid = (low + high) / 2;
        if (x == a[mid])
            return mid;
        else if (x > a[mid])
            low = mid + 1;
        else 
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int a[] = {1, 3, 4, 6, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    printf("%d\n", Search(a, n, 6));
    return 0;
}