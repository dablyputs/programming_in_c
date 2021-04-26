// Function to calculate the nth traingular number

#include <stdio.h>

int calculateTriangularNumber (int n)
{
    int i, triangularNumber = 0;

    for (i = 1; i <= n; ++i)
    {
        triangularNumber += i;
    }

    return triangularNumber;
    
}

int main(int argc, char const *argv[])
{
    
    printf("Triangular number %i is %i\n", 10, calculateTriangularNumber(10));
    printf("Triangular number %i is %i\n", 20, calculateTriangularNumber(20));
    printf("Triangular number %i is %i\n", 50, calculateTriangularNumber(50));

    return 0;
}
