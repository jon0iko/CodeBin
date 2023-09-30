#include <stdio.h>
typedef long long int lli;

int main()
{
    char s[] = {'a', 'd', 'e', 'e', 'b', '\0'};
    for (int i = 1; s[i] != '\0'; i++)
    {
        char key = s[i];
        int j = i - 1;
        while (j >= 0 && s[j] > key)
        {
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = key;
    }

    printf("%s",s);
    return 0;
}