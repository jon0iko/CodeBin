#include <bits/stdc++.h>
void sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int num2[n];

    for (int i = 0; i < n; i++)
    {
        num2[i] = num[i];
        int size = i + 1;
        sort(num2, size);
        if (size % 2 == 0)
        {
            int ans = (num2[size / 2] + num2[(size / 2) - 1]) / 2;
            printf("%d ", ans);
        }
        else
        {
            int ans = num2[size / 2];
            printf("%d ", ans);
        }
    }
    return 0;
}