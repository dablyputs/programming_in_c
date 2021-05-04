// Return 1 if a number is prime

#include <stdio.h>

int prime(int a)
{
    int i;

    for (i = 2;i < a; ++i)
    {
        if (a % i == 0)
        {
            return 0;
        } else {
            return 1;
        }
    }
}

int main(void)
{
    int i = 1;
    while (i <= 50){
        if (prime(i)){
            printf("%i is prime\n", i);
        } else {
            printf("%i is not prime\n", i);
        }
        ++i;
    }
    return 0;
}
