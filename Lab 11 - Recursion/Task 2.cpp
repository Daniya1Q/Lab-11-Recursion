#include <iostream>
#include <string>

using namespace std;

void generatePermutations(string& str, int left, int right) {
    if (left == right) {
        cout << str << endl;
        return;
    }

    for (int i = left; i <= right; ++i) {
        swap(str[left], str[i]);
        generatePermutations(str, left + 1, right);
        swap(str[left], str[i]); 
    }
}

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    int n = inputString.length();

    cout << "Permutations of the string are:\n";
    generatePermutations(inputString, 0, n - 1);

    return 0;
}
