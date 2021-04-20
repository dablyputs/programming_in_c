// Convert int to english

#include <stdio.h>

int main(void)
{

    int num, digit;
    int reversed = 0, backupZero = 0;

    printf("Enter a number greater than 10: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("zero"); // In case the input is just "0"
    }

    while (num > 0)
    { // Loop to reverse the integer
        digit = num % 10;
        reversed = (reversed * 10) + digit;
        if ((reversed == 0) && (digit == 0))
        {
            ++backupZero; // Use this to add extra zeroes later
        }

        num /= 10;
    }

    while (reversed)
    {
        digit = reversed % 10;
        reversed /= 10;

        switch (digit)
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
    }

    while (backupZero > 0)
    {
        printf("zero "); // Prints the extra zeroes at the end
        --backupZero;
    }

    printf("\n");

    return 0;
}