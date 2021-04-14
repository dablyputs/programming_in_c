// Callculate triangular numbers between 5 and 50

#include <stdio.h>



int main (void) {
    
    int triangularNumber, n;
    n = 5;

    printf(" n       Triangular\n");
    printf("---      --------------\n");

    while (n <= 50)
    {
        triangularNumber = (n * (n +1) / 2);
        printf("%2i         %4i\n",n, triangularNumber);
        n += 5;
    }
    
}