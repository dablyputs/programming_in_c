#include <stdio.h>

int main(void)
{

    void scalarMultiply(int matrix[3][5],
                        int scalar);
    void displayMatrix(int matrix[3][5]);
    int sampleMatrix[3][5] =
        {
            {7, 16, 55, 13, 12},
            {12, 10, 52, 0, 7},
            {-1, 1, 2, 4, 9}};

    printf("Original matirx:\n");
    displayMatrix(sampleMatrix);

    scalarMultiply(sampleMatrix, 2);
    printf("\nMultiplied by 2:\n");
    displayMatrix(sampleMatrix);

    scalarMultiply(sampleMatrix, -1);
    printf("\nThen Multiplied by -1:\n");
    displayMatrix(sampleMatrix);

    return 0;
}

//Funciton to multiply a matrix by a scalar

void scalarMultiply (int matrix[3][5], int scalar)
{
    int row, column;

    for (row = 0; row < 3; ++row)
    {
        for (column = 0; column < 5; ++column)
        {
            matrix[row][column] *= scalar;
        }
    }
}

void displayMatrix (int matrix[3][5])
{
    int row, column;

    for (row = 0; row < 3; ++row)
    {
        for (column = 0; column < 5; ++column)
        {
            printf("%5i", matrix[row][column]);
        }
     printf("\n");   
    }
    
}