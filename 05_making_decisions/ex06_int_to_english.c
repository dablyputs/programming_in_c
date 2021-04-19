// Convert int to english

#include <stdio.h>

int main(void)
{

    int left_digit;
    double number;
    left_digit = 0;

    printf("Enter a number greater than 10: ");
    scanf("%lf", &number);

    while (number >= 10)
    {
        number = number / 10;
        printf("Number is now %lf\n", number);
    }
    while (number > 0)
    {
        left_digit = number;
        printf("left_digit is %i\n", left_digit);

        switch (left_digit)
        {
        case 0:
            printf("zero ");
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        default:
            break;
        }
        printf("\n(%lf * 10) - 10 =",number);
        number = (number * 10) - 10;
        printf(" %lf\n", number);
    }

    printf("\n");

    return 0;
}