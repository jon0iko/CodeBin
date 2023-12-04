#include <stdio.h>

typedef struct
{
    int month;
    int day;
    int year;
} Date;

// Function to check if a year is a leap year
int isLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// Function to calculate the difference between two dates in days
int dateDifference(Date date1, Date date2)
{
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int days1 = date1.year * 365 + date1.day;
    for (int i = 1; i < date1.month; i++)
    {
        days1 += daysInMonth[i];
    }
    days1 += (date1.month > 2 && isLeapYear(date1.year));

    int days2 = date2.year * 365 + date2.day;
    for (int i = 1; i < date2.month; i++)
    {
        days2 += daysInMonth[i];
    }
    days2 += (date2.month > 2 && isLeapYear(date2.year));

    // printf("%d %d\n", days1, days2);

    return (days1 > days2) ? (days1 - days2) : (days2 - days1);
}

int main()
{
    Date date1, date2; //= {9, 20, 2023}; // First date (month, day, year)
                       //  struct Date  = {9, 15, 2023}; // Second date (month, day, year)
    scanf("%d-%d-%d", &date1.day, &date1.month, &date1.year);
    scanf("%d-%d-%d", &date2.day, &date2.month, &date2.year);

    int difference = dateDifference(date1, date2);

    printf("Difference between the dates: %d days\n", difference);

    return 0;
}