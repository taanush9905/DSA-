//Write a program to print all prime numbers from an array
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i*i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int main() {
    int arr[100], n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Prime numbers: ";
    for (int i = 0; i < n; i++)
        if (isPrime(arr[i]))
            cout << arr[i] << " ";
    cout << endl;
    return 0;
}
