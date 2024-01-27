#include <stdio.h>

#define Rows 2
#define Cols 2

void addMatrices(int a[Rows][Cols], int b[Rows][Cols], int results[Rows][Cols]);
void multiplyMatrices(int a[Rows][Cols], int b[Rows[Cols], int results[Rows][Cols]);
void printMatrix(int matrix[Rows][Cols]);

int main(){
    int matrix1[Rows][Cols] = {{1, 2}, {3, 4}};
    int matrix2[Rows][Cols] = {{5, 6}, {7, 8}};
    int sum[Rows][Cols];
    int Product[Rows][Cols];

    addMatrices(matrix1, matrix2, sum);
    multiplyMatrices(matrix1, matrix2, Product);

    printf("Matrix Addition:\n");
    printMatrix(sum);

    printf("Matrix Multiplication:\n");
    printMatrix(Product);

    return 0;
}

void addMatrices(int a[Rows][Cols], int b[Rows][Cols], int results[Rows][Cols]){
for(int i = 0; i < Rows; i++){
    for(int j = 0 j < Cols; j++){
        results[i][j] = a[i][j] + b[i][j]
        }
    }
}

void multiplyMatrices(int a[Rows][Cols], int b[Rows][Cols], results[Rows][Cols]){
for(int i = 0; i < Rows; i++){
    for(int j = 0 j < Cols; j++){ 
        results[i][j] = 0;
        for(int k = 0; k<Cols; k++){
            results[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
void printMatrix(int matrix[Rows][Cols]){
    for(int i = 0; i < Rows; i++){
        for(int j = 0; j <Colsl j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

