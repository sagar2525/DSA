#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    int brr[3][3];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            brr[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<brr[i][j]<<" ";
            
        } 
        cout<<endl;
    }
}