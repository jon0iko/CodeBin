#include <stdio.h>
typedef long long int lli;

void print(int a[], int n, int i, int j) {
    if (i>j)
    {
        return;
    }

    printf("%d %d\n",a[i],a[j]);
    print(a,n, i+1, j-1);
    
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    print(a,n,0,n-1);
    return 0;
}