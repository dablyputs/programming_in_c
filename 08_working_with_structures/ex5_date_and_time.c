#include <stdio.h>
#include <stdbool.h>

/** 
 * Use dateUpdate and timeUpdate to increment days,
 * months, years, hours, minutes and seconds of 
 * dateAndTime struct.
 */
struct dateAndTime
{
    int seconds;
    int minutes;
    int hour;
    int day;
    int month;
    int year;
};

/** 
 * If it's one second before midnight then give me tomorrow
 * otherwise just give me the next second. 
 */
struct dateAndTime clockKeeper(struct dateAndTime nowToday)
{
    struct dateAndTime nextTomorrow;
    struct dateAndTime dateUpdate(struct dateAndTime dateAndTimeStruct);
    struct dateAndTime timeUpdate(struct dateAndTime dateAndTimeStruct);
    // If it's midnight then call dateUpdate()
    if (nowToday.hour == 23 && nowToday.minutes == 59 && nowToday.seconds == 59)
    {
        nextTomorrow = dateUpdate(nowToday);
        nextTomorrow.hour = 00;
        nextTomorrow.minutes = 00;
        nextTomorrow.seconds = 00;
    }
    else
    { // Otherwise just update the time
        nextTomorrow = timeUpdate(nowToday);
    }

    return nextTomorrow;
}

// Update just the time part of the struct
struct dateAndTime timeUpdate(struct dateAndTime now)
{
    ++now.seconds;

    if (now.seconds == 60)
    { // next minute
        now.seconds = 0;
        ++now.minutes;

        if (now.minutes == 60)
        { // next hour
            now.minutes = 0;
            ++now.hour;

            if (now.hour == 24)
            { // midnight
                now.hour = 0;
            }
        }
    }

    return now;
}

// Function to calculate tomorrow's date
struct dateAndTime dateUpdate(struct dateAndTime today)
{
    struct dateAndTime tomorrow;
    int numberOfDays(struct dateAndTime d);

    if (today.day != numberOfDays(today))
    {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if (today.month == 12) // end of year
    {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else // end of month
    {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    return tomorrow;
}

// Function ton find the number of days in a month
int numberOfDays(struct dateAndTime d)
{
    int days;
    bool isLeapYear(struct dateAndTime d);
    const int daysPerMonth[12] =
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(d) && d.month == 2)
    {
        days = 29;
    }
    else
    {
        days = daysPerMonth[d.month - 1];
    }

    return days;
}

// Function to determine if it's a leap year
bool isLeapYear(struct dateAndTime d)
{
    bool leapYearFlag;

    if ((d.year % 4 == 0 && d.year % 100 != 0) ||
        d.year % 400 == 0)
    {
        leapYearFlag = true; // IT's a leap year
    }
    else
    {
        leapYearFlag = false; // Not a leap year
    }

    return leapYearFlag;
}

int main(void)
{
    struct dateAndTime currentTime, nextTime;

    printf("Enter the date and time (m/d/y hh:mm:ss): ");
    scanf("%i/%i/%i %i:%i:%i",
          &currentTime.month,
          &currentTime.day,
          &currentTime.year,
          &currentTime.hour,
          &currentTime.minutes,
          &currentTime.seconds);

    nextTime = clockKeeper(currentTime);

    printf("Updated date and time is %i/%i/%.2i %.2i:%.2i:%.2i\n",
           nextTime.month,
           nextTime.day,
           nextTime.year,
           nextTime.hour,
           nextTime.minutes,
           nextTime.seconds);

    return 0;
}