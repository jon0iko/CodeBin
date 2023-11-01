#include <stdio.h>
#define ll long long 

ll nineMonth[] = {3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};
ll nineMonthSpecial[] = {3, 5, 7, 13, 29, 31, 47, 53, 61, 90, 103, 113, 131, 151, 163};
ll threeMonth[] = {30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
ll threeMonthSpecial[] = {30, 31, 30, 31, 30, 31, 31, 31, 30, 30};


void kibar(ll n)
{
    if (n==0)
    {
        printf("Sunday\n");
    }
    else if (n==1)
    {
        printf("Monday\n");
    }
    else if (n==2)
    {
        printf("Tuesday\n");
    }
    else if (n==3)
    {
        printf("Wednesday\n");
    }
    else if (n==4)
    {
        printf("Thursday\n");
    }
    else if (n==5)
    {
        printf("Friday\n");
    }
    else if (n==6)
    {
        printf("Saturday\n");
    }
}

ll d,m,y,format,cnt,days;


ll monthCalculation(ll m, ll y, char format)
{
    if (format == '3')
    {
        if ((y % 100)!=0)
            return 30;
        else
            return threeMonthSpecial[m - 1];
    }
    else
    {
        if (m == 10 && y % 999)
            return 89;
        else if (m == 10)
            return 90;
        else
            return nineMonth[m - 1];
    }
    return 0;
}

ll dayCalculation(ll d, ll m, ll y)
{
    ll day = 0;
    if (format == 300) 
    {
        day += (y - 1) * 300;

        day += 5 * ((y - 1) / 100);

        for (ll i = 1; i < m; i++)
            day += monthCalculation(i, y, '3');

        day += d;

    }
    else 
    {
        day += (y - 1) * 999;

        day += (y - 1) / 999;

        for (ll i = 1; i < m; i++)
            day += monthCalculation(i, y, '9');

        day += d;
    }
    return day - 1;
}

void formatThree()
{
    format = 300;
    days = dayCalculation(d, m, y);
    cnt = days;
    ll shoptahoDin = days % 7;
    cnt -= days / (999 * 999 + 1);
    y = cnt / 999;
    cnt %= 999;
    for (d = 1, m = 1; cnt; cnt--)
    {
        d++;
        if (d > monthCalculation(m, y + 1, '9'))
        {
            d = 1;
            m++;
        }
    }
   
    format = 999;
    if (days < dayCalculation(d, m, y + 1))
    {
        while (days != dayCalculation(d, m, y + 1))
        {
            d--;
            if (!d)
                m--;
            if (!m)
            {
                y--;
                m = 15;
            }
            if (!d)
                d = monthCalculation(m, y, '9');
        }
    }
    else if (days > dayCalculation(d, m, y + 1))
    {
        while (days != dayCalculation(d, m, y + 1))
        {
            d++;
            if (d > monthCalculation(m, y, '9'))
            {
                d = 1;
                m++;
            }
            if (m > 15)
            {
                m = 1;
                y++;
            }
        }
    }

    printf("%lld-%lld-%lld\n", d, m, y);
    kibar(shoptahoDin);
}
void formatNine()
{
    format = 999;
    days = dayCalculation(d, m, y);
    cnt = days;
    ll shoptahoDin = days % 7;
    cnt -= 5 * (days / (100 * 300 + 5));

    y = cnt / 300;
    cnt %= 300;

    for (d = 1, m = 1; cnt; cnt--)
    {
        d++;
        if (d > monthCalculation(m, y + 1, '3'))
        {
            d = 1;
            m++;
        }
    }
    format = 300;
    if (days < dayCalculation(d, m, y + 1))
    {
        while (days != dayCalculation(d, m, y + 1))
        {
            d--;
            if (!d)
                m--;
            if (!m)
            {
                y--;
                m = 10;
            }
            if (!d)
                d = monthCalculation(m, y, '3');
        }
    }
    else if (days > dayCalculation(d, m, y + 1))
    {
        while (days != dayCalculation(d, m, y + 1))
        {
            d++;
            if (d > monthCalculation(m, y, '3'))
            {
                d = 1;
                m++;
            }
            if (m > 10)
            {
                m = 1;
                y++;
            }
        }
    }
    printf("%lld-%lld-%lld\n", d, m, y);
    kibar(shoptahoDin);
}

int main()
{
    scanf("%llddaysAYear %lld-%lld-%lld", &format, &d, &m, &y);

    if (format == 300) {
        formatThree();
    }
    else {
        formatNine();
    }

    return 0;
}