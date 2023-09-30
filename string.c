#include <stdio.h>
typedef long long int lli;

int main()
{
    char a[100];
    fgets(a, 100, stdin);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
        {
            printf("\n");
        }
        else    
        {
            printf("%c", a[i]);
        }
    }
    
    return 0;
}
