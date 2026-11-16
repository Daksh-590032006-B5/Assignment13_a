#include <stdio.h>
void count(int r, int c, int matrix[r][c], int *positive, int *negative, int *zero, int *even)
{
    *positive = 0;
    *negative = 0;
    *zero = 0;
    *even = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int value = *(*(matrix + i) + j);
            if (value > 0)
            {
                (*positive)++;
            }
            else if (value < 0)
            {
                (*negative)++;
            }
            else
            {
                (*zero)++;
            }
            if (value % 2 == 0)
            {
                (*even)++;
            }
        }
    }
}
int main()
{
    int r, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    int positive, negative, zero, even;
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    count(r, c, matrix, &positive, &negative, &zero, &even);

    printf("\nPositive elements: %d", positive);
    printf("\nNegative elements: %d", negative);
    printf("\nZero elements: %d", zero);
    printf("\nEven elements: %d\n", even);
    return 0;
}
