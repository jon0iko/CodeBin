#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    scanf("%d", &num);

    // Check if the number can be expressed as a multiplication of two different prime numbers
    int found = 0;
    for (int i = 2; i <= num; i++) {
        if (isPrime(i) && num % i == 0) {
            int other_factor = num / i;
            if (isPrime(other_factor) && other_factor != i) {
                found = 1;
                break;
            }
        }
    }

    // If a pair of prime factors is found, print 1; otherwise, print -1
    if (found) {
        printf("1\n");
    } else {
        printf("-1\n");
    }

    return 0;
}
