#include <stdio.h>
#include <stdbool.h>

// Modified program to generate prime numbers

int	main(int argc, char **argv)
{
    
    int p, i, primes[50], primeIndex = 2;
    bool isPrime;

    primes[0] = 2;
    primes[1] = 3;

    for (int p = 5; p <= 50; p += 2)
    {
        isPrime = true;

        for (int i = 1; isPrime && p / primes[i] >= primes[i]; ++i){
            if ( p % primes[i] == 0){
                isPrime = false;
            }
        }
        
        if(isPrime == true){
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }
    
    for ( i = 0; i < primeIndex; ++i)
    {
        printf("%i  ", primes[i]);
    }
    printf("\n");

    return 0;
}
