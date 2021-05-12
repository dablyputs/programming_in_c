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

int getDaysDelta(struct date sDate1, struct date sDate2)
{
    int nDays1, nDays2, nDaysDelta;
    nDays1 = 1461 * getYear(sDate1.year, sDate1.month) / 4 + 153 * getMonth(sDate1.month) / 5 + sDate1.day;
    nDays2 = 1461 * getYear(sDate2.year, sDate2.month) / 4 + 153 * getMonth(sDate2.month) / 5 + sDate2.day;
    nDaysDelta = (nDays2 - nDays1);

    return nDaysDelta;
}

int main(void)
{
    struct date sStartDate, sEndDate;
    int nDelta;

    printf("Enter the first date ");
    scanf("%i%i%i", &sStartDate.month, &sStartDate.day, &sStartDate.year);
    printf("Enter the second date ");
    scanf("%i%i%i", &sEndDate.month, &sEndDate.day, &sEndDate.year);
    
    nDelta = getDaysDelta(sStartDate, sEndDate);
    
    printf("\nThe delta between %i/%i/%.2i and %i/%i/%.2i is %i days\n", 
            sStartDate.month, sStartDate.day, sStartDate.year, sEndDate.month, 
            sEndDate.day, sEndDate.year, nDelta);
    

    return 0;
}
