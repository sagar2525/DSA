#include<bits/stdc++.h>
using namespace std;

bool findkey(int arr[][3],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                return true;
            }  
        }
    }
    return false;

}

int main(){
    int arr[3][3];
    int row=3;
    int col=3;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }   
    }

    int key;
    

    findkey(arr,row,col,key);

    cout<<findkey(arr,3,3,10)<<endl;

    return 0;

}