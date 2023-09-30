#include<stdio.h>
typedef long long ll;

int main()
{
    int n;
    long long int ans = 1;
    scanf("%d", &n);
    for (int i=1;i<=n;i++) {
        ans = ans*i;
    }

    printf("%d! = ", n);

    for (int i=n;i>=1;i--) {

        if(i>1) printf("%d X ", i);
        else printf("%d", i);
    }
    printf(" = %lld\n", ans);

    return 0;
}