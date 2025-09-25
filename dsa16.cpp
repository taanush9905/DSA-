//Write a program to find the second largest and second smallest elements in an array
#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int max = arr[0], min = arr[0], secMax = arr[0], secMin = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            secMax = max;
            max = arr[i];
        } else if (arr[i] > secMax && arr[i] != max)
            secMax = arr[i];

        if (arr[i] < min) {
            secMin = min;
            min = arr[i];
        } else if (arr[i] < secMin && arr[i] != min)
            secMin = arr[i];
    }
    cout << "Second Largest: " << secMax << endl;
    cout << "Second Smallest: " << secMin << endl;
    return 0;
}
