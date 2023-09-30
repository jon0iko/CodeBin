#include <stdio.h>

int main() {
    int N, M;
    scanf("%d", &N);

    int A[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    
    scanf("%d", &M);

    int B[M];
    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }
    int flag=0;
    printf("I: ");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                flag=1;
                break;
            }
        }
    }
    if (flag==0)
    {
       printf("Empty set");
    }
    
    printf("\n");

    printf("U: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    for (int i = 0; i < M; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < N; j++) {
            if (B[i] == A[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            printf("%d ", B[i]);
        }
    }
    printf("\n");

    printf("D: ");
    for (int i = 0; i < N; i++) {
        int isPresent = 0;
        for (int j = 0; j < M; j++) {
            if (A[i] == B[j]) {
                isPresent = 1;
                break;
            }
        }
        if (!isPresent) {
            printf("%d ", A[i]);
        }
    }
    printf("\n");

    return 0;
}
