#include<stdio.h>
typedef long long ll;

int reverse(int n){
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main()
{
    printf("%d\n", reverse(-1056));
    return 0;
}