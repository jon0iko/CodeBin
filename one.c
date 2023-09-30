#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char a,b,c,d,e;
        scanf("\n%c%c%c%c",&a,&b,&c,&d);
        if((a=='o' && b=='n')||(b=='n' && c=='e')||(a=='o' && c=='e')){
            printf("1\n");
        }
        else if((a=='t' && b=='w' && d=='\n')||(b=='w' && c=='o' && d=='\n')||(a=='t' && c=='o' && d=='\n')){
            printf("2\n");
        }
        else {
            scanf("%c",&e);
            printf("3\n");
        }
        }
        return 0;
}