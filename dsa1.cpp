//Write a program to perform Binary Search in an array.
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key, start, end, mid;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter element to search: ";
    cin >> key;
    start = 0;
    end = n - 1;
    bool found = false;
    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == key) {
            cout << "Element found at position " << mid + 1 << endl;
            found = true;
            break;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    if (!found)
        cout << "Element not found." << endl;
    return 0;
}
