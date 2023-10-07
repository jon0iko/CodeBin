#include <stdio.h>
typedef long long int lli;

int reverse(int n, int t) {
    if (n==0)
    {
        return t;
    }
    
    t = t*10 + n%10;
    reverse(n/10,t);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d",reverse(n,0));
    return 0;
}