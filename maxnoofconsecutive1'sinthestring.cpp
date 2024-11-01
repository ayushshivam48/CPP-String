#include <iostream>
#include <string>
#include <algorithm> // for std::max function
using namespace std;

int longestOnes(string s, int k) {

    int start = 0;
    int end = 0;
    int zero_count = 0;
    int max_length = 0;

    for (; end < s.length(); end++) {
        
        if (s[end] == '0') {
            zero_count++;
        }

        while (zero_count > k) {
            if (s[start] == '0') zero_count--;
            start++; // contracting our window
        }

        // zero_count <= k
        max_length = max(max_length, end - start + 1);

    }
    return max_length;
}

int main() {
    string str;
    cout << "Enter the binary string: ";
    cin >> str;

    int k;
    cout << "Enter max flips: ";
    cin >> k;

    cout << longestOnes(str, k) << endl;
}
