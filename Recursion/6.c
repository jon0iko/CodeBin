#include <stdio.h>
typedef long long int lli;

double power(int x, int n) {

    if (n==0)
    {
        return 1;
    }

    if (n>0)
    {
        return x*power(x,n-1);
    }
    else{
        n = n*-1;
        return 1/(x*power(x,n-1));
    }
    
    
    
}

int main()
{
    printf("%lf",power(2,-2));
    return 0;
}