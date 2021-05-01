#include <stdio.h>

int gcd (int u, int v)
{
    int temp;

    printf("The gcd of %i and %i is ", u, v);

    while (v != 0) {
        temp = u % v; 
        u = v;
        v = temp;
    }

    return u;
}


int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
