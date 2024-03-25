#include <stdio.h>

int main()
{
    int row1, col1, row2, col2, i, j, k;
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);
    if (col1 != row2)
    {
        printf("Error! The number of columns in the first matrix must be equal to the number of rows in the second matrix.");
        return 0;
    }
    int mat1[row1][col1], mat2[row2][col2], res[row1][col2];
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < col1; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("The result of the matrix multiplication is:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
