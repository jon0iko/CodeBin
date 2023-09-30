#include <stdio.h>


// Function to generate permutations of 3 numbers
void generatePermutations(int arr[], int n) {
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);
            }
        }
    }
}

int main() {
    int N;

    // Input the value of N
    printf("Enter the value of N (N >= 3): ");
    scanf("%d", &N);

    if (N < 3) {
        printf("N should be greater than or equal to 3.\n");
        return 1;
    }

    int arr[N];

    // Input N integers
    printf("Enter %d integers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Generate and print permutations
    generatePermutations(arr, N);

    return 0;
}
