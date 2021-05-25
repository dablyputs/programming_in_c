#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count = 10, x;
    int *int_pointer;

    int_pointer = &count; // point at address of count
    x = *int_pointer; // variable x indirectly access the value of count

    printf("count = %i, x = %i\n", count, x);

    return 0;
}
