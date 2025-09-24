//Write a program using a 2D array to print:
  //1.Total sales by each salesman
  //2.Total sales by each item
#include <iostream>
using namespace std;

int main() {
    int salesdata[5][3], i, j;
    cout << "Enter sales data for 5 salesmen and 3 products" << endl;
    for (i = 0; i < 5; i++) {
        cout << "Salesman " << i + 1 << endl;
        for (j = 0; j < 3; j++) {
            cout << "Product " << j + 1 << ": ";
            cin >> salesdata[i][j];
        }
    }

    cout << "-------------------" << endl;
    cout << "Total sales by each salesman" << endl;
    for (i = 0; i < 5; i++) {
        int salesmantotal = 0;
        for (j = 0; j < 3; j++)
            salesmantotal += salesdata[i][j];
        cout << "Salesman " << i + 1 << " total: " << salesmantotal << endl;
    }

    cout << "-------------------" << endl;
    cout << "Total sales by each product" << endl;
    for (j = 0; j < 3; j++) {
        int producttotal = 0;
        for (i = 0; i < 5; i++)
            producttotal += salesdata[i][j];
        cout << "Product " << j + 1 << " total: " << producttotal << endl;
    }
    return 0;
}
