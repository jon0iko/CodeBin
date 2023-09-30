#include <stdio.h>
typedef long long ll;

int main()
{
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }else if (b>c) 
    {
        temp=b;
        b=c;
        c=temp;
    }else if (a>c) 
    {
        temp=a;
        a=c;
        c=temp;
    }
    
    printf("minimum = %d\n",a);
    printf("maximum = %d\n",c);
    printf("median = %d\n",b);
    return 0;
}