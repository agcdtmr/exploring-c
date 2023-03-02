#include <stdio.h>

int main()
{
    int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}};

    int sum = 0;

    // write code that prints the element that is in the fourth row and second column of matrix.
    printf("%i\n", matrix[3][1]);

    // Looping through a two-dimensional array. and add up all the elements. Assign your answer to the sum variable.

    int rowDimension = sizeof(matrix) / sizeof(matrix[0]);
    int columnDimension = sizeof(matrix[0]) / sizeof(int);

    for (int i = 0; i < rowDimension; i++)
    {
        for (int j = 0; j < columnDimension; j++)
        {
            sum = sum + matrix[i][j];
        }
    }
}