#include <stdio.h>

int main()
{
    int N, flag = 0;
    scanf("%d", &N);
    char s[N][10001];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", s[i]);
    }
    int charCount[52] = {0}; // for counting the occurences

    // counting minimum occurences in the first string
    for (int i = 0; s[0][i] != '\0'; i++)
    {
        char current = s[0][i];
        int index;
        if (current >= 'A' && current <= 'Z')
        {
            index = s[0][i] - 'A';
            charCount[index]++;
        }
        else
        {
            index = s[0][i] - 'a';
            charCount[index + 26]++;
        }
    }
    // iterate through the rest of the strings for finding common chars
    for (int i = 1; i < N; i++)
    {
        int tempCharCount[52] = {0};

        // counting the occurences in the current string
        for (int j = 0; j < 52; j++)
        {
            tempCharCount[j] = 0;
        }
        for (int j = 0; s[i][j] != '\0'; j++)
        {
            char current = s[i][j];
            int index;
            if (current >= 'A' && current <= 'Z')
            {
                index = s[i][j] - 'A';
                tempCharCount[index]++;
            }
            else
            {
                index = s[i][j] - 'a';
                tempCharCount[index + 26]++;
            }
        }
        // updating charCount with the minimum
        for (int j = 0; j < 52; j++)
        {
            if (tempCharCount[j] < charCount[j])
            {
                charCount[j] = tempCharCount[j];
                //   flag = charCount[j];
            }
        }
    }

    {
        for (int i = 0; i < 52; i++)
        {

            for (int j = 0; j < charCount[i]; j++)
            {
                if (i < 26)
                {
                    char aloo = 'A' + i;
                    printf("%c", aloo);
                }
                else
                {
                    char aloo = 'a' + (i-26);
                    printf("%c", aloo);
                }

                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("###");
    }
    printf("\n");
    return 0;
}