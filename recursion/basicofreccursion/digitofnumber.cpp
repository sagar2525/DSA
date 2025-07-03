#include<bits/stdc++.h>
using namespace std;

void digit(int& n){
    // base case 
    if( n==0  ){
        return;
    }

    int newvalue = n/10;
    // recursive relation
    digit(newvalue);
    // proccessing
    int single = n%10;
    cout<<single<<" ";

    

}

int main(){
    int n;
    cout<<"value of n"<<endl;
    cin>>n;

    digit(n);

    // for(int i=0;i<;i++){
    //     int ans = n%10;
    //     cout<<"digit is : "<<ans<<endl;
    // }
    return 0;

}