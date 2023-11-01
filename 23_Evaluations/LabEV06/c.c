#include <stdio.h>
typedef long long int lli;

int leng(char a[])
{
    int l = 0;
    while (a[l] != '\0')
    {
        l++;
    }
    return l;
}

int main()
{
    char a[1000001], b[1000001];
    scanf("%s", a);
    scanf("%s", b);
    int count = 0;
    int l = leng(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == b[i])
        {
            count++;
        }
    }

    int half = l/2;

    if (count>half)
    {
        printf("Close\n");
    }
    else {
        printf("Not Close\n");
    }

    return 0;
}