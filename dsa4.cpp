//Create two sorted arrays and merge them into a third one in sorted manner
#include <iostream>
using namespace std;

int main() {
    int arr1[100], arr2[100], arr3[200];
    int n1, n2, i, j, k;
    cout << "Enter size of first array: ";
    cin >> n1;
    cout << "Enter elements of first array in sorted order: ";
    for (i = 0; i < n1; i++)
        cin >> arr1[i];
    cout << "Enter size of second array: ";
    cin >> n2;
    cout << "Enter elements of second array in sorted order: ";
    for (i = 0; i < n2; i++)
        cin >> arr2[i];
    i = 0; j = 0; k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    while (i < n1)
        arr3[k++] = arr1[i++];
    while (j < n2)
        arr3[k++] = arr2[j++];
    cout << "Merged sorted array: ";
    for (i = 0; i < k; i++)
        cout << arr3[i] << " ";
    cout << endl;
    return 0;
}
