#include <stdio.h>
typedef long long int lli;

int main()
{
    while (1)
    {
        double h, u, d, f, flag=0;
        double climbed = 0;
        int day=0;
        scanf("%lf%lf%lf%lf", &h, &u, &d, &f);
        if (h == 0)
        {
            break;
        }
        f = (f / 100) * u;
        while (climbed <= h)
        {
            day++;
            climbed += u;
            climbed -= d;
            u -= f;
            // printf("%lf %lf\n", climbed, u);
            if (climbed < 0)
            {
                printf("failure on day %d\n",day);
                flag=1;
                break;
            }
            
        }
        if (!flag)
        {
            printf("success on day %d\n",day);
        }
    }

    return 0;
}