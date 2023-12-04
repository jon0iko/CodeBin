#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
void timeDifference(struct Time t1, struct Time t2, struct Time *diff) {
    int seconds1, seconds2, totalSeconds;

    // Calculate total seconds for each time period
    seconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    seconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    // Calculate the absolute difference in seconds
    totalSeconds = seconds1 > seconds2 ? seconds1 - seconds2 : seconds2 - seconds1;

    // Convert totalSeconds back to hours, minutes, seconds
    diff->hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    diff->minutes = totalSeconds / 60;
    diff->seconds = totalSeconds % 60;
}

int main() {
    struct Time time1, time2, difference;

    // Input for the first time period
    scanf("%d-%d-%d", &time1.hours, &time1.minutes, &time1.seconds);

    // Input for the second time period
    scanf("%d-%d-%d", &time2.hours, &time2.minutes, &time2.seconds);

    // Calculate the difference between the two time periods
    timeDifference(time1, time2, &difference);

    // Displaying the difference
    printf("Time difference: %d hours, %d minutes, %d seconds\n",
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}