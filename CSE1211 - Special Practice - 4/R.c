#include <stdio.h>
typedef long long int lli;

int main()
{
    char s[1000];
    scanf("%[^\n]", s);
    int flags[26] = {0};
    
    // printf("%c\n",'a'+3);
    
    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            char convert2_lowercase = ch + ('a' - 'A');
            int temp = convert2_lowercase - 'a';
            flags[temp] = 1;
            continue;
        }
        flags[ch - 'a'] = 1;
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