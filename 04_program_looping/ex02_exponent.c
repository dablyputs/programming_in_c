// program to generate a table of n squared  where n = 1..10
#include <stdio.h>

int main (void){

    int exp, n;
    long long result = 1;

    printf("number     number squared\n");
    printf("---        ---------------\n");

    for ( n = 1; n <= 10; ++n){

        exp = 2;
        while (exp != 0){
            result *= n;
            --exp;
        }
        printf("%2i         %lld\n",n, result);
    }
}


