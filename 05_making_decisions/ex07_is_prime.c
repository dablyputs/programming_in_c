// Program to generate a table of prime numbers.

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int p, d;
    bool isPrime;
     
     for (p = 2; p <= 50; ++p)
     {
         isPrime = 1;
         if ((p %2) == 0) continue;

         for ( d = 2; d < p && isPrime == 1; ++d)
         {
             if ( p % d == 0){
                 isPrime = 0;
             }
        }

        if (isPrime != 0){
            printf("%i ", p);
        }
         
    }

    printf("\n"); 
    return 0;
}
