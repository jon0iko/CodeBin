//23
#include <stdio.h>

int main()
{
    char c;
    int vowel=0,cons=0,digit=0;
    while (scanf("%c", &c) != EOF)
    {
        if ((c>64 && c<91) || (c>96 && c<123))
        {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            {
                vowel++;
            } else {
                cons++;
            }
        }
        else if ((c>47 && c<58))
        {
            digit++;
        }
    }

    printf("Input Completed:\n");
    printf("Total Vowels: %d\n", vowel);
    printf("Total Consonants: %d\n", cons);
    printf("Total Digits: %d\n", digit);
    return 0;
}