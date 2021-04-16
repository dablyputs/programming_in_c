// A simple calculator

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    float accumulator, number;
    char operator;
    bool quit = 0;

    printf("Begin Calculations\n");
    while (quit == 0)
    {
        printf("+ - * / S E\n");
        scanf("%f %c", &number, &operator);
        switch (operator)
        {
        case 'S':
            accumulator = number;
            printf("%.5f\n", accumulator);
            break;
        case '+':
            printf("%.5f + %.5f = %.5f\n", number, accumulator, (number + accumulator));
            accumulator = (number + accumulator);
            break;
        case '-':
            printf("%.5f - %.5f = %.5f\n", accumulator, number, (accumulator - number));
            accumulator = (accumulator - number);
            break;
        case '*':
            printf("%.5f * %.5f = %.5f\n", accumulator, number, (accumulator * number));
            accumulator = (number * accumulator);
            break;
        case '/':
            if (number == 0)
            {
                printf("Division by zero\n");
            }
            else
            {
                printf("%.5f / %.5f = %.5f\n", accumulator, number, (accumulator / number));
                accumulator = (accumulator / number);
            }
            break;
        case 'E':
            quit = 1;
            break;

        default:
            quit = 1;
            break;
        }

        number = 0;
        operator= '0';
    }

    return 0;
}
