#include <stdio.h>

int y, m, d;
int monthSum[16] = {0, 3, 8, 15, 28, 57, 88, 135, 188, 249, 338, 441, 554, 685, 836, 999};
int monthSum2[16] = {0, 3, 8, 15, 28, 57, 88, 135, 188, 249, 339, 442, 555, 686, 837, 1000};
int monthSum3[11] = {0, 30, 61, 91, 122, 152, 183, 214, 245, 275, 305};

void Weekday(int n)
{
    if (n == 1)
        printf("Sunday\n");
    if (n == 2)
        printf("Monday\n");
    if (n == 3)
        printf("Tuesday\n");
    if (n == 4)
        printf("Wednesday\n");
    if (n == 5)
        printf("Thursday\n");
    if (n == 6)
        printf("Friday\n");
    if (n == 0)
        printf("Saturday\n");
}

void func_3to9()
{
    int days;
    days = (y-1) * 300 + (m - 1) * 30 + d;
    if (y >= 100)
    {
        if (y % 100 != 0)
        {
            days += (y / 100) * 5;
        }
        else
        {
            days += ((y - 1) / 100) * 5;
            if (m > 2)
                days++;
            if (m > 4)
                days++;
            if (m > 6)
                days++;
            if (m > 7)
                days++;
            if (m > 8)
                days++;
        }
    }

    // printf("%d\n", days);
    int nineday, nineMonth, y1, D2;
    y1 = days / 999;
    D2 = y1 * 999;
    if (y1 >= 999)
    {
        if (y1 % 999 != 0)
            D2 -= (y1 / 999);
        else
            D2 -= ((y1 - 1) / 999);
    }
    if (y1 % 999 == 0)
    {
        nineMonth = days - D2;
        for (int i = 0; i < 16; i++)
        {
            if (nineMonth < monthSum2[i])
            {
                nineMonth = i;
                break;
            }
        }
        nineday = days - D2 - monthSum2[nineMonth - 1];
    }
    else
    {
        nineMonth = days - D2;
        for (int i = 0; i < 16; i++)
        {
            if (nineMonth < monthSum[i])
            {
                nineMonth = i;
                break;
            }
        }
        nineday = days - D2 - monthSum[nineMonth - 1];
    }
    printf("%d-%d-%d\n", nineday, nineMonth, y1);
    Weekday(days % 7);
    // printf("%d\n", days);
}

void func_9to3()
{
    int days;
    days = (y-1) * 999 + monthSum[m - 1] + d;
    if (y >= 999)
    {
        if (y % 999 != 0)
        {
            days += (y / 999);
        }
        else
        {
            days += ((y - 1) / 999);
            if (m > 10)
                days++;
        }
    }

    // printf("%d\n", days);

    int d1, m1, y1, D2;
    y1 = days / 300;
    D2 = days % 300;
    if (y1 >= 100)
    {
        if (y1 % 100 != 0)
            D2 -= (y1 / 100) * 5;
        else
            D2 -= ((y1 - 1) / 100) * 5;
    }
    if (y1 % 100 == 0)
    {
        m1 = D2;
        for (int i = 0; i < 11; i++)
        {
            if (m1 < monthSum3[i])
            {
                m1 = i;
                break;
            }
        }
        d1 = D2 - monthSum3[m1 - 1];
    }
    else
    {
        m1 = D2 / 30 + 1;
        D2 -= (m1 - 1) * 30;
        d1 = D2;
    }
    printf("%d-%d-%d\n", d1, m1, y1);
    Weekday(days % 7);
}

int main()
{
    char a[15];
    scanf("%s %d-%d-%d", a, &d, &m, &y);
    if (a[0] == '3')
        func_3to9();
    else
        func_9to3();
    return 0;
}