#include <stdio.h>
typedef long long int lli;

int check(char s[], int i, int j) {
    if (i>j)
    {
        return 1;
    }
    
    if (s[i]==s[j])
    {
        return check(s,i+1,j-1);
    }
    else{
        return 0;
    }
    

}


int main()
{
    char s[50];
    char c;
    int i = 0;
    while ((c = getchar()) != '\n')
    {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
        {
            s[i++] = c;
        }
    }
    s[i] = '\0';

    if(check(s,0,i-1)) printf("Yes");
    else printf("NO");

    return 0;
}