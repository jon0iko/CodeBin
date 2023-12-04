#include <stdio.h>
typedef long long int lli;

int abs(int n)
{
    return n < 0 ? -n : n;
}

int main()
{
    int q;
    scanf("%d",&q);
    while (q--)
    {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        int aDist = abs(x-z);
        int bDist = abs(y-z);
        if (aDist < bDist)
            printf("Cat A\n");
        else if (bDist < aDist)
            printf("Cat B\n");
        else
            printf("Mouse C\n");
    }
    
    return 0;
}