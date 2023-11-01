#include <stdio.h>
typedef long long int lli;


int main()
{
    int n;
    scanf("%d", &n);
    char words[n][10001];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
        // lower(words[i]);
    }

    int chars[52] = {0};

    for (int i = 0; words[0][i] != '\0'; i++)
    {
        char letter = words[0][i];
        int index;
        if (letter >= 'A' && letter <= 'Z')
        {
            index = words[0][i] - 'A';
            chars[index]++;
        }
        else
        {
            index = words[0][i] - 'a';
            chars[index+26]++;
        }
        
    }
    for (int i = 1; i < n; i++)
    {
        int tempChars[52] = {0};

        for (int j = 0; words[i][j] != '\0'; j++)
        {
            char letter = words[i][j];
            int index;
            if (letter >= 'A' && letter <= 'Z')
            {
                index = words[i][j] - 'A';
                tempChars[index]++;
            }
            else
            {
                index = words[i][j] - 'a';
                tempChars[index+26]++;
            }
            
        }
        for (int j = 0; j < 52; j++)
        {
            if (tempChars[j] < chars[j])
            {
                chars[j] = tempChars[j];
            }
        }
    }

    int flag = 0;

    for (int i = 0; i < 52; i++)
    {
        for (int j = 0; j < chars[i]; j++)
        {
            if (i<26)
            {
                printf("%c", 'A' + i);
            }
            else {
                printf("%c", 'a' + i-26);
            }
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("###");
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     printf("%d ",charCount[i]);
    // }
    printf("\n");
    return 0;
}