// Program to reverse the digits of a number

#include <stdio.h>

int main (void){

    int number, right_digit;

    printf("Enter your number: ");
    scanf("%i", &number);

    // If negative convert to positive and prepend '-' to output
    if (number < 0){ 
        number = number * -1;
        printf("-");
    }


    while ( number != 0 )
    {
        if ( number < 0){}
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }

    printf ("\n");

    return 0;
    
}