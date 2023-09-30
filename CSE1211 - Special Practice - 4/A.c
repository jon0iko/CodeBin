#include <stdio.h>
typedef long long int lli;

int hextoDec(int n) {
    int temp,result=0,pwr=1;
    while (n>0)
    {
        temp = n%10;
        result+=(temp*pwr);
        pwr*=16;
        n/=10;
    }
    return result;
}


int countOnes(int n, int counter) {
    int temp;
    while (n>0)
        {
            temp = n%2;
            n/=2;
            if (temp==1)
            {
                counter++;
            }
            
        }
        return counter;
}


int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,b1=0,b2=0,temp,hex;
        scanf("%d", &n);
        hex = hextoDec(n);
        
        printf("%d %d\n",countOnes(n,b1),countOnes(hex,b2));
    }
    
    return 0;
}