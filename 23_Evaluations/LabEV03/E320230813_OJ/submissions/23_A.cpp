//23
//23
#include <stdio.h>

int main() {
    int n, ans=0, temp,i=1;
    scanf("%d", &n);

    while (n>0)
    {
        temp = n % 2;
        n /= 2;
        ans = temp*i + ans;
        i *= 10;
    }
    printf("%d\n",ans);
}