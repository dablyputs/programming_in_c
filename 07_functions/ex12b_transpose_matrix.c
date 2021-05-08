#include <stdio.h>

int main(void)
{
    int i, x, y, nRows, nCols;

    printf("Rows: ");
    scanf("%i", &nRows);
    printf("Columns: ");
    scanf("%i", &nCols);

    int array[nRows][nCols], matrix[nCols][nRows];
    
    // Start array at 1
    i = 1;

    void displayMatrix(int r, int c, int array[r][c]);
    void transposeMatrix(int c, int r, int array[r][c], int matrix[c][r]);

    for (x = 0; x < nRows; x++)
    {
        for (y = 0; y < nCols; y++)
        {
            array[x][y] = i;
            ++i;
        }
    }
    // Only pass the array name in the function call
    displayMatrix(nRows, nCols, array);
    printf("\n\n");
    transposeMatrix(nRows, nCols, array, matrix);
    displayMatrix(nRows, nCols, matrix);

    return 0;
}

void transposeMatrix(int c, int r, int array[r][c], int matrix[c][r])
{   
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            matrix[j][i] = array[i][j];
        }
}

// Reused from example 7.13
void displayMatrix(int r, int c, int matrix[r][c])
{
    int row, column;

    for (row = 0; row < r; ++row)
    {
        for (column = 0; column < c; ++column)
        {
            printf("%5i", matrix[row][column]);
        }
        printf("\n");
    }
}