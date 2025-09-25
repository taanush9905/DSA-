//Write a program to count the total number of even and odd numbers in an array.
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, even = 0, odd = 0;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Even count: " << even << endl;
    cout << "Odd count: " << odd << endl;
    return 0;
}
