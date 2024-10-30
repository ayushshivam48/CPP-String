//one to one char mapping

#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isIsomorphic(string s1, string s2){

    //create freq array
    vector<int> v1(128,-1);
    vector<int> v2(128,-1);

    if(s1.size()!=s2.size()){
        return false;
    }

    //store freq of char in s1 and s2
    for(int i=0;i<s1.size();i++){
       if (v1[s1[i]] != v2[s2[i]]){  //checking the values if char at idx i match in both vectors
        return false;
       }
       v1[s1[i]] = v2[s2[i]] = i;  //storing string position in vectors for char at idx i
    }
    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;

    if(isIsomorphic(s1,s2)){
        cout<<"Strings are isomorphic"<<endl;
    }else{
        cout<<"Strings are not isomorphic"<<endl;
    }
}