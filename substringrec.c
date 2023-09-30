#include <stdio.h>
#include <string.h>

// Function to print all substrings of a string
void printSubstrings(char str[], int start, int end) {
    if (start > end) {
        return;
    }

    // Print the substring from start to end
    for (int i = start; i <= end; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    // Recursively call for the next substring
    printSubstrings(str, start, end - 1);
    printSubstrings(str, start + 1, end);
}

int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);

    printf("All substrings of '%s' are:\n", str);
    printSubstrings(str, 0, len - 1);

    return 0;
}
