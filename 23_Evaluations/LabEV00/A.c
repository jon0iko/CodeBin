//23
#include <stdio.h>

int main()
{
    int x, k, div;
    scanf("%d %d", &x, &k);
    switch (k)
    {
    case 1:
        div = 10;
        break;
    case 2:
        div = 100;
        break;
    case 3:
        div = 1000;
        break;
    case 4:
        div = 10000;
        break;
    case 5:
        div = 100000;
        break;
    case 6:
        div = 1000000;
        break;
    case 7:
        div = 10000000;
        break;
    case 8:
        div = 100000000;
        break;
    case 9:
        div = 1000000000;
        break;
    default:
        break;
    }
    int digit = x % div - x % (div/10);
    digit = digit / (div/10);
    printf("%d ", digit);
    if (digit % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }
    
    return 0;
}