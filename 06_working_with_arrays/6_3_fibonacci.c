// Program to generate the first 15 fibonacci numbers
#include <stdio.h>

int	main(int argc, char **argv)
{
    int Fibonacci[15], i;

    Fibonacci[0] = 0; // by definition
    Fibonacci[1] = 1; // ""

    for (i = 2; i < 15; ++i){
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
    }

    for (i = 0; i < 15 ;++i)
    {
        printf("%i\n", Fibonacci[i]);
    }
    
    return 0;
}
