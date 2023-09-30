#include <stdio.h>
typedef long long int lli;

int input(char a[])
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
    {
        a[i++] = ch;
    }
    a[i] = '\0';
    return i;
}

void lower(char a[])
{

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 'a' - 'A';
        }
    }
}

int main()
{
    // char s[] = "earth";
    // char str[100];
    // fgets(str, 100, stdin);
    // for (int i = 0; i < 5; i++)
    // {
    //     if (str[i] >= 'A' && str[i] <= 'Z')
    //     {
    //         str[i] += 'a' - 'A';
    //     }

    //     if (s[i] != str[i])
    //     {
    //         printf("Nada");
    //         return 0;
    //     }
    // }
    // printf("yada");
    // return 0;

    char s[100];
    input(s);
    lower(s);
    puts(s);    
}