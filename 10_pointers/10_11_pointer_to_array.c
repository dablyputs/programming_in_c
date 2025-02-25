// Function to sum the elements of an integer array

#include <stdio.h>

int arraySum(int array[], const int n)
{
    int sum = 0, *ptr;
    int * const arrayEnd = array + n;

    for (ptr = array; ptr < arrayEnd; ++ptr)
    {
        sum += *ptr;
    }

    return sum;
}

int main(int argc, char const *argv[])
{
    int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", arraySum(values, 10));

    return 0;

}
