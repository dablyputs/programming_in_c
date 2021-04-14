// A simple calculator

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    float accumulator, number;
    char operator;
    bool quit = 0;

    printf("Begin Calculations\n;");
    while (quit == 0){
        printf("+ - * / S E\n");
        scanf("%f %c", &number, &operator);
        switch (operator)
        {
        case 'S' :
            accumulator = number;
            printf("%.5f\n", accumulator);
            number = 0;
            operator = '0';
            break;
        case 'E' :
            quit = 1;
            break;
        
        default:
            quit = 1;
            break;
        }
    }

    return 0;
}
