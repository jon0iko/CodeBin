#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char c;
        char s[100];
        int f =0;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                scanf("%c",&c);
                if (c!='*')
                {
                    s[f]=c;
                    f++;
                }
                
            }
            
        }

        printf("%s\n",s);
    }

    return 0;
}