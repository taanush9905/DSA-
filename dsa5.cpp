//Write a program to print all subarrays of a given array where the sum is equal to zero
#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bool found = false;
    cout << "Subarrays with sum zero:" << endl;
    for (int start = 0; start < n; start++) {
        int sum = 0;
        for (int end = start; end < n; end++) {
            sum += arr[end];
            if (sum == 0) {
                found = true;
                for (int k = start; k <= end; k++)
                    cout << arr[k] << " ";
                cout << endl;
            }
        }
    }
    if (!found)
        cout << "No subarray found with sum zero." << endl;
    return 0;
}
