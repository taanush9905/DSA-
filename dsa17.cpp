//Write a program to find the sum of the diagonal elements of a matrix
#include <iostream>
using namespace std;

int main() {
    int mat[10][10], n, sum = 0;
    cout << "Enter size of matrix: ";
    cin >> n;
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    for (int i = 0; i < n; i++)
        sum += mat[i][i];
    cout << "Sum of diagonal elements: " << sum << endl;
    return 0;
}
