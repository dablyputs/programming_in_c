#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int p, i;
    const int count = 100000;
    int prime[count];

    for (p = 2; p < count; p++)
    {
        prime[p] = 1;
    }

    for (p = 2; p * p <= count; p++)
    {
        if (prime[p])
        {
            for (i = p * p; i < count; i += p)
            {
                printf("Eliminating %i\n", i);
                prime[i] = 0;
            }   
        }
    }

    for (i = 2; i < count; i++)
    {
        if (prime[i])
        {
            printf("%i ", i);
        }
        
    }

    printf("\n");
    
    
    
    return 0;
}
