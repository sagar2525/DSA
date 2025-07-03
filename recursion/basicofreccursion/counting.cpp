#include<bits/stdc++.h>
using namespace std;

void counting(int n){
  // base case 
    if( n==0 ){
        return;
    }
// proccessing 
    cout<<n<<endl;
// recursive relation 
    counting(n-1);
}

int main(){
    int n;
    cout<<"value of n"<<endl;
    cin>>n; 
    counting(n);
    cout<<endl; 

    return 0 ;

}