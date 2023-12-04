#include <stdio.h>

#define MAX_SIZE 10 // Define the maximum size of the matrix

// Function to flip the matrix horizontally
void flipMatrix(int mat[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        int start = 0;
        int end = n - 1;
        
        // Swap elements symmetrically around the middle column
        while (start < end) {
            int temp = mat[i][start];
            mat[i][start] = mat[i][end];
            mat[i][end] = temp;
            start++;
            end--;
        }
    }
}

// Function to display the matrix
void displayMatrix(int mat[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original Matrix:\n");
    displayMatrix(matrix, n);

    // Flip the matrix horizontally
    flipMatrix(matrix, n);

    printf("Matrix after horizontal flipping:\n");
    displayMatrix(matrix, n);

    return 0;
}
