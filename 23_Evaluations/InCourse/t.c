#include <stdio.h>


int ans = 0;

void getSize(int earth[],int size) {

    for (int i = 0; i < size; i++) {
        if (earth[i] == 0) {
            int j = i;
            int count = 0;
            while (j < size && earth[j] == 0) {
                count++;
                j++;
            }
            if (count > ans) {
                ans = count;
            }
            i = j - 1;
        }
    }
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int dimension[10];
    int destroyedReg[100][10];

    int size = 1;
    for (int i = 0; i < N; i++) {
        scanf("%d", &dimension[i]);
        size *= dimension[i];
    }

    int earth[1000000] = {0};

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &destroyedReg[i][j]);
        }
        int index = 0;
        int f = 1;
        for (int j = N - 1; j >= 0; j--) {
            index += destroyedReg[i][j] * f;
            f *= dimension[j];
        }
        earth[index] = 1;
    }

    
    getSize(earth,size);

    printf("%d\n", ans);
    return 0;
}