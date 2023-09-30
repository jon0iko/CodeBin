#include <stdio.h>
#include <string.h>
typedef long long int lli;

void ass(char s[])
{
    char temp[50];
    int l = strlen(s);
    int i, j = 0;
    for (i = 0; i < l; i++)
    {
        temp[i] = s[l-1-i];
    }
    temp[i] = '\0';
    strcpy(s,temp);
}
int main()
{
    char s[50];
    scanf("%s", s);
    ass(s);
    puts(s);
    return 0;
}