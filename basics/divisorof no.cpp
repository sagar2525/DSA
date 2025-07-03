#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    // int out=0;
    // for(int i=n;i>=1;i--){
    //     out = n/i;
    //     if (n==out*i){
    //         cout << out << endl;
    //     }
    // }
    int out=0;
	int final = 0;
	for(int i=n;i>=1;i--){
		n=i;
		for(int i=n;i>=1;i--){
        out = n/i;
            if (n==out*i){
            // cout << out << endl;
			final = final +out;
            }
	    }
    }
    cout<<final<<endl;
}