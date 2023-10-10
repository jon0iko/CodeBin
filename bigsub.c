#include <stdio.h>
#include <string.h>
typedef long long int lli;

int main()
{
    char num1[100], num2[100],temp[100];

    scanf("%s", num1);
    scanf("%s", num2);

    int a = strlen(num1);
    int b = strlen(num2);

    char ans[100];

    int large = (a > b) ? a : b;

    if (large == b)
    {
        strcpy(temp,num1);
        strcpy(num1,num2);
        strcpy(num2,temp);
        int temp = a;
        a = b;
        b = temp;
    }

    ans[large + 1] = '\0';

    int borrow = 0;

    for (int i = 0; i < large; i++)
    {
        int digit1 = (i < a) ? (num1[a - 1 - i] - '0') : 0;
        int digit2 = (i < b) ? (num2[b - 1 - i] - '0') : 0;

        int s = digit1 - digit2 - borrow;

        borrow = (s < 0) ? 1 : 0;

        if (s<0)
        {
            s+=10;
        }
        

        ans[large - i] = s + '0';
    }

    if (borrow > 0)
    {
        ans[0] = borrow + '0';
        printf("%s", ans);
    }
    else
    {
        printf("%s", &ans[1]);
    }

    return 0;
}