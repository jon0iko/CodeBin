#include <stdio.h>

int maximum_size(int n, int earth_size[], int destroyed_regions[][2], int m);

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int earth_size[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &earth_size[i]);
    }
    int destroyed_regions[M][2];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < 2; j++) {  // You need to iterate over the 2D array
            scanf("%d", &destroyed_regions[i][j]);
        }
    }
    int result = maximum_size(N, earth_size, destroyed_regions, M);
    printf("%d\n", result);
    return 0;
}

int maximum_size(int n, int earth_size[], int destroyed_regions[][2], int m) {
    int max_earth_size = 0;
    int current_size = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < earth_size[i]; j++) {
            int row;
            if (i % 2 == 0) {
                row = j;
            } else {
                row = earth_size[i] - 1 - j;
            }
            int is_destroyed = 0;  // Checking if the region is destroyed
            for (int k = 0; k < m; k++) {
                if (destroyed_regions[k][0] == i && destroyed_regions[k][1] == row) {
                    is_destroyed = 1;
                    break;
                }
            }
            if (!is_destroyed) {
                current_size++;
                if (current_size > max_earth_size) {
                    max_earth_size = current_size;
                }
            } else {
                current_size = 0;
            }
        }
    }
    return max_earth_size;
}