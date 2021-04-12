// Program to generate a table of triangular numbers

#include <stdio.h>

int main()
{
    int n, triangularNumber;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf("n   Sum from 1 to n\n");
    printf("--- ---------------");

    triangularNumber = 0;

    for (n = 1; n <= 10; ++n)
    {
        triangularNumber += n;
        printf("%2i         %i\n", n, triangularNumber);
    }

    return 0;
    
}