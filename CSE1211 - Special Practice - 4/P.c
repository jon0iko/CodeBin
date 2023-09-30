#include <stdio.h>
typedef long long int lli;

int main()
{
    char s[100000];
    scanf("%s", s);
    int ans=1;
    for (int i = 0; i < 100000; i++)
    {
        if (s[i] == '\0')
        {
            break;
        }
        
        if (s[i]>=65 && s[i]<=90)
        {
            ans++;
        }
        
    }
    printf("%d\n",ans);
    return 0;
}