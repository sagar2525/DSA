#include<bits/stdc++.h>
using namespace std;

void printrowwisesum(int arr[][3],int row,int col){
    cout<<"row-wise sum :"<<endl;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum = sum +arr[i][j];

        }
        cout<<sum<<endl;

    }

}
void printcolwisesum(int arr[][3],int row,int col){
    cout<<"col-wise sum :"<<endl;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum = sum +arr[i][j];

        }
        cout<<sum<<endl;

    }

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
    printrowwisesum(arr,row,col);   
    printcolwisesum(arr,row,col);  

    return 0;

}