#include <stdio.h>

void sieveOfEratosthenes(int n) {
    int prime[n+1];
    for (int i = 0; i <= n; i++) {
        prime[i] = 1; // Initialize all numbers as prime
    }

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == 1) {
            // Mark all multiples of p as not prime
            for (int i = p * p; i <= n; i += p) {
                prime[i] = 0;
            }
        }
    }

    // Print prime numbers
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            printf("%d ", p);
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    // Call the Sieve of Eratosthenes function
    sieveOfEratosthenes(n);

    return 0;
}
