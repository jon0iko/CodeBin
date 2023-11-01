#include <stdio.h>
typedef long long int lli;

int main()
{
    int a[]={7,11,15,17,13};
    
    for (int i = 0; i < 5 && (i&1); i++)
    {
        a[i]=a[i]+a[i]*2;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    
    return 0;
}