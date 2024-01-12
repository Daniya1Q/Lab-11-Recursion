#include <iostream>
#include <string>

using namespace std;

void reverseString(string& str, int start, int end) {
    if (start >= end) {
        return;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1);
}

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    reverseString(inputString, 0, inputString.length() - 1);

    cout << "Reversed string: " << inputString << endl;

    return 0;
}