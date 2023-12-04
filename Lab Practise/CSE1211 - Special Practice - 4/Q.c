#include <stdio.h>
typedef long long int lli;

int main()
{
    int n, dig = 1, lower = 1, upper = 1, special = 1, ans=0;
    scanf("%d", &n);
    char p[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &p[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (p[i]>=48 && p[i]<=57)
        {
            dig=0;
        }
        else if (p[i]>=65 && p[i]<=90)
        {
            upper=0;
        }
        else if (p[i]>=97 && p[i]<=122)
        {
            lower=0;
        }
        else if (p[i]=='!'||p[i]=='@'||p[i]=='#'||p[i]=='$'||p[i]=='%'||p[i]=='^'||p[i]=='&'||p[i]=='*'||p[i]=='('||p[i]==')'||p[i]=='-'||p[i]=='+')
        {
            special=0;
        }
    }
    int need = dig+upper+lower+special;
    if (n>=6)
    {
        ans=need;
    } else {
        if (need<=6-n)
        {
            ans=6-n;
        }else{
            ans=need;
        }
        
    }
    
    printf("%d\n",ans);
    
    

    return 0;
}