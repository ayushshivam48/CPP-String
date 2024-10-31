#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> &str) {

    //keeping 1st string as const and comparing it with all other string
    string s1=str[0];
    int ans_length=s1.size();

    for(int i=1;i<str.size();i++){

        int j=0;
        while(j<s1.size()&&j<str[i].size()&&s1[j]==str[i][j])  //finding common prefix string length
            j++;

        ans_length=min(ans_length,j); //updating length of ans string
    }
    string ans=s1.substr(0,ans_length);
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
