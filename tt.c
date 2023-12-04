#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_num_of_shelves;
    scanf("%d", &total_num_of_shelves);

    // Memory allocation of shelves and books arrays
    int* total_num_of_books = (int*)malloc(total_num_of_shelves * sizeof(int));
    int** total_num_of_pages = (int**)malloc(total_num_of_shelves * sizeof(int));

    for (int i = 0; i < total_num_of_shelves; i++) {
        total_num_of_books[i] = 0;  // Initialize with 0 on each shelf
        total_num_of_pages[i] = (int*)malloc(1 * sizeof(int));  // Initialize with space for one integer
    }

    int total_num_of_queries;
    scanf("%d", &total_num_of_queries);

    while (total_num_of_queries--) {
        int query, x, y;
        scanf("%d", &query);

        if (query == 1) {
            scanf("%d %d", &x, &y);
            total_num_of_books[x]++;
            total_num_of_pages[x] = (int*)realloc(total_num_of_pages[x], total_num_of_books[x] * sizeof(int));
            if (total_num_of_pages[x] == NULL) {
                // Handle memory allocation failure
                fprintf(stderr, "Memory reallocation failed\n");
                exit(EXIT_FAILURE);
            }

            total_num_of_pages[x][total_num_of_books[x] - 1] = y;
        } else if (query == 2) {
            scanf("%d %d", &x, &y);
            printf("%d\n", total_num_of_pages[x][y]);
        } else if (query == 3) {
            scanf("%d", &x);
            printf("%d\n", total_num_of_books[x]);
        }
    }

    for (int i = 0; i < total_num_of_shelves; i++) {
        free(total_num_of_pages[i]);
    }

    free(total_num_of_books);
    free(total_num_of_pages);

    return 0;
}