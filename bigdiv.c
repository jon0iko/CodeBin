#include <stdio.h>
#include <string.h>

// Function to find the larger of two numbers represented as strings
int compareLargeIntegers(const char* num1, const char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    // Compare lengths first
    if (len1 > len2) {
        return 1;
    } else if (len1 < len2) {
        return -1;
    }

    // If lengths are the same, compare digit by digit
    return strcmp(num1, num2);
}

// Function to divide two large integers represented as strings
char* divideLargeIntegers(const char* num1, const char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    // Check if the divisor is zero
    if (len2 == 1 && num2[0] == '0') {
        return "Undefined"; // Division by zero
    }

    // Check if the dividend is zero
    if (len1 == 1 && num1[0] == '0') {
        return "0"; // Division of zero by any non-zero number is zero
    }

    // Initialize the result array with zeros
    int maxLength = len1 + 1;
    char result[maxLength];
    memset(result, '0', maxLength);
    result[maxLength - 1] = '\0';

    char dividend[maxLength];
    char divisor[len2];
    strcpy(dividend, num1);

    for (int i = 0; i < len1; i++) {
        int quotientDigit = 0;

        // Extract the next digit from the dividend
        char nextDigit[2];
        nextDigit[0] = dividend[i];
        nextDigit[1] = '\0';

        // Append it to the end of the result
        strcat(result, nextDigit);

        // Continue if the current result is smaller than the divisor
        while (compareLargeIntegers(result, num2) >= 0) {
            // Subtract the divisor from the current result
            char tempResult[maxLength];
            strcpy(tempResult, result);

            int borrow = 0;
            for (int j = len2 - 1; j >= 0; j--) {
                int diff = (tempResult[i + j] - '0') - (num2[j] - '0') - borrow;
                if (diff < 0) {
                    diff += 10;
                    borrow = 1;
                } else {
                    borrow = 0;
                }
                tempResult[i + j] = diff + '0';
            }

            // Copy the updated result back
            strcpy(result, tempResult);

            // Increment the quotient digit
            quotientDigit++;
        }

        // Store the quotient digit in the result
        result[i] = quotientDigit + '0';
    }

    // Remove leading zeros from the result
    char* finalResult = result;
    while (*finalResult == '0' && finalResult[1] != '\0') {
        finalResult++;
    }

    return finalResult;
}

int main() {
    const char* num1 = "987654321098765432109876543210";
    const char* num2 = "123456789012345678901234567890";

    char* result = divideLargeIntegers(num1, num2);

    printf("Result: %s\n", result);

    return 0;
}
