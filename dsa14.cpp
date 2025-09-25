//Write a program to insert an element in a sorted array so that the sequence remains sorted.
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, value, pos;
    cout << "Enter size of sorted array: ";
    cin >> n;
    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter value to insert: ";
    cin >> value;
    pos = n;
    for (int i = 0; i < n; i++)
        if (value < arr[i]) {
            pos = i;
            break;
        }
    for (int i = n; i > pos; i--)
        arr[i] = arr[i-1];
    arr[pos] = value;
    n++;
    cout << "New array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
