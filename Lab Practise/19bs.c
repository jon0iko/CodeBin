#include <stdio.h>
typedef long long int lli;

void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=key;
    }
    
}

int binarysearch(int a[], int n, int key) {

    int low = 0;
    int high = n-1;
    while (low < high)
    {
        int mid = (low+high)/2;
        int guess = a[mid];
        if (guess == key)
        {
            return mid;
        }
        else if (guess>key)
        {
            high = mid-1;
        }
        else if (guess<key)
        {
            low = mid+1;
        }
        
    }
    
    
}


int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    insertionSort(a,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("%d\n", binarysearch(a,n,2));
    return 0;
}