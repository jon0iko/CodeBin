#include <stdio.h>
typedef long long int lli;

void sort(int a[], int n)
{
     for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    char encrypted[101], conjecture[101];
    while (1)
    {
        if (scanf("%s %s", encrypted, conjecture) == EOF)
        {
            break;
        }
        int a1[26] = {0}, a2[26] = {0}, length = 0, flag = 0;

        for (int i = 0; encrypted[i] != '\0'; i++)
        {
            a1[encrypted[i] - 'A']++;
            a2[conjecture[i] - 'A']++;
        }

        sort(a1, 26);
        sort(a2, 26);

        for (int i = 0; i < 26; i++)
        {
            if (a1[i] != a2[i])
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}