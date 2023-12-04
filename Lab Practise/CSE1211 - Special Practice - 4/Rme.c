#include <stdio.h>
typedef long long int lli;

int main()
{
    char s[1000];
    fgets(s, 1000, stdin);
    //scanf("%[^\n]", s);

    int flags[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        char letter = s[i];
        if (letter > 'A' && letter < 'Z')
        {
            char converted = letter + ('a' - 'A');
            flags[converted - 'a'] = 1;
        }
        flags[letter - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (flags[i] == 0)
        {
            printf("not pangram\n");
            return 0;
        }
    }
    printf("pangram\n");

    return 0;
}