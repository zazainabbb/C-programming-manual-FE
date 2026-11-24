#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int rows, cols, i, j;

    printf("Enter the number of rows (1 to 10)    : ");
    scanf("%d", &rows);
    printf("Enter the number of columns (1 to 10) : ");
    scanf("%d", &cols);

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        printf("Invalid size! Rows and columns must be between 1 and 10.\n");
        return 0;
    }

    printf("\nEnter the elements of the first matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the elements of the second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("B[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Add the corresponding elements
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of the two matrices:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%5d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
