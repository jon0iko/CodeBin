#include <stdio.h>
typedef long long int lli;

int main()
{
    int A=0,B=0, a1,a2,a3,b1,b2,b3;
    scanf("%d %d %d", &a1,&a2,&a3);
    scanf("%d %d %d", &b1,&b2,&b3);
    if (a1>b1)
    {
        A++;
    }
    else if(a1<b1) {
        B++;
    }
    
    if (a2>b2)
    {
        A++;
    }
    else if(a2<b2){
        B++;
    }

    if (a3>b3)
    {
        A++;
    }
    else if(a3<b3){
        B++;
    }
    

    printf("%d %d\n",A,B);
    return 0;
}