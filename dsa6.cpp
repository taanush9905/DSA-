//Write a program to perform matrix operations such as addition, subtraction, and multiplication of matrices using arrays.
#include <iostream>
using namespace std;

void printMatrix(int m[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}

void transpose(int A[10][10], int rows, int cols, int B[10][10]) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            B[j][i] = A[i][j];
}

void sum(int A[10][10], int B[10][10], int rows, int cols, int C[10][10]) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void difference(int A[10][10], int B[10][10], int rows, int cols, int C[10][10]) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            C[i][j] = A[i][j] - B[i][j];
}

void multiply(int A[10][10], int rowsA, int colsA, int B[10][10], int rowsB, int colsB, int C[10][10]) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}

int main() {
    int matrix1[10][10] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[10][10] = {{7, 8, 9}, {10, 11, 12}};
    int rows1 = 2, cols1 = 3;
    int rows2 = 2, cols2 = 3;
    cout << "Matrix 1\n";
    printMatrix(matrix1, rows1, cols1);
    cout << "Matrix 2\n";
    printMatrix(matrix2, rows2, cols2);

    int sumResult[10][10];
    sum(matrix1, matrix2, rows1, cols1, sumResult);
    cout << "Sum of matrices\n";
    printMatrix(sumResult, rows1, cols1);

    int transposeResult[10][10];
    transpose(matrix1, rows1, cols1, transposeResult);
    cout << "Transpose of Matrix 1\n";
    printMatrix(transposeResult, cols1, rows1);

    int matrix3[10][10] = {{1, 2}, {3, 4}, {5, 6}};
    int rows3 = 3, cols3 = 2;
    int multiplyResult[10][10];
    multiply(matrix1, rows1, cols1, matrix3, rows3, cols3, multiplyResult);
    cout << "Multiplication of Matrix 1 and Matrix 3\n";
    printMatrix(multiplyResult, rows1, cols3);

    return 0;
}

