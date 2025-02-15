/*
 * Program to perform matrix subtraction.
 */
#include <stdio.h>

void subtractMatrices(int matrix1[][3], int matrix2[][3], int result[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void printMatrix(int matrix[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[3][3] = {
        {5, 6, 7},
        {8, 9, 10},
        {11, 12, 13}
    };
    int matrix2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int result[3][3];

    subtractMatrices(matrix1, matrix2, result, 3, 3);

    printf("Matrix 1:\n");
    printMatrix(matrix1, 3, 3);

    printf("Matrix 2:\n");
    printMatrix(matrix2, 3, 3);

    printf("Resultant matrix after subtraction:\n");
    printMatrix(result, 3, 3);

    return 0;
}
