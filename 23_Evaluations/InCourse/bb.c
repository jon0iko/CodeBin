#include <stdio.h>

// Function to calculate the maximum possible earth size
int maximum_size(int N, int M, int dimensions[], int destroyed[][10]);


int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int dimensions[10];
    int destroyed[100][10];

    for (int i = 0; i < N; i++) {
        scanf("%d", &dimensions[i]);
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &destroyed[i][j]);
        }
    }

    int result = maximum_size(N, M, dimensions, destroyed);
    printf("%d\n", result);

    return 0;
}

int maximum_size(int N, int M, int dimensions[], int destroyed[][10]) {
    int size = 1;

    // Calculate the total size of the earth
    for (int i = 0; i < N; i++) {
        size *= dimensions[i];
    }

    int earth[10][10] = {{0}}; // Initialize the earth with 0 (not destroyed)

    // Mark the destroyed regions as 1
    for (int i = 0; i < M; i++) {
        int row = destroyed[i][0];
        int col = destroyed[i][1];
        earth[row][col] = 1;
    }

    int max_size = 0;

    // Calculate the maximum possible earth size
    for (int i = 0; i < size; i++) {
        int row = i / dimensions[1];
        int col = i % dimensions[1];

        if (earth[row][col] == 0) {
            int j = i;
            int count = 0;
            while (j < size && earth[j / dimensions[1]][j % dimensions[1]] == 0) {
                count++;
                j++;
            }
            if (count > max_size) {
                max_size = count;
            }
            i = j - 1;
        }
    }

    return max_size;
}