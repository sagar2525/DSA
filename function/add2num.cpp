#include<bits/stdc++.h>
using namespace std;

int sum2num(int a,int b){
    int sum=a+b;
    return sum;    
}
int main(){
    int a,b;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    int sum = sum2num(a,b);    
    cout<<"reuslt :"<<sum<<endl;
    return 0;
}