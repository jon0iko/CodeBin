#include <stdio.h>
#include <string.h>
typedef long long int lli;

int check(char a[], char b[]){
    int la = strlen(a);
    int lb = strlen(b);

    for (int i = 0; i < la; i++)
    {
        for (int j = 0; j < la-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                char temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }

    for (int i = 0; i < lb; i++)
    {
        for (int j = 0; j < lb-1-i; j++)
        {
            if (b[j]>b[j+1])
            {
                char temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
            
        }
        
    }

    for (int i = 0; i < la; i++)
    {
        if (a[i]!=b[i])
        {
            return 0;
        }
        
    }
    
    return 1;
    
}

int main()
{
    char a[50],b[50];
    scanf("%s", a);
    scanf("%s", b);

    if(check(a,b)) printf("Yes");
    else printf("NO");
    return 0;
}