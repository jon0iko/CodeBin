#include <stdio.h>
#include <string.h>

// Function to multiply two large integers represented as strings
char* multiplyLargeIntegers(const char* num1, const char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    // Find the maximum length between the two numbers
    int maxLength = len1 + len2;

    // Initialize the result array with zeros
    char result[maxLength + 1];
    memset(result, '0', maxLength);
    result[maxLength] = '\0';

    // Perform multiplication
    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = len2 - 1; j >= 0; j--) {
            int product = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
            carry = product / 10;
            result[i + j + 1] = (product % 10) + '0';
        }
        result[i] += carry; // Add the carry to the current position
    }

    // Remove leading zeros from the result
    char* finalResult = result;
    while (*finalResult == '0' && finalResult[1] != '\0') {
        finalResult++;
    }

    return finalResult;
}

int main() {
    const char* num1 = "123456789012345678901234567890";
    const char* num2 = "987654321098765432109876543210";

    char* result = multiplyLargeIntegers(num1, num2);

    printf("Result: %s\n", result);

    return 0;
}
