#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int j;
        for( j=0;j<i+1;j++){
            int A=j+1;
            char ch=A+'A'-1;
            cout<<ch;
        }
        j=j-1;
        
        for(;j>=1;j--)
        {
            int A=j;
            char ch=A+'A'-1;
            cout<<ch;
        }
        cout<<endl;
    }
    

}