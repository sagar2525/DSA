#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    cout<<"function call for :"<<n<<endl;

    // base case 
    if( n==1 )
        return 1;
    int ans = n*factorial(n-1);
    return ans;
}

int main(){
    int n;
    cout<<"value of n"<<endl;
    cin>>n;

    int ans = factorial(n);
    cout<<"ans is:"<<ans<<endl; 

    return 0 ;

}