#include <stdio.h>
typedef long long int lli;

void reverse(char s[], int i) {
    if (s[i]=='\0')
    {
        return;
    }
    
    reverse(s,i+1);
    printf("%c",s[i]);
}


int main()
{
    char s[50];
    scanf("%s", s);
    reverse(s,0);
    return 0;
}