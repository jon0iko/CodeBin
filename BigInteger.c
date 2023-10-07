#include <stdio.h>
#include <string.h>
typedef long long int lli;

int main()
{
    char a[20], b[20], sum[25];
    scanf("%s", a);
    scanf("%s", b);
    int la = strlen(a);
    int lb = strlen(b);

    int k = (la > lb) ? la : lb;
    sum[k] = '\0';
    k--;

    int i = la - 1, j = lb - 1;
    int s, c = 0;
    while (i >= 0 && j >= 0)
    {
        s = (a[i] - '0') + (b[j] - '0') + c;
        sum[k] = s % 10 + '0';
        c = s / 10;
        i--;
        j--;
        k--;
    }

    if (i>=0)
    {
        while (i>=0)
        {
            s=a[i]-'0'+c;
            sum[k] = s%10+'0';
            c=s/10;
            i--;
            k--;
        }
    }
    else if (j>=0)
    {
        while (j>=0)
        {
            s=b[j]-'0'+c;
            sum[k] = s%10+'0';
            c=s/10;
            j--;
            k--;
        }
    }

    if (c>0)
    {
        for (int i = strlen(sum); i >= 0; i--)
        {
            sum[i+1]=sum[i];
            sum[0]=c+'0';
        }
        
    }
    
    
    for (int i = 0; i < strlen(sum); i++)
    {
        printf("%c",sum[i]);
    }
    

    return 0;
}