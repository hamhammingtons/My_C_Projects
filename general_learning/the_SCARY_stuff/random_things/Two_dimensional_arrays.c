#include <stdio.h>
int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

// 2 - number of rows
// 3 - number of columns

// REMEMBER! the 2 and 3 are weird, so
// 2 rows will actually be - {0,1}
// and 3 columns will be - {0,1,2}

/*
 *         |  COLUMN 0  |  COLUMN 1  |  COLUMN 2  |
 * --------|------------|------------|------------|
 * ROW 0   |      1     |      4     |      2     |
 * --------|------------|------------|------------|
 * ROW 1   |      3     |      6     |      8     |
 * --------|------------|------------|------------|
 */

int main()
{
    matrix[0][0] = 9;
    printf("%d\n", matrix[0][1]); // [ROW][COLUMN]
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
    }
}