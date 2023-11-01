#include <stdio.h>
typedef long long int lli;

void threeyear(int day, int month, int year)
{
    

    int days = day + (month - 1) * 30 + year * 300;

    if (year>=100)
    {
        if (year%100!=0)
        {
            int extraDays = (year / 100)*5;
            days += extraDays;
        }
        else{
            int extraDays = ((year-1) / 100)*5;
            days+=extraDays;
            if (month>2)
            {
                days++;
            }
            if (month>4)
            {
                days++;
            }
            if (month>6)
            {
                days++;
            }
            if (month>7)
            {
                days++;
            }
            if (month>8)
            {
                days++;
            }
            
        }
    }
    

    printf("%d\n",days);
    int nineYear = days / 999;

    int ninemonth, ninedays;

    int remaining = days % 999;

    int monthdaysNine[16];

    if ((nineYear % 999)==0)
    {
        int temp[] = {0, 3, 5, 7, 13, 29, 31, 47, 53, 61, 90, 103, 113, 131, 151, 163};
        for (int i = 0; i < 16; i++)
        {
            monthdaysNine[i] = temp[i];
        }
    }
    else
    {
        int temp[] = {0, 3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};
        for (int i = 0; i < 16; i++)
        {
            monthdaysNine[i] = temp[i];
        }
    }

    int d = 0;
    for (int i = 1; i <= 15; i++)
    {
        d += monthdaysNine[i];

        if ((d) >= remaining)
        {
            ninemonth = i;
            d -= monthdaysNine[i];
            break;
        }
    }

    ninedays = remaining - d;

    printf("%d-%d-%d\n", ninedays, ninemonth, nineYear);

    int wday = days % 7;

    switch (wday)
    {
    case 0:
        printf("Saturday\n");
        break;
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    default:
        break;
    }
}

void nineYear(int day, int month, int year)
{
    int millenium = year / 999;
    int monthdaysNine[16] = {0, 3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};

    int mdays = 0;

    for (int i = 1; i <= month - 1; i++)
    {
        mdays += monthdaysNine[i];
    }

    int days = year * 999 + mdays + day;

    if (year >= 999)
    {
        if (year % 999 != 0)
        {
            days += (year / 999);
        }
        else
        {
            days += ((year - 1) / 999);
            if (month > 10)
                days++;
        }
    }
    printf("%d\n",days);


    int threeYear, threemonth, threeDays;
    threeYear = days / 300;

    int d2 = days % 300;

    int month3[11] = {0, 30, 61, 91, 122, 152, 183, 214, 245, 275, 305};

    if (threeYear >= 100)
    {
        if (threeYear % 100 != 0)
            d2 -= (threeYear / 100) * 5;
        else
            d2 -= ((threeYear - 1) / 100) * 5;
    }
    if (threeYear % 100 == 0)
    {
        threemonth = d2;
        for (int i = 0; i < 11; i++)
        {
            if (threemonth < month3[i])
            {
                threemonth = i;
                break;
            }
        }
        threeDays = d2 - month3[threemonth - 1];
    }
    else
    {
        threemonth = d2 / 30 + 1;
        d2 -= (threemonth - 1) * 30;
        threeDays = d2;
    }
    printf("%d-%d-%d\n", threeDays, threemonth, threeYear);
    
}

int main()
{
    char s[50];
    int day, month, year;
    scanf("%s", s);
    scanf("%d-%d-%d", &day, &month, &year);

    if (s[0] == '3')
    {
        threeyear(day, month, year);
    }
    else
    {
        nineYear(day, month, year);
    }

    return 0;
}