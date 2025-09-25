//Write a program to multiply two matrices
#include <iostream>
using namespace std;

int main() {
    int mat1[10][10], mat2[10][10], res[10][10];
    int r1, c1, r2, c2, sum;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    if (c1 != r2) {
        cout << "Matrix multiplication not possible." << endl;
        return 0;
    }
    cout << "Enter first matrix elements:" << endl;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> mat1[i][j];
    cout << "Enter second matrix elements:" << endl;
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> mat2[i][j];

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            sum = 0;
            for (int k = 0; k < c1; k++)
                sum += mat1[i][k] * mat2[k][j];
            res[i][j] = sum;
        }
    cout << "Result matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}
