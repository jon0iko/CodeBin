#include <stdio.h>

#define N 3 // Define the size of the matrix

struct Matrix {
    int value[N][N];

    // Function to rotate the matrix clockwise
    void rotate_clock() {
        int temp[N][N];
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                temp[i][j] = value[N - j - 1][i];
        
        // Copy the rotated matrix back to the original matrix
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                value[i][j] = temp[i][j];
    }

    // Function to rotate the matrix anticlockwise
  void rotate_anticlock() {
    int temp[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            temp[i][j] = value[j][N - i - 1];
    
    // Copy the rotated matrix back to the original matrix
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            value[i][j] = temp[i][j];
}
    // Function to multiply the matrix with another matrix B
    void multiply(struct Matrix B) {
        int temp[N][N];
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) {
                temp[i][j] = 0;
                for (int k = 0; k < N; k++)
                    temp[i][j] += value[i][k] * B.value[k][j];
            }
        
        // Update the original matrix with the multiplied values
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                value[i][j] = temp[i][j];
    }

    // Function to print the main diagonal of the matrix
    void print_diagonal() {
        printf("Main Diagonal: ");
        for (int i = 0; i < N; i++)
            printf("%d ", value[i][i]);
        printf("\n");
    }
};

int main() {
    // Sample usage
    struct Matrix A = {
        { {1, 2, 3},
          {4, 5, 6},
          {7, 8, 9} }
    };

    // Rotate clockwise and print main diagonal
    A.rotate_clock();
    A.print_diagonal();

    // Rotate anticlockwise and print main diagonal
    A.rotate_anticlock();
    A.print_diagonal();

    // Sample Matrix B for multiplication
    struct Matrix B = {
        { {1, 2, 3},
          {4, 5, 6},
          {7, 8, 9} }
    };

    // Multiply matrices A and B and print main diagonal of the result
    A.multiply(B);
    A.print_diagonal();

    return 0;
}