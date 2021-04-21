// Program to generate the first 15 fibonacci numbers
#include <stdio.h>

int	main(int argc, char **argv)
{
    int Fibonacci,FibonacciOne, FibonacciTwo, i;
    
    Fibonacci = 0;
    FibonacciOne = 0; // by definition
    FibonacciTwo = 1; // ""

    for (i = 2; i < 15; ++i){
        Fibonacci = (FibonacciOne + FibonacciTwo);
        FibonacciOne = FibonacciTwo;
        FibonacciTwo = Fibonacci;
        printf("%i\n", Fibonacci);
    }
    
    return 0;
}
