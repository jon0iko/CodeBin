#include <stdio.h>

#define PRECISION 1000000 // 10^6 (6 digits after the decimal point)

int main() {
    int beforeDecimal1, afterDecimal1, beforeDecimal2, afterDecimal2;
    int sumBeforeDecimal, sumAfterDecimal;

    // Input two non-negative floating-point numbers
    scanf("%d.%d %d.%d", &beforeDecimal1, &afterDecimal1, &beforeDecimal2, &afterDecimal2);

    // Calculate the sum of the integers
    int total1 = beforeDecimal1 * PRECISION + afterDecimal1;
    int total2 = beforeDecimal2 * PRECISION + afterDecimal2;
    int sum = total1 + total2;

    // Separate the integer part and decimal part of the sum
    sumBeforeDecimal = sum / PRECISION;
    sumAfterDecimal = sum % PRECISION;

    // Output the sum without leading/trailing zeroes
    printf("%d", sumBeforeDecimal);
    if (sumAfterDecimal > 0) {
        printf(".%06d\n", sumAfterDecimal);
    } else {
        printf("\n");
    }

    return 0;
}
