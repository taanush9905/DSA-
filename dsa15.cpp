//Write a program to delete an element from an array at a given position
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter position to delete (0-based index): ";
    cin >> pos;
    for (int i = pos; i < n-1; i++)
        arr[i] = arr[i+1];
    n--;
    cout << "Updated array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

