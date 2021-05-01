#include <stdio.h>

int gcd (int u, int v)
{
    int temp;

    while (v != 0) {
        temp = u % v; 
        u = v;
        v = temp;
    }

    return u;
}

int lcm(int u, int v)
{
    int lowestCommon = (u * v) / gcd(u, v);
    return lowestCommon;
}


int main(void)
{
    int u, v, multiple;

    printf("Enter two integers and I'll calculate the lowest common multiple: ");
    scanf("%i %i", &u, &v);

    multiple = lcm(u, v);
    
    printf("The lowest common multiple of %i and %i is %i\n", u, v, multiple);
    
    return 0;
}
