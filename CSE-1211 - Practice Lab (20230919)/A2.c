#include <stdio.h>
typedef long long int lli;

int main()
{
    int t;
    scanf("%d", &t);
    double c = 12.01, h = 1.008, o = 16.00, nit = 14.01;
    char formula[100];
    getchar();
    while (t--)
    {
        double ans = 0;
        
        scanf("%s", formula);
        for (int i = 0; formula[i] != '\0';)
        {
            char ch = formula[i];
            int n = 0;
            i++;
            while (formula[i] >= '0' && formula[i] <= '9') {
                n = n * 10 + (formula[i] - '0');
                i++;
            }

            if (n == 0) {
                n = 1;
            }
            
            if (ch == 'C') {
                ans += c * n;
            } else if (ch == 'H') {
                ans += h * n;
            } else if (ch == 'O') {
                ans += o * n;
            } else if (ch == 'N') {
                ans += nit * n;
            }
        }
        printf("%.3lf\n", ans);
    }

    return 0;
}