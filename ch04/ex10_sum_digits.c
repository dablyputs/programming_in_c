#include <stdio.h>

int main (void){

    int number,right_digit, result;
    result = 0;

    printf("Enter a number large than 10 and I'll sum the digits: ");
    scanf("%i", &number);

    
    while ( number != 0 )
    {
        right_digit = number % 10;
        number = number / 10;
        result += right_digit;
    }
    printf("Result is %i\n", result);

    return 0;
}