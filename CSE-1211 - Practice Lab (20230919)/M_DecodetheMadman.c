#include <stdio.h>
typedef long long int lli;

int main()
{
    char keys[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    char ch;

    while ((ch = getchar()) != EOF)
    {

        if (ch >= 'A' && ch <= 'Z')
        {
            ch += 'a' - 'A';
        }

        if (ch == ' ')
        {
            printf(" ");
        }
        else
        {
            for (int i = 0; i < 47; i++)
            {
                if (keys[i] == ch)
                {
                    printf("%c", keys[i - 2]);
                    break;
                }
            }
        }
    }
    printf("\n");

    return 0;
}