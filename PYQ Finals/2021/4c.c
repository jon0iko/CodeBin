#include <stdio.h>
typedef long long int lli;

int checker(int map[])
{
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (map[i] > 1)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char s[100];
    int map[26] = {0};
    char unique[26];
    scanf("%s", s);
    int k = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        int letter = s[i] - 'a';
        if (checker(map))
        {
            if (map[letter] > 0 && (unique[2] == s[i]))
            {
                printf("%c\n", s[i], i);
                break;
            }
        }
        else
        {
            if (map[letter] == 0)
            {
                unique[k++] = s[i];
                map[letter]++;
            }
            else {
                map[letter]++;
            }
            
            
        }
    }

   for (int i = 0; i < 26; i++)
   {
        printf("%d ", map[i]);
   }
   printf("\n");
   for (int i = 0; i < 10; i++)
   {
    printf("%c ", unique[i]);
   }
   
   

    return 0;
}