#include <stdio.h>

void zero() {
    for (int i = 1; i <= 5; i++)
    {
        if (i==1 || i==5)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else {
            for (int j = 0; j < 5; j++)
            {
                if (j==0 || j==4)
                {
                    printf("*");
                }
                else {
                    printf(" ");
                }
                
            }
            printf("\n");
        }
        
    }
}

void one() {
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j==4)
            {
                printf("*");
            }else {
                printf(" "); 
            }
        }
        printf("\n");
        
    }
    
}

int main()
{
    one();
    return 0;
}