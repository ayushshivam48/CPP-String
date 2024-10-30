//letters and letter no both are same

#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isAnagram(string s1, string s2){

    //create freq array
    vector<int> freq(26,0);

    if(s1.length()!=s2.length()){
        return false;
    }

    //store freq of char in s1 and s2
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++; //increment the s1 freq of char
        freq[s2[i]-'a']--; //decrement the s2 freq of char
        }

    //checking the freq of every char is 0
    for(int i=0;i<26;i++){
        if(freq[i]!=0){  //not anagram
            return false;
        }
    }return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;

    if(isAnagram(s1,s2)){
        cout<<"Strings are anagrams"<<endl;
    }else{
        cout<<"Strings are not anagrams"<<endl;
    }
}