#include <stdio.h>
typedef long long int lli;

int length=0;

void removee(int a[], int n, int i,int j) {
    if (i==n)
    {
        return;
    }
    
    if (a[i]%2==0)
    {
        a[j++]=a[i];
        length++;
    }
    
    removee(a,n,i+1,j);

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

    removee(a,n,0,0);

    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    }
    

    return 0;
}


