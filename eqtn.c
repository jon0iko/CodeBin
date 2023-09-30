#include <stdio.h>
typedef long long int lli;

double findroot(int a, int b,int c,int d){
    double x;
    double eqn = a*x*x*x+b*x*x+c*x+d;
    while (1)
    {
        int i=-100;
        double p,q;
        x=i;
        if (eqn<0)
        {
            p=i;
            break;
        }

        if (eqn>0)
        {
            /* code */
        }
        
    }
    
    

}

int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    findroot(a,b,c,d);
    return 0;
}