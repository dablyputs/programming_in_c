// Program to determine if two integers are evenly divisible

#include <stdio.h>

int main(void)
{
    int a,b;

    printf("Enter two integers and I will determine divisibility: ");
    scanf("%i %i", &a, &b);

    if ( b % a == 0) printf("%i is evenly divisible by %i\n", b, a);
    else printf("%i is not evenly divisible by %i\n", b, a);

    return 0;
}
