#include <stdio.h>
typedef long long int lli;

typedef struct book
{
    int id;
    char title[30];
    char genre[30];
    char author[30];
    int year;
}book;


int samestring(char a[], char b[]) {
    int i=0;
    while (a[i]!='\0')
    {
        if (a[i]!=b[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}


void print(book a) {
    printf("%d %s %s %s %d\n",a.id,a.title,a.genre,a.author,a.year);
}

int main()
{
    int n;
    scanf("%d", &n);
    book books[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %s %s %d", &books[i].id, books[i].title, books[i].genre, books[i].author, &books[i].year);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (books[j].id > books[j+1].id)
            {
                book temp = books[j];
                books[j] = books[j+1];
                books[j+1] = temp;
            }
            
        }
        
    }
    

    int t;
    scanf("%d", &t);
    
    while (t--)
    {
        int a;
        scanf("%d", &a);

        if (a==1)
        {
            char g[30];
            scanf("%s", g);
            for (int i = 0; i < n; i++)
            {
                if (samestring(g, books[i].genre))
                {
                    print(books[i]);
                }
                
            }
            
        }
        else {
            int y;
            scanf("%d", &y);

            for (int i = 0; i < n; i++)
            {
                if (y == books[i].year)
                {
                    print(books[i]);
                }
                
            }
            
        }
    }
    

    return 0;
}