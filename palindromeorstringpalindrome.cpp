#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    cout << "1. Check Number Palindrome\n 2. Check String Palindrome\n";
    cin >> choice;

    if (choice == 1) {
        int num, original, reversed = 0;
        cout << "Enter a number: ";
        cin >> num;
        original = num;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10; // Corrected line
        }
        if (original == reversed)
            cout << "Palindrome\n";
        else
            cout << "Not a palindrome\n";
    } else if (choice == 2) {
        string str;
        cout << "Enter a string: ";
        cin >> str;
        int n = str.length();
        int i;
        for (i = 0; i < n / 2; i++) {
            if (str[i] != str[n - i - 1])
                break;
        }
        if (i == n / 2)
            cout << "Palindrome\n";
        else
            cout << "Not a palindrome\n";
    } else {
        cout << "Invalid choice\n";
    }

    return 0;
}