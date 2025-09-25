//Write a program to replace a pattern with another pattern in a string.
#include <string>
using namespace std;

int main() {
    string text, pattern, replace;
    cout << "Enter the main text: ";
    getline(cin, text);
    cout << "Enter the pattern to replace: ";
    getline(cin, pattern);
    cout << "Enter the new pattern: ";
    getline(cin, replace);

    size_t pos = 0;
    while ((pos = text.find(pattern, pos)) != string::npos) {
        text.replace(pos, pattern.length(), replace);
        pos += replace.length();
    }
    cout << "Modified text: " << text << endl;
    cout << "Name: TAANUSH" << endl;
    cout << "Enrollment No: 12414812724" << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, pattern, replace;
    cout << "Enter the main text: ";
    getline(cin, text);
    cout << "Enter the pattern to replace: ";
    getline(cin, pattern);
    cout << "Enter the new pattern: ";
    getline(cin, replace);

    size_t pos = 0;
    while ((pos = text.find(pattern, pos)) != string::npos) {
        text.replace(pos, pattern.length(), replace);
        pos += replace.length();
    }
    cout << "Modified text: " << text << endl;
    cout << "Name: TAANUSH" << endl;
    cout << "Enrollment No: 12414812724" << endl;

    return 0;
}
