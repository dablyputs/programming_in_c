#include <stdio.h>

int main(void)
{
    int array[4][5], i, x, y;
    int matrix[5][4];
    
    i = 1;
    int r = 4;
    int c = 5;

    void displayMatrix(int nRows, int nCols, int array[nRows][nCols]);
    void transposeMatrix(int c, int r, int array[r][c], int matrix[c][r]);

    for (x = 0; x < 4; x++)
    {
        for (y = 0; y < 5; y++)
        {
            array[x][y] = i;
            ++i;
        }
    }
    // Only pass the array name in the function call
    displayMatrix(4, 5, array);
    printf("\n\n");
    transposeMatrix(4, 5, array, matrix);
    displayMatrix(4, 5, matrix);

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