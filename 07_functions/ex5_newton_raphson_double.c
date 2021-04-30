// Function to calculate the absolute value of a number

#include <stdio.h>

double absoluteValue(double x)
{
    if (x < 0)
    {
        x = -x;
    }
    return x;
}

double squareRoot(double x, const double epsilon)
{

    double guess = 1;
    double ratio = 2;

    while (ratio >= epsilon)
    {
        guess = (x / guess + guess) / 2.0;
        // This answer came from Brenda at Harvard CS50 on Reddit. Link in notes.
        ratio = absoluteValue(x / (guess * guess) - 1);
    }
    printf("\n");
    return guess;
}

int main(int argc, char const *argv[])
{
    printf("squareRoot(2.0) = %f\n", squareRoot(2.0, .0000005));
    printf("squareRoot(144.0) = %f\n", squareRoot(144.0, .000005));
    printf("squareRoot(17.5) = %f\n", squareRoot(17.5, 0.000005));
    printf("squareRoot(.01) = %f\n", squareRoot(.01, 0.000012));
    return 0;
}
