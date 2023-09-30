#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (A[i] == A[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            printf("%d ", A[i]);
        }
    }
    
    printf("\n");

    return 0;
}