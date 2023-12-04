#include <stdio.h>

#define MAX_N 20 // Maximum number of rocks

// Function to check if it's possible to divide rocks into two piles with equal weight
int canDivide(int weights[], int n, int index, int sum1, int sum2) {
    // If all rocks are considered
    if (index == n) {
        return sum1 == sum2; // Check if both piles have equal weight
    }

    // Include the current rock in the first pile
    if (canDivide(weights, n, index + 1, sum1 + weights[index], sum2)) {
        return 1;
    }

    // Include the current rock in the second pile
    if (canDivide(weights, n, index + 1, sum1, sum2 + weights[index])) {
        return 1;
    }

    // If it's not possible to include the current rock in either pile
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int weights[MAX_N];

    for (int i = 0; i < n; i++) {
        scanf("%d", &weights[i]);
    }

    if (canDivide(weights, n, 0, 0, 0)) {
        printf("It's possible to divide the rocks into two piles with equal weight.\n");
    } else {
        printf("It's not possible to divide the rocks into two piles with equal weight.\n");
    }

    return 0;
}
