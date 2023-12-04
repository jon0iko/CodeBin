#include <bits/stdc++.h>
typedef long long int lli;


void reverse(char a[]) {
    int j = strlen(a)-1;

    for (int i = 0; i < j; i++,j--)
    {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    
}

int main()
{
    FILE *fp = fopen("in.txt", "r");
    FILE *fr = fopen("out.txt", "w");

    while (1)
    {
        char word[100],c;

        fscanf(fp, "%s", word);
        reverse(word);
        fprintf(fr, "%s", word);
        
        if ((c = fgetc(fp)) == EOF)
        {
            break;
        }
        else if (c == '\n')
        {
            fprintf(fr, "\n");
        }
        else
        {
            fprintf(fr, "%c", c);
        }
        

    }

    fclose(fp);
    fclose(fr);
    return 0;
}