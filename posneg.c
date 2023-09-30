#include <stdio.h>

int checkposneg() {
    int num;
    scanf("%lf", &num);
    if (num > 0)
    {
        printf("positive");
    } else if (num == 0)
    {
        printf("zero");
    } else {
        printf("negative");
    }
}

int main() {
    checkposneg();
    return 0;
}