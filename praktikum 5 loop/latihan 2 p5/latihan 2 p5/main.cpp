#include <iostream>
using namespace std;

int main() {
    string text;
    bool palindrome = true;

    cout << "Input: ";
    cin >> text;

    int panjang = text.length();

    for (int i = 0; i < panjang / 2; i++) {
        if (text[i] != text[panjang - i - 1]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "\"" << text << "\" is palindrome" << endl;
    else
        cout << "\"" << text << "\" is not palindrome" << endl;

    return 0;
}