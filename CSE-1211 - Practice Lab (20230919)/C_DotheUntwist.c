#include <stdio.h>
typedef long long int lli;

int strleng(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

void textToCode(char s[], int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '_')
        {
            a[i] = 0;
        }
        else if (s[i] == '.')
        {
            a[i] = 27;
        }
        else
        {
            a[i] = s[i] - 'a' + 1;
        }
    }
}

void codeToText(char s[], int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            s[i] = '_';
        }
        else if (a[i] == 27)
        {
            s[i] = '.';
        }
        else
        {
            s[i] = a[i] + 'a' - 1;
        }
    }
    s[i] = '\0';
}

int main()
{
    char s[100], text[100];
    int key;
    while (1)
    {
        scanf("%d %s", &key, s);
        if (key == 0)
        {
            break;
        }

        int n = strleng(s);

        int ciphercode[n], plaincode[n];

        textToCode(s, ciphercode, n);

        for (int i = 0; i < n; i++)
        {
            int index = (i * key) % n;
            int diff = (ciphercode[i] + i) % 28;
            plaincode[index] = diff;
        }

        codeToText(text, plaincode, n);

        printf("%s\n", text);
    }

    return 0;
}