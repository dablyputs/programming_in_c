#include <stdio.h>

int main(void)
{

    void scalarMultiply(int nRows, int nCols, int matrix[nRows][nCols],
                        int scalar);
    void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);

    int nCols, nRows, i, x, y, input;

    printf("Enter the number of columns: ");
    scanf("%i", &nCols);
    printf("Enter the number of rows: ");
    scanf("%i", &nRows);
    printf("Enter %i itegers either greater than or less than 0: ", (nRows * nCols));

    int sampleMatrix[nRows][nCols];

    // Fill the matrix with integers
    for (x = 0; x < nRows; x++)
    {
        for (y = 0; y < nCols; y++)
        {
            scanf("%i", &input);
            if (input == 0)
            {
                printf("I don't fucks with zero my friend\n");
                return -1;
            }
            else
            {
                sampleMatrix[x][y] = input;
            }
        }
    }

    int nBase = 0;

    while (nBase == 0)
    {
        printf("Enter a base between 1 and 16 or -1 and -16: ");
        scanf("%i", &nBase);
        if ((nBase > 16 || nBase < -16) || nBase == 0)
        {
            nBase = 0;
        }
        else
        {
            break;
        }
    }

    printf("Here is your sample matrix:\n\n");
    displayMatrix(nRows, nCols, sampleMatrix);
    scalarMultiply(nRows, nCols, sampleMatrix, nBase);
    printf("\nMultiplied by %i:\n", nBase);
    displayMatrix(nRows, nCols, sampleMatrix);

    return 0;
}

//Funciton to multiply a matrix by a scalar

void scalarMultiply(int nRows, int nCols,
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

void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols])
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