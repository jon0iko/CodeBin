#include<stdio.h>
typedef long long ll;

int prime(int n) {
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (prime(n) == 1)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Composite\n");
    }
    
    return 0;
}