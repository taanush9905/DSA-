//Write a program using functions to perform insertion and deletion in an array
#include <iostream>
using namespace std;

void insertElement(int arr[], int &n, int pos, int value) {
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = value;
    n++;
}

void deleteElement(int arr[], int &n, int pos) {
    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[100], n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int pos, value;
    cout << "Enter position to insert (0-based index) and value: ";
    cin >> pos >> value;
    insertElement(arr, n, pos, value);
    cout << "Array after insertion: ";
    printArray(arr, n);
    cout << "Enter position to delete (0-based index): ";
    cin >> pos;
    deleteElement(arr, n, pos);
    cout << "Array after deletion: ";
    printArray(arr, n);
    return 0;
}

