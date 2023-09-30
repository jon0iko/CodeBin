#include <stdio.h>
typedef long long int lli;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int days, party, Hartal = 0;
        scanf("%d %d", &days, &party);
        int h[party];
        for (int i = 0; i < party; i++)
        {
            scanf("%d", &h[i]);
        }
        for (int i = 1; i <= days; i++)
        {
            int count = 0;
            for (int j = 0; j < party; j++)
            {
                if (i % 7 != 0 && i  % 7 != 6)
                {
                    if (i % h[j] == 0)
                    {
                        count++;
                    }
                }
            }
            if (count >= 1)
            {
                Hartal++;
            }
        }

        printf("%d\n", Hartal);
    }
    return 0;
}