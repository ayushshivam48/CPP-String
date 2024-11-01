#include <iostream>
#include <string>
#include <algorithm> // for reverse function
using namespace std;

string decodeString(string s) {

    string result = "";

    // Traversing the encoded string
    for (int i = 0; i < s.length(); i++) {

        if (s[i] != ']') {
            result.push_back(s[i]);
        } else {

            // Extract str from result
            string str = "";
            while (!result.empty() && result.back() != '[') {
                str.push_back(result.back());
                result.pop_back();
            }

            // Reversing the string
            reverse(str.begin(), str.end());

            // Remove the last char('[') from result 
            result.pop_back();

            // Extract num from result
            string num = "";
            while (!result.empty() && result.back() >= '0' && result.back() <= '9') {
                num.push_back(result.back());
                result.pop_back();
            }

            // Reversing the num string
            reverse(num.begin(), num.end());

            // Convert string to int
            int int_num = stoi(num);

            // Inserting str in result int_num times
            while (int_num--) {
                result += str;
            }
        }
    }

    return result;
}

int main() {
    string str;
    cin >> str;

    cout << decodeString(str) << endl;
}
