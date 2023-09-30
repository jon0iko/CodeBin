#include <stdio.h>
typedef long long int lli;

int main()
{
    int n,x;
    scanf("%d", &n);
    int a[n],m[n],count=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            m[j] = i;
            j++;
            count++;
        }
        
    }
    if (count>0) 
    {
        printf("FOUND at index position: ");
        for (int i = 0; i < count; i++)
        {
            if(i<count-1) printf("%d, ", m[i]);
            else printf("%d\n", m[i]);
        }
    } else printf("NOT FOUND\n");
    
    
    return 0;
}