#include<iostream>
using namespace std;
int main(){
    string s="ayush shivam";
    int count=0;
    for(int i =0;i<s.length();i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        count++;
       }
    }
    cout<<count;
}