#include <stdio.h>
#include <math.h>

#define int long long
// char type[20], dum;
int type, dd, mm, yy, days, d, m, y, cnt;
int t300p[] = {30, 31, 30, 31, 30, 31, 31, 31, 30, 30};
int t300[] = {30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
int t999[] = {3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};
char baar[][15] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int monthday(int m, int y, char type)
{
    if (type == '3')
    {
        if (y % 100)
            return 30;
        else
            return t300p[m - 1];
    }
    else
    {
        if (m == 10 && y % 999)
            return 89;
        else if (m == 10)
            return 90;
        else
            return t999[m - 1];
    }
    return 0;
}

int totalday(int d, int m, int y)
{
    int day = 0;
    if (type == 300) // 300 days
    {
        day += (y - 1) * 300;

        day += 5 * ((y - 1) / 100);

        for (int i = 1; i < m; i++)
            day += monthday(i, y, '3');

        day += d;
        printf("%lld\n",day);
    }
    else // 999 days
    {
        day += (y - 1) * 999;

        day += (y - 1) / 999;

        for (int i = 1; i < m; i++)
            day += monthday(i, y, '9');

        day += d;
    }
    return day - 1;
}


int main()
{

    scanf("%llddaysAYear %lld-%lld-%lld", &type, &dd, &mm, &yy);
    days = totalday(dd, mm, yy);
    cnt = days;
    int bar = days % 7;
    // printf("%lld", days);
    // return 0;
    if (type == 300) // converting 300 to 999
    {
        cnt -= days / (999 * 999 + 1);
        y = cnt / 999;
        cnt %= 999;
        for (d = 1, m = 1; cnt; cnt--)
        {
            d++;
            if (d > monthday(m, y + 1, '9'))
            {
                d = 1;
                m++;
            }
        }
        // fixing
        type = 999;
        if (days < totalday(d, m, y + 1))
        {
            while (days != totalday(d, m, y + 1))
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
                    d = monthday(m, y, '9');
            }
        }
        else if (days > totalday(d, m, y + 1))
        {
            while (days != totalday(d, m, y + 1))
            {
                d++;
                if (d > monthday(m, y, '9'))
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
    }

    else // 999 to 300
    {

        cnt -= 5 * (days / (100 * 300 + 5));

        y = cnt / 300;
        cnt %= 300;

        for (d = 1, m = 1; cnt; cnt--)
        {
            d++;
            if (d > monthday(m, y + 1, '3'))
            {
                d = 1;
                m++;
            }
        }
        type = 300;
        // fixing
        if (days < totalday(d, m, y + 1))
        {
            while (days != totalday(d, m, y + 1))
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
                    d = monthday(m, y, '3');
            }
        }
        else if (days > totalday(d, m, y + 1))
        {
            while (days != totalday(d, m, y + 1))
            {
                d++;
                if (d > monthday(m, y, '3'))
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
    }

    printf("%lld-%lld-%lld\n", d, m, y);
    // printWeekDay(weekday);
    printf("%s\n", baar[bar]);
    return 0;
} // change