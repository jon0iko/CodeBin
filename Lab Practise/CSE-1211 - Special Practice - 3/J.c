#include <stdio.h>
#include <math.h>
typedef long long int lli;

int main()
{
    int t,i=1;
    scanf("%d", &t);
    while (t--)
    {
        double ab,ac,bc;
        double ratio,ans;
        scanf("%lf%lf%lf%lf", &ab,&ac,&bc,&ratio);
        ans = sqrt(((ratio)/(1+ratio)))*ab;
        printf("Case %d: %lf\n", i, ans);
        i++;
    }
    
    return 0;
}