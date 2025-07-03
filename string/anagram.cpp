#include<bits/stdc++.h>
using namespace std;

bool check(string s1,string s2){
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            return false;
        }
    }
    return true;
}  
int main(){
    string s1 = "anagram";
    string s2 = "nagaram";
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(check(s1,s2)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}