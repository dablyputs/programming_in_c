// Sum all members of an array
#include <stdio.h>


int arraySum(int numbersArray[], int totalIndex)
{
    int i;
    int sumtotal = 0;

    for (i = 0;i < totalIndex; ++i)
    {
        sumtotal += numbersArray[i];
    }
    return sumtotal;
}

int main()
{
    int numbersArray[4] = {1, 1, 1, 1};
    int totalIndex = 4;

    printf("Sum of array is %i\n", arraySum(numbersArray, totalIndex));

    return 0;
}
