#include <stdio.h>
typedef long long int lli;

int abs(int n)
{
    if (n < 0)
    {
        return n * -1;
    }
    else
    {
        return n;
    }
}

int main()
{
    int q;
    scanf("%d", &q);
    while (q--)
    {
        char s[10000],count=0,flag=0;
        int diff1[10000], diff2[10000];
        fgets(s, 10000, stdin);
        int k=0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i + 1] != '\0')
            {
                int next = s[i + 1];
                int current = s[i];
                diff1[k] = abs(next - current);
                k++;
            }
            count++;
        }
        int j=0;
        for (int i = count; i >= 0; i--)
        {
            if (i > 0)
            {
                int next = s[i - 1];
                int current = s[i];
                diff2[j] = abs(next - current);
                j++;
            }
        }

        for (int i = 0; i < count-1; i++)
        {
            if (diff2[i] != diff1[i])
            {
                printf("Not Funny\n");
                flag=1;
                break;
            }
            printf("%d %d\n", diff1[i],diff2[i]);
        }
        if (!flag)
        {
            printf("Funny\n");
        }
        
    }

    return 0;
}