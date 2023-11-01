//23
#include <stdio.h>

int main() {

    int x,y;
    scanf("%d %d",&x,&y);

    if (x>0 && y>0)
    {
        printf("Quadrant - 1\n");
    }
    else if (x<0 && y>0)
    {
        printf("Quadrant - 2\n");
    }
    else if (x<0 && y<0)
    {
        printf("Quadrant - 3\n");
    }
    else if (x>0 && y<0)
    {
        printf("Quadrant - 4\n");
    }
    else if (x==0 && y==0)
    {
        printf("Origin\n");
    }
    else if (x!=0 && y==0)
    {
        printf("Axis - X\n");
    }
    else if (y!=0 && x==0)
    {
        printf("Axis - Y\n");
    }

    return 0;
}