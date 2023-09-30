#include <stdio.h>
typedef long long int lli;

void checkpal(char a[], int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            printf("NO");
            return;
        }
    }
    printf("Yes");
}

int main()
{
    char s[100];
    scanf("%s", s);
    int l = 0;
    while (s[l] != '\0')
    {
        l++;
    }
    checkpal(s, l);

    return 0;
}