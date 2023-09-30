#include<stdio.h>
#include<math.h>

int main(){
    int N,i;
    float R,length=0,a,b,x1,y1,pi,f1,f2,l1,l2,last;

    scanf("%d %f",&N,&R);

    for(i=1;i<=N;i++){

        scanf("%f %f",&a,&b);

        if(i==1){
            f1=a;
            f2=b;
        }
        if(i==N){
            l1=a;
            l2=b;
        }

        if(i>1){
        length+=sqrt(pow(x1-a,2)+pow(y1-b,2));
        }
        x1=a;
        y1=b;



    }

    pi=acos(-1);

    last=sqrt(pow(f1-l1,2)+pow(f2-l2,2));

    printf("%0.2f",length+last+2*pi*R);

}


