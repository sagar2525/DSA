#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int row=0;row<n;row++){
        int k=0;
        for(int col=0;col<(n*2)-1;col++){
            if(col<n-row-1){
                cout<<"   ";
            }
            else if(k<2*row+1){
                cout<<" * ";
                k++;
            }
            else{
                cout<<"   ";
            }
            
        }
        cout<<endl;
    }
    
    
}
