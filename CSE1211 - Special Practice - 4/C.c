#include <stdio.h>
typedef long long int lli;

int min(int a[], int n) {
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
        
    }
    return min;
}


int main()
{
    while (1)
    {
        int l;
        scanf("%d", &l);
        if (l == 0)
        {
            break;
        }
        char c[2000000];
        int distance[20];
        int ans = 0, p = 0,zflag=0;
        int previousR, previousD, reachedR = 0, reachedD = 0;
        scanf("%s", c);
        for (int i = 0; i < l; i++)
        {
            if (c[i] == 'Z')
            {
                zflag=1;
                break;
            }
            else if (c[i] == 'R')
            {
                previousR = i;
                reachedR = 1;

                if (reachedD == 1)
                {
                    distance[p++] = i - previousD;
                    reachedD=0;
                }
            }
            else if (c[i] == 'D')
            {
                previousD = i;
                reachedD = 1;
                if (reachedR == 1)
                {
                    distance[p++] = i - previousR;
                    reachedR=0;
                }
            }
        }
        if (zflag)
        {
            printf("0\n");
        }
        else{
            printf("%d\n", min(distance,p));
        }
        
    }

    return 0;
}