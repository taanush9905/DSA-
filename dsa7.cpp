//Write a program to demonstrate the use of pointers in performing arithmetic operations (Addition, Subtraction, Multiplication, and Division) between two arrays.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr1[n], arr2[n], result[n];
    int *p1 = arr1, *p2 = arr2, *r = result;

    cout << "Enter " << n << " elements for first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout << "Enter " << n << " elements for second array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    // Addition
    cout << "Addition: ";
    for (int i = 0; i < n; i++) {
        *(r + i) = *(p1 + i) + *(p2 + i);
        cout << *(r + i) << " ";
    }
    cout << endl;

    // Subtraction
    cout << "Subtraction: ";
    for (int i = 0; i < n; i++) {
        *(r + i) = *(p1 + i) - *(p2 + i);
        cout << *(r + i) << " ";
    }
    cout << endl;

    // Multiplication
    cout << "Multiplication: ";
    for (int i = 0; i < n; i++) {
        *(r + i) = *(p1 + i) * *(p2 + i);
        cout << *(r + i) << " ";
    }
    cout << endl;

    // Division (check division by zero)
    cout << "Division: ";
    for (int i = 0; i < n; i++) {
        if (*(p2 + i) != 0)
            *(r + i) = *(p1 + i) / *(p2 + i);
        else
            *(r + i) = 0; // or handle division by zero as needed
        cout << *(r + i) << " ";
    }
    cout << endl;

    cout << "Name: TAANUSH" << endl;
    cout << "Enrollment No: 12414812724" << endl;

    return 0;
}
