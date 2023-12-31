#include <stdio.h>
typedef long long int lli;


void print(int n) {
    char digits[10][5][5] = {
        {
        "*****",
        "*   *",
        "*   *",
        "*   *",
        "*****"
        },
        {
        "    *",
        "    *",
        "    *",
        "    *",
        "    *"
        },
        {
        "*****",
        "    *",
        "*****",
        "*    ",
        "*****"
        },
        {
        "*****",
        "    *",
        "*****",
        "    *",
        "*****"
        },
        {
        "*   *",
        "*   *",
        "*****",
        "    *",
        "    *"
        },
        {
        "*****",
        "*    ",
        "*****",
        "    *",
        "*****"
        },
        {
        "*****",
        "*    ",
        "*****",
        "*   *",
        "*****"
        },
        {
        "*****",
        "    *",
        "    *",
        "    *",
        "    *"
        },
        {
        "*****",
        "*   *",
        "*****",
        "*   *",
        "*****"
        },
        {
        "*****",
        "*   *",
        "*****",
        "    *",
        "*****"
        }
    };

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c", digits[n][i][j]);
        }
        printf("\n");
    }
    
}

int main()
{
    int n,digit;
    scanf("%d", &n);
    
    while (n>0)
    {
        digit = n%10;
        n/=10;
        print(digit);

        if (n>0)
        {
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 1; j++)
                {
                    printf(" ");
                }
                printf("\n");               
            }
            
        }
        
    }
    
    return 0;
}