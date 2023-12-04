#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000 // Maximum size of file content to be read

// Function to skip whitespace characters
void skipWhitespace(FILE *file) {
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch != ' ' && ch != '\t' && ch != '\n') {
            fseek(file, -1, SEEK_CUR); // Move the file pointer back by one position
            break;
        }
    }
}

// Function to compare files
int compareFiles(FILE *file1, FILE *file2) {
    char ch1, ch2;

    while ((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF) {
        if (ch1 != ch2) {
            if (ch1 != ' ' && ch1 != '\t' && ch1 != '\n' &&
                ch2 != ' ' && ch2 != '\t' && ch2 != '\n') {
                return 0; // Return 0 for any other kind of mismatches
            } else {
                // Skip whitespace characters and continue comparison
                skipWhitespace(file1);
                skipWhitespace(file2);
            }
        }
    }

    // Check if both files are at their ends
    if (ch1 == EOF && ch2 == EOF)
        return 1; // Return 1 if contents are exactly the same
    else
        return 2; // Return 2 for whitespace error
}

int main() {
    char filename1[MAX_SIZE], filename2[MAX_SIZE];
    FILE *file1, *file2;
    int result;

    printf("Enter the first filename: ");
    scanf("%s", filename1);

    printf("Enter the second filename: ");
    scanf("%s", filename2);

    file1 = fopen(filename1, "r");
    file2 = fopen(filename2, "r");

    if (file1 == NULL || file2 == NULL) {
        printf("Error opening files.\n");
        exit(EXIT_FAILURE);
    }

    result = compareFiles(file1, file2);

    if (result == 1)
        printf("Accepted: The contents of both files are exactly the same.\n");
    else if (result == 2)
        printf("Whitespace Error: The contents are the same when ignoring whitespace characters.\n");
    else
        printf("Wrong Answer: Mismatch found in contents.\n");

    fclose(file1);
    fclose(file2);

    return 0;
}
