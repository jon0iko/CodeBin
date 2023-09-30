#include <stdio.h>
typedef long long int lli;

int main()
{
    char s1[50], s2[50];
    fgets(s1, 50, stdin);
    fgets(s2, 50, stdin);
    int i = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] < s2[i])
        {
            puts(s1);
            return 0;
        }
        else if (s1[i] > s2[i])
        {
            puts(s2);
            return 0;
        }
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0')
    {
        puts("Equal");
    }
    else if (s1[i] == '\0')
    {
        puts(s1);
    }
    else
    {
        puts(s2);
    }

    return 0;
}