#include <stdio.h>
typedef long long int lli;

void sort(char a[], int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
        {
            char temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
        }
        
    }
    
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,k;
        scanf("%d%d ", &n,&k);
        char s[n];
        scanf("%s", s);
        sort(s,n);
        printf("%s\n",s);
    }
    
    return 0;
}