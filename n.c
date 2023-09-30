#include<stdio.h>
typedef long long ll;

int main()
{
    char c;
    while((scanf("%c",&c))!='.'){
        if(c==' ' || c=='.'){
            printf("\n");
        }else{
            printf("%c",c);
        }
    }
    return 0;
}