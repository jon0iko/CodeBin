#include <stdio.h>

int len(char s[])
{
    int l;
    while (s[l] != '\0')
    {
        l++;
    }
    return l;
}

int palcheck(char a[], int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char palin[100];
    scanf("%s", palin);
    int n = len(palin);
    int xtra = 0, ans;

    if (palcheck(palin, n))
    {
        printf("%d\n", n);
        return 0;
    }
    // printf("%d\n",n);
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        palin[n + i] = palin[n - 2 - i];
        
        count++;
    }
    palin[n + count] = '\0';

    printf("%s\n", palin);
    // printf("%d\n", count);

    int c = 0, flag = 0;

    for (int i = 1; i <= count; i++)
    {
        // for (int j = 0, k = n + count; j < k; j++, k--)
        // {
        //     if (palin[j] != palin[k])
        //     {
        //         flag = 1;
        //         break;
        //     }
        // }

        // if (flag == 0)
        // {
        //     if (c == 0)
        //     {
        //         c = 1;
        //     }

        //     break;
        // }
        // else
        // {
        //     c++;
        // }
        if(palcheck(palin, n + i)) {
            c++;
            break;
        }else {
            c++;
        }
        
    }

    printf("%d\n", n + c);
    return 0;
}