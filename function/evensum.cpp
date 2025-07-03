#include<bits/stdc++.h>
using namespace std;

int getevensum(int n){
    cout<<"inside getevensum"<<endl;
    cout<<"value of n is :"<<n<<endl;

    int sum=0;
    cout<<"initial value of sum is :"<<sum<<endl;

    for(int i=2;i<=n;i=i+2){
        cout<<"for value of i is :"<<i<<endl;
        sum = sum + i;
        cout<<"sum now become :"<<sum<<endl;

    }
    cout<<"returning sum = "<<sum <<endl;
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<"calling getevensum fuction"<<endl;
    int sum = getevensum(n);
    cout<<"even sum is :"<<sum<<endl;}