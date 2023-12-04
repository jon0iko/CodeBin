#include <stdio.h>
typedef long long int lli;

void swap(int *s, int *e)
{
    if (*s > *e)
    {
        int temp = *s;
        *s = *e;
        *e = temp;
    }
}

int main()
{
    char s[1000000];
    int caseN = 1;
    while (1)
    {
        int p = 0;
        char c;
        while (1)
        {
            c = getchar();
            if (c == '\n' || c == EOF)
            {
                break;
            }
            s[p++] = c;
        }

        if (p == 0)
        {
            break;
        }
        printf("Case %d:\n", caseN);
        int q;
        scanf("%d", &q);
        while (q--)
        {
            int st, e, flag = 0;
            scanf("%d %d", &st, &e);
            char first = s[st];
            for (int i = st; i <= e; i++)
            {
                if (s[i] != first)
                {
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        caseN++;
        getchar();
    }

    return 0;
}