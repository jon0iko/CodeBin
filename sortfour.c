#include <stdio.h>

int main() {
    int a, b, c, d, temp;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Sort a, b, c, and d one by one
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (a > d) {
        temp = a;
        a = d;
        d = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    if (b > d) {
        temp = b;
        b = d;
        d = temp;
    }

    if (c > d) {
        temp = c;
        c = d;
        d = temp;
    }

    printf("Sorted order: %d %d %d %d\n", a, b, c, d);

    return 0;
}
