#include <stdio.h>
typedef long long int lli;

int main()
{
    int steps,valleyCount=0;
    char dummy;
    scanf("%d", &steps);
    scanf("%c", &dummy);

    char c[steps];
    int current_step=0, sea_level=0;

    for (int i = 0; i < steps; i++)
    {
        scanf("%c", &c[i]);

        if (c[i]=='D')
        {
            current_step -=1;
        }
        else if (c[i]=='U')
        {
            current_step +=1;
        }

        if (current_step==sea_level && c[i]=='U')
        {
            valleyCount++;
        }
    }

    printf("%d\n", valleyCount);
    

    return 0;
}