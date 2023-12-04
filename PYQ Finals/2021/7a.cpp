#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LEN 100

void removePunctuation(char *word)
{
    int len = strlen(word);
    int i, j = 0;
    for (i = 0; i < len; i++)
    {
        if (isalpha(word[i]))
        {
            word[j] = tolower(word[i]);
            j++;
        }
    }
    word[j] = '\0';
}

int mostFrequentWord(char file_path[])
{
    FILE *file = fopen(file_path, "r");
    if (file == NULL)
    {
        printf("Unable to open the file.\n");
    }

    char word[MAX_WORD_LEN];
    int max_count = 0;
    int max_length = 0;
    char most_frequent[MAX_WORD_LEN] = "";
    char temp[MAX_WORD_LEN] = "";

    while (fscanf(file, "%s", word) != EOF)
    {
        removePunctuation(word);
        int count = 1;

        while (fscanf(file, "%s", temp) != EOF)
        {
            removePunctuation(temp);
            if (strcmp(word, temp) == 0)
            {
                count++;
            }
        }

        if ((count > max_count))
        {
            strcpy(most_frequent, word);
            max_count = count;
            max_length = strlen(word);
        }

        rewind(file);

        if (most_frequent != NULL && strcmp(most_frequent, "") != 0)
        {
            printf("Most frequent word: %s\n", most_frequent);
            return 0;
        }
        else
        {
            printf("No words found in the file or unable to open the file.\n");
        }
    }

    fclose(file);
}

int main()
{
    char file_path[100];
    scanf("%s", file_path);

    mostFrequentWord(file_path);
    return 0;
}
