#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int dup=n;
    int output=0;

    vector<int> v;

    while(n!=0){
        int digit = n%10;
        digit = digit*digit*digit;
        // cout<<digit<<endl;
        v.push_back(digit);
        n = n/10;
    }
    for(int i=0;i<v.size();i++){
        output = v[i] + output;
        // cout<<output<<endl;
    }

    if(output==dup){
        cout<<"yes"<<endl<<output;
    }
    else{
        cout<<"no"<<endl<<output;
    }
}