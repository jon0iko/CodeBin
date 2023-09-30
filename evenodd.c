#include <stdio.h>

int checkeodd() {
    int num;
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("even");
    } else {
        printf("odd");
    }
    
}

int main() {
    checkeodd();
    return 0;
}