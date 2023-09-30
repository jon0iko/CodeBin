#include <stdio.h>
typedef long long int lli;

int main()
{
    char input;
    while ((input = getchar()) != EOF)
    {
        if (input >= 'A' && input <= 'C')
            printf("2");
        else if (input >= 'D' && input <= 'F')
            printf("3");
        else if (input >= 'G' && input <= 'I')
            printf("4");
        else if (input >= 'J' && input <= 'L')
            printf("5");
        else if (input >= 'M' && input <= 'O')
            printf("6");
        else if (input >= 'P' && input <= 'S')
            printf("7");
        else if (input >= 'T' && input <= 'V')
            printf("8");
        else if (input >= 'W' && input <= 'Z')
            printf("9");
        else if (input == '\0')
            printf("\n");
        else
            printf("%c", input);
    }
    return 0;
}