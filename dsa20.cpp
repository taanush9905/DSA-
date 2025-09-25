//Write a program to subtract one matrix from 
#include <iostream>
using namespace std;

int main() {
    int mat1[10][10], mat2[10][10], res[10][10];
    int r, c;
    cout << "Enter rows and columns for matrix: ";
    cin >> r >> c;
    cout << "Enter first matrix elements:" << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat1[i][j];
    cout << "Enter second matrix elements:" << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat2[i][j];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            res[i][j] = mat1[i][j] - mat2[i][j];
    cout << "Difference of matrices:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}
