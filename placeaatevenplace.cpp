#include<iostream>
using namespace std;
int main(){
    string s="Ayush Shivam";
    for(int i =0;i<s.length();i++){
        if(i%2==0) s[i]='a';
        cout<<s[i];
    }
}