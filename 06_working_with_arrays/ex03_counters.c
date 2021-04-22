#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, response, numRatings;
    

    printf("Enter the number of ratings you would like to capture: ");
    scanf("%i", &numRatings);

    int ratingCounters[numRatings];
    
    for (i = 1; i <= numRatings; ++i){
        ratingCounters[i]= 0;
    }

    printf("Enter your response: ");

    for (i = 1; i <= numRatings; ++i){
        scanf("%i", &response);

        if (response < 1 || response > 10){
            printf("Bad response: %i\n", response);
        } else {
            ++ratingCounters[response];
        }

    }

    printf("\n\nRating\tNumber of Responses\n");
    printf("-----\t-----------------------\n");

    for ( i = 1; i <= 10; ++i){
        printf("%4i%14i\n", i, ratingCounters[i]);
    }

    return 0;
}
