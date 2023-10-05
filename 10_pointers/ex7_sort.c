/* 
Write a pointer version of the sort() function from Chapter 7, “Working with Functions.” 
Be certain that pointers are exclusively used by the function, including index variables in the loops.
*/

#include <stdio.h>
// Not possible to create a pointer to N because it is defined by the preprocessor.
// Attempting to take the address of N doesn't make sense because it's not 
// a variable stored in memory.
#define N 16

void sort(int *a, int n, int o);

int main(void)
{
    int array[N] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};

    // c compiler treats the appearance of an array name without a subscript
    // as a pointer to the array. Specifying values without a subscript creates
    // a pointer to the first element of the array.
    // Equivalent: valuesPtr = &values[0];
    int *valuesPtr = array;

    printf("The array before the sort:\n");

    for (int i = 0; i < N; ++i)
    {
        printf("%i ", valuesPtr[i]);
    }

    sort(valuesPtr, N, 0);

    printf("\n\nThe array after the sort:\n");

    for (int i = 0; i < N; ++i)
    {
        printf("%i ", valuesPtr[i]);
    }

    printf("\n");
    
    return 0;
}

void sort (int *a, int n, int o)
{
    int i, j, temp;
    // Defining pointers of type int to point to an int
    int *tempPtr = &temp;
    int *iPtr = &i;
    int *jPtr = &j;

    for (*iPtr = 0; i < n - 1; ++i)
    {
        for (*jPtr = i + 1; j < n; ++j)
        {
            if(a[*iPtr] > a[*jPtr] && o == 1)
            {
                *tempPtr = a[*iPtr];
                a[*iPtr] = a[*jPtr];
                a[*jPtr] = *tempPtr;
            } 
            else if (a[*iPtr] < a[*jPtr])
            {
                *tempPtr = a[*iPtr];
                a[*iPtr] = a[*jPtr];
                a[*jPtr] = *tempPtr;
            }
        }
    }
}
