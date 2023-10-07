#include <stdio.h>
#include <string.h>
typedef long long int lli;

void subsequences(char str[], int idx, char newString[], int newIdx) {
    if (idx == strlen(str)) {
        newString[newIdx] = '\0'; // Null-terminate the subsequence
        if (newIdx > 0) {
            printf("%s\n", newString);
        }
        return;
    }

    // Include the current character
    newString[newIdx] = str[idx];
    subsequences(str, idx + 1, newString, newIdx + 1);

    // Exclude the current character
    subsequences(str, idx + 1, newString, newIdx);
}

int main()
{
    char s[50],out[50];
    scanf("%s", s);
    subsequences(s,0,out,0);
    return 0;
}