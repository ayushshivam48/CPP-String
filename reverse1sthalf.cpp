#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Ayush Shivam";
    cout<<s<<endl;
    int n=s.length();
    reverse(s.begin(),s.begin()+n/2);
    cout<<s<<endl;
}