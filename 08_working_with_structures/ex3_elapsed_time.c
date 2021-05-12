// Calculate the delta between two times given in h:m:s
#include <stdio.h>

struct time
{
    int seconds;
    int minutes;
    int hours;
};

struct time elapsedTime(struct time sTime1, struct time sTime2)
{
    struct time sTimeDelta;
    int nSecondsStart, nSecondsEnd, nTotalSeconds;
    
    nSecondsStart = (sTime1.hours * 3600) + (sTime1.minutes * 60) + sTime1.seconds;
    nSecondsEnd = (sTime2.hours * 3600)  + (sTime2.minutes * 60) + sTime2.seconds;
    nTotalSeconds = nSecondsEnd - nSecondsStart;
    sTimeDelta.hours = (nTotalSeconds / 3600);
    nTotalSeconds -= (sTimeDelta.hours * 3600);
    sTimeDelta.minutes = (nTotalSeconds / 60);
    nTotalSeconds -= (sTimeDelta.minutes * 60);
    sTimeDelta.seconds = nTotalSeconds;

    return sTimeDelta;
}

int main(void)
{
    struct time sStartTime, sEndTime, sDeltaTime;

    printf("Enter the first time hh:mm:ss ");
    scanf("%i:%i:%i", &sStartTime.hours, &sStartTime.minutes, &sStartTime.seconds);

    printf("Enter the second time hh:mm:ss ");
    scanf("%i:%i:%i", &sEndTime.hours, &sEndTime.minutes, &sEndTime.seconds);

    sDeltaTime = elapsedTime(sStartTime, sEndTime);

    printf("That's a difference of %i hours, %i minutes and %i seconds\n", 
            sDeltaTime.hours, sDeltaTime.minutes, sDeltaTime.seconds);

    return 0;
}
