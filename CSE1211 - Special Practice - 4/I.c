#include <stdio.h>
typedef long long int lli;

int main()
{
    char s[101];
    int length = 0;
    fgets(s, 101, stdin);

    for (int i = 0; s[i] != '\0'; i++)
    {
        length++;
    }

    for (int i = 0; i < length; i++)
    {
        if (s[i] == s[i + 1])
        {
            for (int j = i; j < length - 1; j++)
            {
                s[j] = s[j + 2];
            }
            length -= 2;
            i = -1;
        }
    }

    if (length ==0)
    {
        printf("Empty String\n");
    }
    else
    {
        printf("%s\n", s);
    }

    return 0;
}