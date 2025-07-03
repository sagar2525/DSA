#include<bits/stdc++.h>
using namespace std;

int maxnum(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a&&b>c){
        return b;
    }
    else{
        return c;
    }   
}
int main(){
    int a,b,c;
    cout<<"enter three number"<<endl;
    cin>>a>>b>>c;
    int result = maxnum(a,b,c);    
    cout<<result<<endl;
    return 0;
}