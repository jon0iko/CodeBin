#include <stdio.h>
typedef long long int lli;

int main()
{
    int n, k;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    scanf("%d", &k);
    k = k % 26;
    for (int i = 0; i < n; i++)
    {
        int a = s[i];
        if ((a >= 65 && a <= 90))
        {
            if (a + k > 90)
            {
                a = a + k - 26;
                s[i] = a;
            }
            else
            {

                a += k;
                s[i] = a;
            }
        }
        else if ((a >= 97 && a <= 122))
        {
            if (a + k > 122)
            {
                a = a + k - 26;
                s[i] = a;
            }
            else
            {

                a += k;
                s[i] = a;
            }
        }

        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}