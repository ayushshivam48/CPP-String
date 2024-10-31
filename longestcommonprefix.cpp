#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // For sort

using namespace std;

string longestCommonPrefix(vector<string> &str) {
    if (str.empty()) {
        return "";
    }

    // Sorting array of strings
    sort(str.begin(), str.end());

    string s1 = str[0]; // First string
    string s2 = str[str.size() - 1]; // Last string

    string ans = "";
    int i = 0;
    int j = 0;

    // Find common prefix between the first and last string
    while (i < s1.size() && j < s2.size()) {
        if (s1[i] == s2[j]) {
            ans += s1[i];
            i++;
            j++;
        } else {
            break;
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    cout << "Enter strings:" << endl;
    vector<string> str(n);
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    cout << "Longest Common Prefix: " << longestCommonPrefix(str) << endl;

    return 0;
}
