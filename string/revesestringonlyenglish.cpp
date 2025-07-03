#include<bits/stdc++.h>
using namespace std;

string reversestring(string s){
    int e = s.size();
    for(int i=0;i<s.size();i++){
        if((s[i]<=90&&s[i]>=65)||(s[i]<=122&&s[i]>=97)){
            if((s[e]<=90&&s[e]>=65)||(s[e]<=122&&s[e]>=97)){
                swap(s[i], s[e]);
                e--;
            }
            else{
                e--;
            }
        }
    }
    return s;
    // int e = s.size() - 1;
    // int i = 0;
    // while (i < e) {
    //     // Check if s[i] is a letter
    //     if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) {
    //         // Check if s[e] is a letter
    //         if ((s[e] >= 65 && s[e] <= 90) || (s[e] >= 97 && s[e] <= 122)) {
    //             swap(s[i], s[e]);
    //             i++;
    //             e--;
    //         } else {
    //             e--;
    //         }
    //     } else {
    //         i++;
    //     }
    // }
    // return s;

}

int main(){
    string s;
    cin>>s;

    string ans = reversestring(s);
    cout<<ans;

}