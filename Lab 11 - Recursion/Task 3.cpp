#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

bool isAlphanumeric(char ch) {
    return isalnum(ch);
}

char toLower(char ch) {
    return tolower(ch);
}

bool isPalindromeRecursive(const string& str, int left, int right) {
    if (left >= right) {
        return true;
    }

    while (left < right && !isAlphanumeric(str[left])) {
        left++;
    }

    while (left < right && !isAlphanumeric(str[right])) {
        right--;
    }

    return (toLower(str[left]) == toLower(str[right])) &&
        isPalindromeRecursive(str, left + 1, right - 1);
}

bool isPalindrome(const string& str) {
    return isPalindromeRecursive(str, 0, str.length() - 1);
}

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    if (isPalindrome(inputString)) {
        cout << "The string is a palindrome." << endl;
    }
    else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
