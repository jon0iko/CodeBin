#include<stdio.h>
typedef long long ll;

int main()
{
    double x,y;
    scanf("%lf %lf",&x,&y);
    if (x==0 && y==0)
    {
        printf("This point is in Origin\n");

    } else if (x == 0)
    {
        printf("This point is in Y-axis\n");
    } else if (y == 0)
    {
        printf("This point is in X-axis\n");
    } else if (x>0 && y>0)
    {
        printf("This point is in Region 1\n");
    } else if (x<0 && y>0)
    {
        printf("This point is in Region 2\n");
    } else if (x<0 && y<0)
    {
        printf("This point is in Region 3\n");
    } else if (x>0 && y<0)
    {
        printf("This point is in Region 4\n");
    } else
    {
        printf("Error\n");
    }
    
    return 0;
}