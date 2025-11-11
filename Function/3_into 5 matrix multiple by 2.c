#include <stdio.h>

#define ROWS 3
#define COLS 5

void InputMatrix(int mat[ROWS][COLS]);
void ShowMatrix(int mat[ROWS][COLS]);
void ScalarMultiply(int mat[ROWS][COLS], int scalar);

int main() {
    int matrix[ROWS][COLS];
    int scalar;

    // Input matrix
    InputMatrix(matrix);

    // Show original matrix
    printf("Original:\n");
    ShowMatrix(matrix);

    // Input scalar
    scanf("%d", &scalar);

    // Multiply and show result
    printf("Multiplied by %d:\n", scalar);
    ScalarMultiply(matrix, scalar);
    ShowMatrix(matrix);

    return 0;
}

void InputMatrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void ShowMatrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void ScalarMultiply(int mat[ROWS][COLS], int scalar) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            mat[i][j] *= scalar;
        }
    }
}
