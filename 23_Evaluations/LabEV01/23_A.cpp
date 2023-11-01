//23
//23
//23
//23
//23
//23
//23
#include <stdio.h>

int cnt=0;

int main()
{
    int m,n;
    scanf("%d %d", &m,&n);
    for (int i = m; i <= n; i++)
    {

        if (i%2==0)
        {
            continue;
        }
        else if (i%2!=0){
            printf("%d", i);
            cnt++;
            if (i<n-1)
            {
                printf(" ");
            }
            
        }
    }
    if (cnt==0)
    {
        printf("empty");
    }
    
    printf("\n");
    
    return 0;
}