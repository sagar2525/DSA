#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if( n ==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int ans = fib(n-1)+fib(n-2);
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<n<<"th term is : "<<fib(n)<<endl;
    return 0;

}