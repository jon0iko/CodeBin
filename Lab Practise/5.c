#include <stdio.h>
typedef long long ll;

int main()
{
    int n,flag=0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n / 1000 == 0)
        {
            if (n / 100 == 0)
            {
                if (n / 10 == 0)
                {
                    if (n == 1)
                    {
                        printf("one\n");
                        n -= 1;
                    }
                    if (n == 2)
                    {
                        printf("two\n");
                        n -= 2;
                    }
                    if (n == 3)
                    {
                        printf("three\n");
                        n -= 3;
                    }
                    if (n == 4)
                    {
                        printf("four\n");
                        n -= 4;
                    }
                    if (n == 5)
                    {
                        printf("five\n");
                        n -= 5;
                    }
                    if (n == 6)
                    {
                        printf("one\n");
                        n -= 6;
                    }
                    if (n == 7)
                    {
                        printf("seven\n");
                        n -= 7;
                    }
                    if (n == 8)
                    {
                        printf("eight\n");
                        n -= 8;
                    }
                    if (n == 9)
                    {
                        printf("nine\n");
                        n -= 9;
                    }
                }

                if (n / 10 == 1)
                {
                    if (n == 11)
                    {
                        printf("eleven\n");
                        n -= 11;
                    }
                    if (n == 12)
                    {
                        printf("twelve\n");
                        n -= 12;
                    }
                    if (n == 13)
                    {
                        printf("thirteen\n");
                        n -= 13;
                    }
                    if (n == 14)
                    {
                        printf("fourteen\n");
                        n -= 14;
                    }
                    if (n == 15)
                    {
                        printf("fifteen\n");
                        n -= 15;
                    }
                    if (n == 16)
                    {
                        printf("sixteen\n");
                        n -= 16;
                    }
                    if (n == 17)
                    {
                        printf("seventeen\n");
                        n -= 17;
                    }
                    if (n == 18)
                    {
                        printf("eighteen\n");
                        n -= 18;
                    }
                    if (n == 19)
                    {
                        printf("nineteen\n");
                        n -= 19;
                    }
                }

                if (n/10==2)
                {
                    printf("Twenty ");
                    n-=20;
                }

                if (n/10==3)
                {
                    printf("Thirty ");
                    n-=30;
                }
                
                if (n/10==4)
                {
                    printf("Forty ");
                    n-=40;
                }

                if (n/10==5)
                {
                    printf("Fifty ");
                    n-=50;
                }

                if (n/10==6)
                {
                    printf("Sixty ");
                    n-=60;
                }

                if (n/10==7)
                {
                    printf("Seventy ");
                    n-=70;
                }
                
                if (n/10==8)
                {
                    printf("Eighty ");
                    n-=80;
                }

                if (n/10==9)
                {
                    printf("Ninety ");
                    n-=90;
                }
            }

            if (n/100==1)
            {
                printf("One Hundred ");
                n-=100;
            }
            
            if (n/100==2)
            {
                printf("Two Hundred ");
                n-=200;
            }

            if (n/100==3)
            {
                printf("Three Hundred ");
                n-=300;
            }

            if (n/100==4)
            {
                printf("Four Hundred ");
                n-=400;
            }

            if (n/100==5)
            {
                printf("Five Hundred ");
                n-=500;
            }

            if (n/100==6)
            {
                printf("Six Hundred ");
                n-=600;
            }

            if (n/100==7)
            {
                printf("Seven Hundred ");
                n-=700;
            }

            if (n/100==8)
            {
                printf("Eight Hundred ");
                n-=800;
            }

            if (n/100==9)
            {
                printf("Nine Hundred ");
                n-=900;
            }
        }
    }
    return 0;
}