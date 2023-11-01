#include<stdio.h>

int main()
{
    int a[]={10, 9, 8, 7, 2, 4, 3, 1, 6};

    int min_ind;
    for(int i=0; i<10; i++)
    {
        min_ind=i;
        for(int j=i+1; j<10; j++)
        {
            if(a[j]<a[min_ind])
            min_ind=j;
        }
        if(min_ind!=i)
        {
            int temp=a[min_ind];
            a[min_ind]=a[i];
            a[i]=temp;
        }
    }    
    // for(int i=1; i<10; i++)
    // {
    //     int key=a[i];
    //     int j=i-1;
    //     while(a[j]>key && j>=0)
    //     {
    //         a[j+1]=a[j];
    //         j--;
    //     }
    //     a[j+1]=key;
    // }
    for(int i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}








// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     ((n%400==0) || (n%4==0 && n%100!=0)) ? printf("Leap year\n") : printf("Not leap year\n");

//     return 0;
// }