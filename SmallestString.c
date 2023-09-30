#include <stdio.h>

int compa(char a[], char b[])
{
    int i = 0;
    if ((a[0] >= 65 && a[0] <= 90))
    {
        a[0] += 'a' - 'A';
    }
    if ((b[0] >= 65 && b[0] <= 90))
    {
        b[0] += 'a' - 'A';
    }

    while (a[i] == b[i])
    {
        if (a[i] == '\0')
        {
            return 0; // Strings are equal
        }
        i++;
    }

    return (a[i] > b[i]) ? 1 : -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    char word[n][184];
    char temp[184];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", word[i]);
    }

    char *smallest = word[0];

    for (int i = 0; i < n; i++)
    {
        if (compa(smallest, word[i]) == 1)
        {
            smallest = word[i];
        }
    }
    printf("%s", smallest);
}