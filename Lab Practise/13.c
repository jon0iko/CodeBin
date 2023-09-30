#include <stdio.h>
typedef long long int lli;

int main()
{
    int n, ans;
    scanf("%d", &n);
    int zero = 0, one = 1;
    for (int i = 1; i < n; i++)
    {
        if (n == 0)
        {
            printf("%d", zero);
        }
        else if (n == 1)
        {
            printf("%d", one);
        }
        else
        {
            ans = zero + one;
            zero = one;
            one = ans;
        }
    }
    
    printf("%d\n", ans);
    return 0;
    
}