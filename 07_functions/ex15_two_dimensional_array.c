#include <stdio.h>

int main(void)
{

    void scalarMultiply(int nRows, int nCols, int matrix[nRows][nCols],
                        int scalar);
    void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);
    int sampleMatrix[3][5] =
        {
            {7, 16, 55, 13, 12},
            {12, 10, 52, 0, 7},
            {-1, 1, 2, 4, 9}};
    int nBase = 0;

    while (nBase == 0){
        printf("Enter a base between 1 and 16 or -1 and -16: ");
        scanf("%i", &nBase);
        if ((nBase > 16 || nBase < -16) || nBase == 0){
            nBase = 0;
        } 
        else {
            break;
        }
    }

    printf("Here is your sample matrix:\n\n");
    displayMatrix(3, 5, sampleMatrix);
    scalarMultiply(3, 5, sampleMatrix, nBase);
    printf("\nMultiplied by %i:\n", nBase);
    displayMatrix(3, 5, sampleMatrix);

    return 0;
}

//Funciton to multiply a matrix by a scalar

void scalarMultiply (int nRows, int nCols,
                    int matrix[nRows][nCols], int scalar)
{
    int row, column;

    for (row = 0; row < nRows; ++row)
    {
        for (column = 0; column < nCols; ++column)
        {
            matrix[row][column] *= scalar;
        }
    }
}

void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols])
{
    int row, column;

    for (row = 0; row < nRows; ++row)
    {
        for (column = 0; column < nCols; ++column)
        {
            printf("%5i", matrix[row][column]);
        }
     printf("\n");   
    }
    
}