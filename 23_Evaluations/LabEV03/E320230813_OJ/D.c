#include <stdio.h>
typedef long long int lli;

void sort(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void printA(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            printf("%d ", a[i]);
        }
        else
        {
            printf("%d", a[i]);
        }
    }
}

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    int a[n + 1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    char c[1001], dummy;
    while (q--)
    {
        scanf("%c", &dummy);
        int num, index[1000];
        scanf("%s", c);
        if (c[0] == 'I')
        {
            scanf("%d", &num);
            a[n] = num;
            n++;
            sort(a, n);
            printA(a, n);
        }
        else if (c[0] == 'S')
        {
            scanf("%d", &num);
            int k = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == num)
                {
                    index[k] = i;
                    k++;
                }
            }

            if (k > 0)
            {
                printA(index, k);
            }
            else
            {
                printf("not found");
            }
        }
        else if (c[0] == 'D')
        {
            scanf("%d", &num);
            int k = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == num)
                {
                    index[k] = i;
                    k++;
                }
            }

            for (int i = 0; i < k; i++)
            {
                for (int j = index[i]; j < n - 1; j++)
                {
                    a[j] = a[j + 1];
                }
                n--;
            }

            printA(a, n);
        }
        printf("\n");
    }

    return 0;
}
