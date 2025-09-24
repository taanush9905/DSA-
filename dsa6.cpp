//Write a program to perform linear search in an array.
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter element to search: ";
    cin >> key;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Element not found." << endl;
    return 0;
}
