#include <stdio.h>
typedef long long int lli;

int main()
{
    int t;
    int c, h, o, n;
    double weight[1000];
    weight['C'] = 12.01;
    weight['H'] = 1.008;
    weight['O'] = 16.00;
    weight['N'] = 14.01;
    char s[100];
    scanf("%d", &t);
    while (t--)
    {
        double ans = 0.0;
        int num = 0;
        scanf("%s", s);
        // while (s[num] != '\0')
        //     num++;

        for (int i = 0; s[i] != '\0';)
        {
            char element = s[i], n = 0;
            i++;
            while (s[i] >= '0' && s[i] <= '9')
            {
                n = n * 10 + s[i] - '0';
                i++;
            }
            
            if (n==0)
            {
                n=1;
            }
            

            ans += weight[element] * n;
        }
        printf("%.3lf\n", ans);
    }
}