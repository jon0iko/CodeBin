#include <stdio.h>
typedef long long ll;

int main()
{
    int row;
    scanf("%d", &row);
    int space = row - 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    space = 1;
    for (int i = 1; i <= row - 1; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space++;
        for (int k = 1; k <= 2 * (row - i) - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}