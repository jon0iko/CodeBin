#include <stdio.h>
typedef long long int lli;

int main()
{
    int n, count = 0;
    int shared = 5, liked;
    scanf("%d", &n);
    while (n--)
    {
        liked = shared / 2;
        count += liked;
        shared = 3 * liked;
    }

    printf("%d\n", count);

    return 0;
}