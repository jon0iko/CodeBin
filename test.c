#include <stdio.h>
typedef long long int lli;

void reverse(char s[], int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

void print(int n) {
    if (n==6)
    {
        return;
    }

    print(n+1);
    printf("%d\n",n);
}

int main()
{
    char s[50];
    scanf("%s", s);
    reverse(s, 5);
    printf("%s",s);
    print(1);
    return 0;
}