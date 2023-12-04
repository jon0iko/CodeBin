#include <stdio.h>
#include <stdbool.h>

// Function to evaluate a single SOP term
bool evaluateSOPTerm(const char* term, int* variables, int N) {
    bool result = false; // Initialize result to false
    bool literal = true; // Initialize literal to true

    for (int i = 0; term[i] != '\0'; i++) {
        if (term[i] == 'A' || term[i] == 'B' || term[i] == 'C' || term[i] == 'D') {
            int index = term[i] - 'A';
            literal = variables[index];
        } else if (term[i] == '~') {
            i++;
            int index = term[i] - 'A';
            literal = !variables[index];
        } else if (term[i] == '+') {
            // OR operation with the previous literal
            result = result || literal;
            literal = true; // Reset literal
        }
    }

    result = result || literal; // Combine the result with the last literal
    return result;
}

int main() {
    int N;
    scanf("%d", &N);

    int variables[10];
    for (int i = 0; i < N; i++) {
        scanf("%d", &variables[i]);
    }

    char expression[100000];
    scanf(" %[^\n]", expression);

    int result = 0; // Initialize final result to false

    int termStart = 0;
    int termEnd = 0;

    while (expression[termEnd] != '\0') {
        if (expression[termEnd] == '.' || expression[termEnd] == '\0') {
            char term[100];
            int k = 0;

            for (int j = termStart; j < termEnd; j++) {
                term[k++] = expression[j];
            }
            term[k] = '\0';

            result = result || evaluateSOPTerm(term, variables, N);
            termStart = termEnd + 1;
        }
        termEnd++;
    }

    if (result) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}