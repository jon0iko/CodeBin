#include <stdio.h>

int leng(const char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char s[10001], k[10001], r[10001];


    scanf("%s", s);
    scanf("%s", k);
    scanf("%s", r);

    int sL = leng(s);
    int kL = leng(k);
    int rL = leng(r);

    int match = 0;

    for (int i = 0; i < sL; i++)
    {
        int j;
        for (j = 0; j < kL; j++)
        {
            if (s[i + j] != k[j])
            {
                break;
            }
        }

        if (j == kL)
        {
            match = i; 
            break;
        }
    }

    if (match > 0)
    {
        if (kL > rL)
        {
            int d = kL - rL;

            for (int i = match; s[i + kL] != '\0'; i++)
            {
                s[i] = s[i + d];
            }

            s[sL - d] = '\0';
        }
        else if (rL > kL)
        {
            int d = rL - kL;

            for (int i = sL; i >= match + kL; i--)
            {
                s[i + d] = s[i];
            }

            s[sL + d] = '\0';
        }

        for (int i = 0; i < rL; i++)
        { 
            s[match + i] = r[i];
        }
    }

    printf("%s\n", s);

    return 0;
}