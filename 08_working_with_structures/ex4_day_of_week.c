/* Function to calculate the number of 
elapsed days between two dates */

#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

// In the spec this is called f(year, month)
int getYear(int year, int month)
{
    if (month <= 2)
    {
        year -= 1;
    }

    return year;
}

// in the spec this is called g(month)
int getMonth(int month)
{
    if (month <= 2)
    {
        month += 13;
    }
    else
    {
        month += 1;
    }

    return month;
}

int getDayOfWeek(struct date sDate)
{
    int nDays, dayWeek;
    nDays = 1461 * getYear(sDate.year, sDate.month) / 4 + 153 * getMonth(sDate.month) / 5 + sDate.day;
    dayWeek = (nDays - 621049) % 7;

    switch (dayWeek)
    {
    case 0:
        printf("Sunday\n");
        break;
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    default:
        printf("No Day. Something went wrong\n");
        break;
    }

    return 0;
}

int main(void)
{
    struct date sDate;

    printf("Enter the date and I'll fetch the day of the week: ");
    scanf("%i%i%i", &sDate.month, &sDate.day, &sDate.year);
    printf("%i/%i/%i was a ", sDate.month, sDate.day, sDate.year);
    getDayOfWeek(sDate);

    return 0;
}
