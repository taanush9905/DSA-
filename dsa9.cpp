//Implement a sparse matrix using an array of structures.

#include <iostream>
using namespace std;

struct Sparse {
    int row, col, val;
};

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[20][20];
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    int count = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (matrix[i][j] != 0)
                count++;
    
    Sparse sparse[30];
    sparse[0].row = rows;
    sparse[0].col = cols;
    sparse[0].val = count;

    int k = 1;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (matrix[i][j] != 0) {
                sparse[k].row = i;
                sparse[k].col = j;
                sparse[k].val = matrix[i][j];
                k++;
            }

    cout << "Sparse Matrix Representation:" << endl;
    cout << "Row Col Val" << endl;
    for (int i = 0; i <= count; i++)
        cout << sparse[i].row << " " << sparse[i].col << " " << sparse[i].val << endl;

    cout << "Name: TAANUSH" << endl;
    cout << "Enrollment No: 12414812724" << endl;

    return 0;
}
