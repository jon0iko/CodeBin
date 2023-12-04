#include <stdio.h>

// Function to generate combinations of R integers from 1 to N
void generateCombinations(int arr[], int data[], int start, int end, int index, int r) {
    if (index == r) {
        for (int i = 0; i < r; i++) {
            printf("%d ", data[i]);
        }
        printf("push");
        printf("\n");
        
        return;
    }

    for (int i = start; i <= end; i++) {
        data[index] = arr[i];
        generateCombinations(arr, data, i + 1, end, index + 1, r);
    }
}

int main() {
    int N = 5; // N integers from 1 to N
    int R = 3; // R integers to be selected

    int arr[N];
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1; // Initialize array with integers from 1 to N
    }

    int data[R]; // Array to store combinations
    generateCombinations(arr, data, 0, N - 1, 0, R);

    return 0;
}