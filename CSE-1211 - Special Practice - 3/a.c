#include <stdio.h>
typedef long long int lli;

int main()
{
    char word[15];
    int caseN = 1;

    while (1)
    {
        scanf("%s", word);
        if (word[0] == '#')
        {
            break;
        }

        if (word[0] == 'H' && word[1] == 'E' && word[2] == 'L' && word[3] == 'L' && word[4] == 'O')
        {
            printf("Case %d: ENGLISH\n", caseN);
            caseN++;
        }
        else if (word[0] == 'H' && word[1] == 'O' && word[2] == 'L' && word[3] == 'A')
        {
            printf("Case %d: SPANISH\n", caseN);
            caseN++;
        }

        else if (word[0] == 'H' && word[1] == 'A' && word[2] == 'L' && word[3] == 'L' && word[4] == 'O')
        {
            printf("Case %d: GERMAN\n", caseN);
            caseN++;
        }
        else if (word[0] == 'B' && word[1] == 'O' && word[2] == 'N' && word[3] == 'J' && word[4] == 'O' && word[5] == 'U' && word[6] == 'R')
        {
            printf("Case %d: FRENCH\n", caseN);
            caseN++;
        }
        else if (word[0] == 'C' && word[1] == 'I' && word[2] == 'A' && word[3] == 'O')
        {
            printf("Case %d: ITALIAN\n", caseN);
            caseN++;
        }
        else if (word[0] == 'Z' && word[1] == 'D' && word[2] == 'R' && word[3] == 'A' && word[4] == 'V' && word[5] == 'S' && word[6] == 'T' && word[7] == 'V' && word[8] == 'U' && word[9] == 'J' && word[10] == 'T' && word[11] == 'E')
        {
            printf("Case %d: RUSSIAN\n", caseN);
            caseN++;
        }
        else {
            printf("Case %d: UNKNOWN\n", caseN);
            caseN++;
        }
    }

    return 0;
}