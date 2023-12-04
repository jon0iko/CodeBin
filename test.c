#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to count vowels in a word
int countVowels(const char *word) {
    int vowels = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        char ch = tolower(word[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }
    return vowels;
}

// Function to print words with equal vowels and consonants
void printEqualVowelsAndConsonants(const char *sentence) {
    const char *delimiters = " \t\n";
    char *token = strtok((char *)sentence, delimiters);

    while (token != NULL) {
        int vowels = countVowels(token);
        int consonants = strlen(token) - vowels;

        if (vowels == consonants) {
            printf("%s ", token);
        }

        token = strtok(NULL, delimiters);
    }
}

int main() {
    char input[100];

    fgets(input, sizeof(input), stdin);

    printEqualVowelsAndConsonants(input);

    return 0;
}