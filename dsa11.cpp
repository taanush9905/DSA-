//Write a program to copy all elements of one array into another array

#include <iostream>
using namespace std;

int main() {
    int arr1[100], arr2[100], n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        arr2[i] = arr1[i];
    cout << "Copied array: ";
    for (int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    cout << endl;
    return 0;
}
