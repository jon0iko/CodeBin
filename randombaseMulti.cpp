#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 100

// Function to multiply two numbers of base N
void multiplyBaseN(char num1[], char num2[], int base) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    int result[MAX_DIGITS * 2] = {0};

    // Positioning for the result
    int position1 = 0, position2 = 0;

    // Multiply each digit and store the result in 'result' array
    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        int digit1 = num1[i] - '0';
        position2 = 0;

        for (int j = len2 - 1; j >= 0; j--) {
            int digit2 = num2[j] - '0';
            int sum = digit1 * digit2 + result[position1 + position2] + carry;
            printf("%d\n",sum);
            carry = sum / base;
            result[position1 + position2] = sum % base;
            position2++;
        }

        if (carry > 0)
            result[position1 + position2] += carry;

        position1++;
    }

    // Find the position of the most significant digit in the result
    int resultLen = position1 + position2 - 1;
    while (resultLen >= 0 && result[resultLen] == 0)
        resultLen--;

    // If the result is 0, print 0
    if (resultLen == -1) {
        printf("Result: 0\n");
        return;
    }

    printf("Result: ");
    for (; resultLen >= 0; resultLen--)
        printf("%d", result[resultLen]);

    printf("\n");
}

int main() {
    char num1[MAX_DIGITS], num2[MAX_DIGITS];
    int base;

    scanf("%s", num1);

    scanf("%s", num2);

    scanf("%d", &base);

    multiplyBaseN(num1, num2, base);

    return 0;
}
