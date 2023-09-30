#include <stdio.h>
#include <string.h>

// Function to print all subsequences of a string
void printSubsequences(char str[], int index, char current[]) {
    // Base case: If we have processed the entire string
    if (index == strlen(str)) {
        current[index] = '\0'; // Null-terminate the current subsequence
        if (strlen(current) > 0) {
            printf("%s\n", current); // Print the non-empty subsequence
        }
        return;
    }

    // Include the current character in the subsequence
    current[index] = str[index];
    printSubsequences(str, index + 1, current);

    // Exclude the current character from the subsequence
    current[index] = '\0'; // Null-terminate the current subsequence
    printSubsequences(str, index + 1, current);
}

int main() {
    char str[] = "abba";
    char current[strlen(str) + 1]; // Create a buffer for the current subsequence

    printf("All subsequences of '%s' are:\n", str);
    printSubsequences(str, 0, current);

    return 0;
}
